#include <stdio.h>
int main() {
    char s1[100];
    char c;
    int count = 0;   
    printf("Digite uma frase: ");
    scanf("%[^\n]", s1);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == c) {
            count++;
        }
        printf("O caractere '%c' aparece %d vezes na frase.\n", c, count);
    }


    return 0;
}