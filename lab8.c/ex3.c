#include <stdio.h>
void absoluteValue(){
    int x;
    printf("Enter an integer: ");
    if (scanf("%d", &x) == 1) {
        if (x < 0) {
            x = -x;
        }
        printf("The absolute value is: %d\n", x);
    } else {
        printf("Invalid input\n");
    }
}