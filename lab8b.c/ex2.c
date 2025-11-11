#include <stdio.h>
#include <stdlib.h> 

// Função que calcula a soma dos dígitos de um número inteiro
int soma_digitos(int numero) {
    int soma = 0;

    numero = abs(numero); // garante que o número é positivo

    while (numero > 0) {
        soma += numero % 10; // pega o último dígito
        numero /= 10;        // remove o último dígito
    }

    return soma;
}

int main() {
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = soma_digitos(n);

    printf("A soma dos digitos de %d e %d.\n", n, resultado);

    return 0;
}
