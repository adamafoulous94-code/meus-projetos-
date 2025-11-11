#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    int i;

    printf("Digite uma string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] = s1[i] - 32;
        }
    }

    printf("String convertida: %s\n", s1);

    return 0;
}
