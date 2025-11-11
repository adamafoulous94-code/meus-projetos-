#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate and print a random number between 0 and 99
    int random_number = rand() % 100;
    printf("Random number: %d\n", random_number);

    return 0;
}
