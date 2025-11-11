#include <stdio.h>
void arrayPrint(int array[], int arrayLength) {
    printf("Array elements: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int length = sizeof(myArray) / sizeof(myArray[0]);
    arrayPrint(myArray, length);
    return 0;
}
