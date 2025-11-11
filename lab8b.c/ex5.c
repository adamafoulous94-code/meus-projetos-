#include <stdio.h>
int somarParesDoIntervalo(int inicio, int fim) {
    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}
    int main() {
        int inicio, fim;
        printf("Digite o valor inicial do intervalo: ");
        scanf("%d", &inicio);
        printf("Digite o valor final do intervalo: ");
        scanf("%d", &fim);
        int soma = somarParesDoIntervalo(inicio, fim);
        printf("A soma dos numeros pares entre %d e %d e %d.\n", inicio, fim, soma);
        return 0;
}
