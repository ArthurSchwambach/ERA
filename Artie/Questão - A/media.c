#include <stdlib.h>
#include <time.h>
#include "media.h"

double calcularMedia(int rodadas)
{
    double soma = 0;

    srand(time(NULL));

    for (int i = 0; i < rodadas; i++) {
        double aleatorio = (double) rand() / RAND_MAX;
        soma += aleatorio;
    }

    return soma / rodadas; 
}
