#include <stdio.h>
void classificarNota(float nota){
    if (nota >= 9.5 && nota <= 20.0) {
        printf("Aprovado\n");
    }
    else if (nota >= 7.5 && nota < 9.5) {
        printf("Recuperacao\n");
    }
    else {
        printf("Reprovado\n");
    }
}
    int main () {
        float nota;
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        classificarNota(nota);
        return 0;
    }
