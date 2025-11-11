#ifndef arrays_h
#define arrays_h

// Tipo composto que guarda estatísticas de um vetor de inteiros
typedef struct {
    int sum;
    double mean;
    int minimum;
    int maximum;
    double variance;
} ArrayStats;

// Declaração das funções do módulo
void arrayPrint(int array[], int arrayLength);
ArrayStats arrayStatistics(int array[], int arrayLength);
void arrayStatsPrint(ArrayStats statistics);

#endif