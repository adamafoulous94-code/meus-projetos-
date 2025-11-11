#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char rev[100];
    int len, i;
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite uma outra frase: ");
    fgets(rev, sizeof(rev), stdin);
    rev[strcspn(rev, "\n")] = '\0';
    
    len=strlen(str);
    i=strlen(rev);

    if (i == len)
    {
        printf("As frases têm o mesmo tamanho.\n");
    }
    else if (i > len)
    {
        printf("A segunda frase é maior que a primeira.\n");
    }
    else
    {
        printf("A primeira frase é maior que a segunda.\n");
    }
     printf("Frase 1: %s", str);
     printf("Frase 2: %s", rev);
    
    return 0;
}