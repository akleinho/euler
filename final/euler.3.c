#include <stdio.h>

int main() {
    unsigned long long n, i;
    
    printf("n = ");
    scanf("%llu", &n);

    for (i=2; i!=n; ) {
        if (n%i == 0)
            n /= i;
        else
            i++;
    }
    
    printf("%llu\n", n);
    
    return 0;
}
