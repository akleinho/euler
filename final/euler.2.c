#include <stdio.h>

int main() {
    int i, j, k;
    int n = 4000000

    for (i = 1, j = 2, k = i + j; k <= n; k = i + j) {
        printf("k = %i\n", k);
        i = j;
        j = k;
    } 

    return 0;
}
