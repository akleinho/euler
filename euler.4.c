#include <stdio.h>
#include <math.h>

int main() {
    int i, j, k, l, n;
    
    scanf("%i", &n);
    //Er zijn 9*10^(n-1) symmetrische getallen te maken uit n-digit producten
    i = 9*(int)pow(10,n-1);
    int sym_getallen[i];

    //vul de rij sym_getallen met alle symmetrische getallen
    for (j = 0, i=(int)pow(10,n)-1; i>((int)pow(10,n-1)-1); i--, j++){
        sym_getallen[j] = i*((int)pow(10,n));
        for (k = 1, l=i; k<=n; k++){
            sym_getallen[j] += (l%(int)pow(10,k))*(int)pow(10,n-k);
            l /= 10;
        }
        printf("sym_getallen[%i] = %i\n", j, sym_getallen[j]);
    }

    //Er zijn (9*10^(n-1))^2 getallen uit n-digit producten te vormen
    //Ho, dat zijn er ong 2x teveel, want ik tel getallen dubbel :) maar voor nu even boeien (de getallen in deze rij met minder dan 2*n digits hoeven ook niet bekeken te worden)
    i = pow(9*(int)pow(10,n-1), 2);
    printf("# n-digit producten = %i\n", i);
    int n_digit_producten[i];

    //vul de rij n_digit_producten met alle n-digit producten
    for (j = 0, i=(int)pow(10,n)-1; i>((int)pow(10,n-1)-1); i--, j++){
        for (l=(int)pow(10,n)-1; l>((int)pow(10,n-1)-1); l--, j++){
            printf("%i * %i =\n", i, l);
            n_digit_producten[j] = i*l;
            printf("n_digit_prodcuten[%i] = %i\n", j, n_digit_producten[j]);
        }
    }

    //Vergelijk de elementen uit n_digit_producten met de elementen uit de lijst sym_getallen
    //for (i=0; n_digit_producten[i] != sym_getallen[j]; i++){
    for (i=0; n_digit_producten[i] != sym_getallen[j]; i++){
        for (j=0; j<9*(int)pow(10,n-1); j++){
            printf("n_digit_producten[%i] = %i, ", i, n_digit_producten[i]);
            printf("sym_getallen[%i] = %i\n", j, sym_getallen[j]);
            continue;
        }
    }

    printf("%i\n", sym_getallen[j]);   

    return (0);
}
