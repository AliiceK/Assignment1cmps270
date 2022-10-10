#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
void printArray();
void arrayHistogram();
void swap();
void printPattern();
void bubblesort();
void median();
int isSorted();
int mode();

//TestCases
// {1,1,1,1,1,1,1,1,1,1} --> if all the elements are the same
// {1,1,1,1,1,1,1,1,1, 2} --> if 9 elements are similar
// {1,1,1,2,2,2,3,3,3,3} ---> elements having the same frequency

int main() {
    int array1[] = {3,1,1,3,1,1,2,3,1,3};
    printArray(array1);
    arrayHistogram(array1);
    for (int i = 0 ; i < SIZE ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    swap(array1,1, 4);
    for (int i = 0 ; i < SIZE ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    bubblesort(array1);
    for (int i = 0 ; i < SIZE ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    median(array1);
    for (int i = 0 ; i < SIZE ; i++) {
        printf("%d", array1[i]);
    }
    printf("\n");
    int mode1 = mode(array1,10);
    printf("the mode is %d", mode1);
    printf("\n");
    int n = isSorted(array1, 10);
    printf("if 1 sorted if 0 not sorted : %d", n);
}
// printArray takes as parameters the array and 
//prints its values with their corresponding index
void printArray(int array[]) {
    printf("%s","Index  Value\n");
    for (int i = 0 ; i < SIZE; i++) {
        printf("%d      %d\n", array[i], i );
    }
}
// ArrayHistogram will take as parameter the array and 
//print out the index with its frequency and histogram
void arrayHistogram(int array[]) {
    int dup[SIZE];
    int i , j , count;

    for (i = 0 ; i < SIZE; i++) {
        dup[i] = -1;
    }

    for (i = 0 ; i < SIZE ; i++) {
        count = 1;
        for (j = i+ 1; j < SIZE; j++) {
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
    for (i = 0 ; i < SIZE; i++) {
        if(dup[i]!=0) {
            printf("%d         %d             ", array[i], dup[i]);
            printPattern(dup[i]);
        }
    } 


}

// function to print out the the star pattern
void printPattern(int dup) {
    for (int i = 0 ; i < dup ; i++) {
        printf("*");
    }
    printf("\n");

}
// swap will take the as parameters an array and the two indices to swap
//effects sawp the array at the indices

void swap(int array[],int a, int b) {
    int temp= array[a];
    array[a] = array[b];
    array[b] = temp;
}
// bubblesort will take as parameteres the array
// output sorts the array using the bubble sort algorithm
void bubblesort(int array[]) {
        for (int i = 0; i < SIZE - 1; ++i) {
            for (int j = 0; j < SIZE - i - 1; ++j) {   
                if (array[j] > array[j + 1]) {
                    swap(array, j, j+1);
            }
        }
    }
}
// median will take the array of size 10 and return its median

void median(int array[]) {
    bubblesort(array);
    printf("the median is %d\n",array[SIZE/2]);
}
//mode will take as parameteres the array with its length
//return the most frequent value
int mode(int a[], int n) {
    int maxVal = 0;
    int maxCount = 0;
    for (int i = 0; i < n ;i++) {
        int count = 0;
        for (int j = 0; j <n ;j++) {
            if (a[j] ==a[i]) {
                ++count;
            }

            if(count > maxCount) {
                maxCount = count;
                maxVal = a[i];
            }
        }
    }
    return maxVal;
}
//isSorted will take as parameters the array and its length
//return whether the array is sorted or not
int isSorted(int a[], int n) {
    if(n==1 || n == 0) {
        return 1;
    if (a[n-1]< a[n-2]) {
        return 0;
    }
        return isSorted(a,n-1);
    }
}




