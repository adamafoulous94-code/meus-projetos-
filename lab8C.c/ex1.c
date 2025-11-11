#include <stdio.h>
void areaDeUmaCircunferencia () {
    float raio, area;
    printf("Digite o raio da circunfrencia: ");
    scanf("%f", &raio);
    area = 3.14159 * raio * raio;
    printf("A area da circunferencia e: %.2f\n", area);
}
void perimetroDeUmaCircunferencia () {
    float raio, perimetro;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    perimetro = 2 * 3.14159 * raio;
    printf("O perimetro da circunferencia e: %.2f\n", perimetro);
} 
void VolumeDeUmaEsfera () {
    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    volume = (4.0/3.0) * 3.14159 * raio * raio * raio;
    printf("O volume da esfera e: %.2f\n", volume);
}
int main() {
    int opcao;
    do
    {
    printf ("\n*********MENU**********\n");
    printf ("1 - Area de uma circunferencia\n");
    printf ("2 - Perimetro de uma circunferencia\n");
    printf ("3 - Volume de uma esfera\n");
    printf ("0 - SAIR\n "); 
    printf ("Escolha uma opcao:");
    scanf ("%d", &opcao);
    switch (opcao)
    {
    case 1:
         areaDeUmaCircunferencia();
        break;
    case 2:
        perimetroDeUmaCircunferencia();
        break;
    case 3:
        VolumeDeUmaEsfera();    
        break;
    case 0:
        printf("Saindo do programa.\n");
        break;
    default:
    printf("Opcao invalida. Tente novamente.\n");
    }

   
    } while (opcao != 0);
    
    return 0;
    
   
}