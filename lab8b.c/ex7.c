#include <stdio.h>
void imprimirTabuada(int numero) {
    printf("Tabuada do %d:\n", numero);
    for ( int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
    int main () { 
        int numero ; 
        printf("Digite um numero inteiro para ver a tabuada: ");
        scanf("%d", &numero);
        imprimirTabuada(numero);
        return 0;
}