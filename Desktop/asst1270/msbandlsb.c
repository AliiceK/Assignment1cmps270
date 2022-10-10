#include <stdio.h>
#include <ctype.h>
int lsb();
int msb();

//GITHUB : AliiceK
//TestCases Include : 
// if the the lsb is in the first index , then we will return position 0;
// if the lsb is not in the first index , then the position will start at -1, then when the AND operation will not give us 1
// we will shft our num to the right and increment the position.
// if the user inputs a character , the program will stop 
// if the user enters a non-positive inetger the program will stop

int main() {
    printf("Enter a positive number to calculate the difference between its msb and lsb\n");
    int num;
    scanf("%d", &num);
    if (!isdigit(num) || num <0) {
        printf("Please enter a positive integer");
    } else {
    while (num <= 0) { 
        printf("Please enter a non-zero positive number\n");
        scanf("%d", &num);
    }
    int leastsig = lsb(num);
    int mostsig = msb(num);
    printf("the difference between the msb and lsb of %d is %d",num, mostsig - leastsig);
    }
}

//Specifications: Requires the number entered by the user
// effects: prints the index of msb
int msb(unsigned int num)
{
    int cnt = 0;

    while (num) { // we will keep on shifting the digit to the right until we reach 0
        cnt++;     // when num becomes 0, it means that we found the position of the msb
        num = num >> 1;
    }

    return cnt - 1;
}
//Specifications: Requires the number entered by the user
// effects: gives the index of the lsb

int lsb(int num) {
    int position = -1;
        if (num &1) { // this if condition is for the test case where the lsb is at index 0, otherwise we start at -1
            position = 0;
        } else {
            while (!(num & 1)) { // we do the bitwise AND operation with the last bit of num and with 1
            position++;        // if the result of the operation isn't 1, we shift right
            num >>= 1;            // if it's 1 , then we found the lsb and we return it's position
        }
    }
    return position;
}
