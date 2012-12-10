#include <stdio.h>

int sum(int n, int max) {
    int i,j;
    j = 0;
    for (i=0; i < max; i += n) {
        j += i;
//      printf("%i> %i, %i\n", n, i, j);
    }
    return j;
}

int main (int argc, char *argv[]) {
    int i = 3, j = 5;
    int max = 1000;
//int max = (int *)argv[1];

    printf("%i + %i - %i = %i\n", sum(i,max), sum(j,max), sum(i*j,max), (sum(i,max) + sum(j,max) - sum(i*j,max)));

    return 0;
}
