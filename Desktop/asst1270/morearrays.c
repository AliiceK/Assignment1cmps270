#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print();
void concat();

int main() {
   char* array[2][15] = {{"I","LOVE","CODING"},
                        {"THIS","IS","SPARTA"}};
   concat(array, 2);
}
//concat all the strings in an array of char*

void concat(char* array[2][15], int size) {
   char* result[2];
   for(int i = 0; i< 2; i++) {
      char* temp =(char*) malloc(1000 * sizeof(char));
      temp[0] = '\0';
      for(int j = 0; j < 3; j++){ 
         strcat(temp, array[i][j]);
         if (j!=2)
            strcat(temp," ");
      }
      result[i] = temp;
   }
   for(int i = 0; i < 2; ++i){
    print(result[i]);
    printf("\n");
   }
}
//function to print out the the array
void print(char* C) {
    int i = 0;
    while (C[i] != '\0') {   
        printf("%c", C[i]);                      
        i++;
    }
}

