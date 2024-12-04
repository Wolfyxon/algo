#include <stdio.h>

/*

alkane (PL: alkan):
    C_{n} H_{2n + 2}

alkene (PL: alken):
    C_{n} H_{2n}

alkyne (PL: alkin):
    C_{n} H_{2n-2}

*/

struct Hydrocarbon {
    char* plName;
    int c;
    int h;
};

int main(void) {
    int c;
    int h;

    printf("C amount: ");
    scanf("%i", &c);

    printf("H amount: ");
    scanf("%i", &h);

    if(h == 2 * c + 2) {
        puts("Alkane");
    } else if(h == 2 * c) {
        puts("Alkene");
    } else if(h == 2 * c - 2) {
        puts("Alkyne");
    } else {
        puts("error");
    }
}