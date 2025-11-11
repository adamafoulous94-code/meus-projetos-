#include <stdio.h>

int itsdigit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char c;
    printf("digite um caractere: ");
    scanf(" %c", &c);

    if (itsdigit(c)) {
        printf("O caractere '%c' e um digito.\n", c);
    } else {
        printf("O caractere '%c' nao e um digito.\n", c);
    }

    return 0;
}
