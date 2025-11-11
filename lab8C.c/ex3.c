#include <stdio.h>
int main(){
 int i, k = 10, mag = 5;
 for (i = 0; i < k; i++){
 if (i == mag)
 continue;
 if ((i%3) == 2)
 printf("%d ", i);
 printf ("#\n");
 }
 return 0;
}