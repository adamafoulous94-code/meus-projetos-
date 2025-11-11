#include <stdio.h>
int maiorDosTres( int a, int b, int c)
{
  if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int maior = maiorDosTres(num1, num2, num3);
    printf("O maior numero entre %d, %d , %d e %d.\n", num1, num2, num3, maior);

    return 0;
}
