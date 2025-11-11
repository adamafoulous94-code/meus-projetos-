#include <stdio.h>
int calcularFatorial(int numero) {
    if (numero < 0) {
        return -1; // Fatorial não definido para números negativos
    }
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}
int main() {
    int numero;
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);
    int resultado = calcularFatorial(numero);
    if (resultado == -1) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d e %d.\n", numero, resultado);
    }
    return 0;
}