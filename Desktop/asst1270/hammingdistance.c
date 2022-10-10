#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//GITHUB ACCOUNT: AliiceK

//TestCases:

// if they are the samme number it will return 0, by XOR property
// if they are different numbers it will calculate the XOR, then loop over their XOR to count the number of 1's and
// put them in the result "hammingdistance".
// if he enters characters (or non-integers) then it will handle it by asking the user again for integers
// if he enters one character and one integer, the program will handle it by asking for integers again
int main() {
    puts("enter 2 numbers to calculate their hamming distance");
    int bit1 = 0;
    int bit2;
    while (bit1 >= 0) { // we will keep on calculating the hammingdistance until a negative number is inputted
        if(scanf("%u %u", &bit1, &bit2) == 2) {
            if (bit1 < 0 || bit2 < 0) {
                break;
            }
            int c = bit1 ^ bit2; // do their XOR to find their hamming distance
            int hammingdistance = 0;
                while (c > 0) {
                hammingdistance += c % 2; //get the last digit (either 0 or 1) and add it to the hamming distance
                c /= 2;
            }
            printf("The hamming distance between %d and %d is %d\n", bit1, bit2, hammingdistance);
            scanf("%d", &bit1);
        } else {
            printf("Only enter integers\n");
            while ((getchar()) != '\n');
        }
        
    }
        
}


