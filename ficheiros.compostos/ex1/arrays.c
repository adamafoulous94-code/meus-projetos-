#include <stdio.h>
#include <math.h>
#include "arrays.h"

void arrayPrint(int array[], int arrayLength) {
    printf("Vetor: [");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);
        if (i < arrayLength - 1) printf(", ");
    }
    printf("]\n");
}

    ArrayStats arrayStatistics(int array[], int arrayLength) {
    ArrayStats stats;
    int sum = 0, min = array[0], max = array[0];

    for (int i = 0; i < arrayLength; i++) {
        sum += array[i];
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }

    double mean = (double) sum / arrayLength;
    double varianceSum = 0.0;

    for (int i = 0; i < arrayLength; i++) {
        varianceSum += pow(array[i] - mean, 2);
    }
    double variance = varianceSum / arrayLength;

    stats.sum = sum;
    stats.mean = mean;
    stats.minimum = min;
    stats.maximum = max;
    stats.variance = variance;

    return stats;
}

void arrayStatsPrint(ArrayStats statistics) {
    printf("=== Estatísticas do Vetor ===\n");
    printf("Soma: %d\n", statistics.sum);
    printf("Média: %.2f\n", statistics.mean);
    printf("Mínimo: %d\n", statistics.minimum);
    printf("Máximo: %d\n", statistics.maximum);
    printf("Variância: %.4f\n", statistics.variance);
}
