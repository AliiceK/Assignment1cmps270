#include <stdio.h>
int lsb();
int msb();



int main() {
    //10100 = 40 
    int leastsig = lsb(40);
    int mostsig = msb(40);
    printf("%d\n", leastsig);
    printf("%d\n", mostsig);
    printf("the difference between the msb and lsb is %d", mostsig - leastsig);

}

int msb(unsigned int num)
{
    int cnt = 0;

    while (num) {
        cnt++;
        num = num >> 1;
    }

    return cnt - 1;
}

int lsb(int num) {
    int position = -1;
    while (!(num & 1)) {
        num >>= 1;
        position++;
    }
    return position;
}
