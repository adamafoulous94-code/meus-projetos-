#include <stdio.h>
#include "arrays.h"

int main() {
    int valores[] = {4, 8, 6, 5, 3, 9, 7};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    arrayPrint(valores, tamanho);

    ArrayStats estatisticas = arrayStatistics(valores, tamanho);

    arrayStatsPrint(estatisticas);

    return 0;
}
