#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <stdlib.h>
#include <time.h>
int main(){
    puts("enter 2 bits to calculate their hamming distance");
    int bit1;
    while (!(scanf("%d", &bit1)< 0)) {
    int bit2;
    scanf("%d", &bit2);
    int c = bit1 ^ bit2;
    int hammingdistance = 0;
    while (c > 0) {
        hammingdistance += c % 2;
        c /= 2;
    }
    printf("The hamming distance between %d and %d is %d\n", bit1, bit2, hammingdistance);
    }

}