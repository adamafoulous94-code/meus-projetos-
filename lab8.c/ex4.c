#include <stdio.h>
void testar(int a, int b) {
    printf("This is a test function.\n");
    printf("digite um inteiros: ");
    scanf("%d", &a);
    printf("digite um outro inteiros: ");
    scanf("%d", &b);
    if (a > b) {
        printf("O maior e: %d\n", a);
    } else if (b > a) {
        printf("O maior e: %d\n", b);
    } else {
        printf("Os numeros sao iguais: %d\n", a);
    }
}