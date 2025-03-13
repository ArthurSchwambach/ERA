#include "media.h"
#include <CRpaic.h>
#include <stdio.h>

int main(void) {

  int rodadas = get_int("Quantas rodadas você quer executar? ");

  if (rodadas <= 0) {
    printf("0 não vale! Digite um valor maior do que 0!\n");
    return 1;
  }

  double media = calcularMedia(rodadas);

  printf("A média após %d rodadas é: %.6f\n", rodadas, media);

  return 0;
}
