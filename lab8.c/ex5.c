#include <stdio.h>

int parteInteira(double num) {
    // Converte o número real para inteiro (descarta a parte decimal)
    return (int)num;
}

int main() {
    double valor;
    
    printf("Digite um numero real: ");
    scanf("%lf", &valor);  // %lf para ler double
    
    printf("A parte inteira de %.2lf e: %d\n", valor, parteInteira(valor));
    
    return 0;
}
