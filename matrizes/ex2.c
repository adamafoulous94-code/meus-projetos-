#include <stdio.h>
#define row 3
#define col 3

void printfMatrix (char v[row][col]){
    for (int i = 0; i<row ; i++){
        for (int j = 0; j< col; j++){
            printf("%c ", v[i][j]); 
        }
        printf("\n"); 
    }
}
int checkWin(char v[3][3], char p) {

    for (int i = 0; i < 3; i++) {
        if (v[i][0] == p && v[i][1] == p && v[i][2] == p)
            return 1;
        if (v[0][i] == p && v[1][i] == p && v[2][i] == p)
            return 1;
    }

    if (v[0][0] == p && v[1][1] == p && v[2][2] == p)
        return 1;

    if (v[0][2] == p && v[1][1] == p && v[2][0] == p)
        return 1;

    return 0;
}
int chekIfMatrixFull(char v[row][col]){
    int count = 0;
    for (int i = 0; i<row ; i++){
        for (int j = 0; j<col;j++){
            if (v[i][j] != '-'){
                count++; 
            }
        }
    }
    if (count == 9){
        printf("it's a draw\n"); 
        return 0;
    }
    return 1;
}
int main(){

    char v[row][col];
    int jogo;
    printf("do u wanna play X e O game (1 == yes / 0 == no) ? "); 
    int play ; 
    scanf("%d", &play); 
    if (play == 1){
        printf("choose your symbol (1 == X / 0 == O) ? ");
        scanf("%d", &jogo);
                if (jogo == 1 ){
                printf("u choose X sym\n"); 
                for (int i= 0 ; i<row; i++){
                    for (int j=0; j<col; j++){
                        v[i][j] = '-';
                        printf("%c ", v[i][j]); 
                    }
                        printf("\n"); 
                }
            }
                else if (jogo == 0){
                printf("U choose O sym\n"); 
                for (int i= 0 ; i<row; i++){
                    for (int j=0; j<col; j++){
                        v[i][j] = '-';
                        printf("%c ", v[i][j]); 
                    }
                        printf("\n"); 
                    }
                }
                else {
                    printf("invalid choice \n , please restart the game"); 
                    return 0; 
                }
                printf("----------------COMEÇA O JOGO---------------\n"); 
                printf("go ...\n"); 
                for (int vez = 0 ; vez < 9 ; vez++){
                    int lin, colu; 
                    printf("choose line and colum (0, 1, 2):\n");
                    scanf ("%d %d", &lin , &colu);
                    if (jogo == 1){
                        if (v[lin][colu] != '-') {
                            printf("This place is already taken! Try again.\n");
                            vez--;   // repeat the turn
                            continue;
                        }
                        if (checkWin(v, 'O')){
                            printfMatrix(v);
                            printf("O win\n"); 
                            return 0; 
                        }
                        if (checkWin(v, 'X')){
                            printfMatrix(v);
                            printf("X win\n"); 
                            return 0;
                        }
                        if (vez % 2 == 0){
                            v[lin][colu] = 'X'; 
                        }
                        else {
                            v[lin][colu] = 'O'; 
                        }
                    }
                    else if (jogo == 0){
                        if (v[lin][colu] != '-') {
                            printf("This place is already taken! Try again.\n");
                            vez--;   // repeat the turn
                            continue;
                        }
                        if (checkWin(v, 'O')){
                            printfMatrix(v);
                            printf("O win\n"); 
                            return 0; 
                        }
                        if (checkWin(v, 'X')){
                            printfMatrix(v);
                            printf("X win\n"); 
                            return 0;
                        }
                        if (vez % 2 == 0){
                            v[lin][colu] = 'O';
                        }
                        else {
                            v[lin][colu] = 'X';
                        }
                    }
                    else {
                        printf("invlaid choice \n, please restart the game"); 
                        return 0;
                    }
                    printfMatrix(v); 
            }
        }

    else {
        printf("ok, see u later!\n"); 
        return 0;
    }
}
    