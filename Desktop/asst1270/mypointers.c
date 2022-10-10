#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void print();
void merge();
void mergehelper();

int main() {
    char *str1[2] = {"ab","ac"};
    char *str2[4] = {"za", "zb", "zcccc"};
    merge(str1, str2, 2, 3);
}
// function that takes a pointer to the array and print the elements
void print(char** array) {
    for (int i = 0 ; i < 5 ; i++) {
        char *pt = array[i];
        printf("%s\n", pt);
    }

}
//function that takes the 2 arrays and merges all the lements and adds them to the new 3rd array
void merge(char** arr1, char** arr2, int l1, int l2) {
    char* s[100];
    char* arr3[l1+l2];
    for (int i = 0 ; i < l1; i++) {
        char *pt = arr1[i];
        arr3[i] = pt;
        
    }
    int index = 0;

    for (int i = l1 ; i < l1 + l2 ; i++) {
        char *pt = arr2[index];
        arr3[i] = pt;
        index++;
    }
    mergehelper(arr3, l1 + l2);
    print(arr3);
}
//function merge helper will take the array and sort the array elements in alpha-numerical order
void mergehelper(char** arr, int l) {
    for (int i = 0 ; i < l ; i++) {
        for (int j = i+1 ; j < l ; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
