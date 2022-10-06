#include <stdio.h>
int lsb();
int msb();



int main() {
    //10100 = 40 
    int leastsig = lsb(40);
  //  int mostsig = msb(40);
    printf("%d", leastsig);
  //  printf("%d", mostsig);

}

int msb(int num) {
    int position = -1;
    while (!(num & 1)) {
        num <<= 1;
        position++;
    }
    return position;
}

int lsb(int num) {
    int position = -1;
    while (!(num & 1)) {
        num >>= 1;
        position++;
    }
    return position;
}
