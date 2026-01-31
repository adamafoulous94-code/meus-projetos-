#include <stdio.h>
int main(){
    int v[6]; 
    int op; 
    for (int i= 0 ; i < 6; i++){
        printf("ktb chi haja: \n");
        scanf("%d", &v[i]);
        
    }
    printf("the numbers u entered are : \n"); 
    for (int i=0 ; i < 6; i++){
        printf("%d\n", v[i]); 
    }
    printf("do u wanna order the numbers in the write order ? (1 for yes / 0 for no) \n");
    scanf("%d", &op); 
    if (op == 1){
        int temp; 
        for (int i = 0; i < 6 -1 ; i++){
            for (int j = 0; j < 6 - 1 -i; j++){
                if (v[j] > v [j +1]){
                    temp = v [j]; 
                    v[j]= v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
    }
    else {
        printf("ok bye\n"); 
        return 0; 
    }
    printf("the ordered numbers are : \n"); 
    for (int i = 0; i <6 ; i++){
        printf("%d\n", v[i]);
    }

    printf("quer fazer alguma operacao ? (yes = y / no = n)\n");
    char choice; 
    scanf("%c", &choice); 
    scanf("%c", &choice);
    if (choice == 'y'){
        printf("escola uma operacao(so escreve um numero) \n"); 
        printf("1- soma dos numeros \n"); 
        printf("2- subtração dos numeros \n"); 
        printf("3- multiplicaçao dos numerosr\n"); 
        printf("4-media dos numeros\n"); 
        printf("5-maior numero\n");
        printf("6-menor numero\n"); 
        printf("7-sair\n");
        int op2; 
        scanf("%d",&op2); 
        int result; 
        switch (op2){
            case 1: 
                result = 0; 
                for (int i = 0; i < 6; i++){
                    result += v[i]; 
                    printf("%d\n", result);  
                }
                break; 
            case 2: 
                result = v[0];
                for (int i = 0; i < 6 ; i++){
                    result -= v[i]; 
                    printf("%d\n", result); 
                }
                break;
            case 3: 
                result = 1; 
                for (int i = 0 ; i <  6 ; i++){
                    result *= v[i]; 
                    printf("%d\n", result); 
                }
                break; 
            case 4:
                result = 0; 
                for (int i = 0; i < 6; i++){
                    result += v[i]; 
                }
                result = result / 6; 
                    printf("%d\n", result); 
                break;
            case 5: 
                result = v[0]; 
                if (v[1] > result) 
                result = v[1];
                if (v[2] > result) 
                result = v[2];
                if (v[3] > result) 
                result = v[3];
                if (v[4] > result) 
                result = v[4];
                if (v[5] > result) 
                result = v[5];
                printf("%d\n", result);  
                break; 
            case 6: 
                result = v[0]; 
                if (v[1] < result) 
                result = v[1];
                if (v[2] < result) 
                result = v[2];
                if (v[3] < result) 
                result = v[3];
                if (v[4] < result) 
                result = v[4];
                if (v[5] < result) 
                result = v[5];
                printf("%d\n", result); 
                break; 
            case 7: 
            printf("saindo ...\n");
            return -1;
            default : 
            printf("invalid operation\n");
            break;         
        }
    
    }
    else {
        printf("okey bye\n");
        return 0;
    }

}