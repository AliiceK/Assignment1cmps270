#include <stdio.h>
#include <stdlib.h>

#define SIZE 10;
void function1();
void function2();
void swap();
void printPattern();
void bubblesort();
void median();


int main() {
    int array1[] = {1,2,3,1,3,2,2,2,3,3};
    function1(array1);
    function2(array1);
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    swap(array1,1, 4);
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    bubblesort(array1);
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    median(array1);
}

void function1(int array[]) {
    printf("%s","Index  Value");
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d      %d\n", array[i], i );
    }
}

void function2(int array[]) {
    int dup[10];
    int i , j , count;

    printf("Enter the elements in array: ");
    for (i = 0 ; i < 10 ; i++) {
        scanf("%d", &array[i]);
        dup[i] = -1;
    }

    for (i = 0 ; i < 10 ; i++) {
        count = 1;
        for (j = i+ 1; j < 10; j++) {
            if (array[i] == array[j]) {
                count++;
                dup[j] = 0;
            }
        }

        if (dup[i]!= 0) {
            dup[i] = count;
        }
    }

    printf("\nValue    Frequency     Histogram\n");
    for (i = 0 ; i < 10; i++) {
        if(dup[i]!=0) {
            printf("%d         %d             ", array[i], dup[i]);
            printPattern(dup[i]);
        }
    } 


}

void printPattern(int dup) {
    for (int i = 0 ; i < dup ; i++) {
        printf("*");
    }
    printf("\n");

}


void swap(int array[],int a, int b) {
    int temp= array[a];
    array[a] = array[b];
    array[b] = temp;
}

void bubblesort(int array[]) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9 - i - 1; ++j) {   
                if (array[j] > array[j + 1]) {
                    swap(array, j, j+1);
            }
        }
    }
}

void median(int array[]) {
    bubblesort(array);
    printf("%d",array[5]);
}




