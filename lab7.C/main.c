#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[100];
    printf("Digite uma string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    
    printf("String convertida: %c\n", toupper (s1[0]));
    return 0;
}