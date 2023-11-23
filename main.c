#include <stdio.h>
#include <stdlib.h>
#include "mjonot.h"

int main(int argc, char *argv[])
{ /* Annetaan parametriksi osoitin indeksiin 1 ja kooksi argc - 1. */
  /* Näin ollen vain varsinaiset komentoriviparametrit kopioidaan. */
  char **kopiot = kopioi_mjt(&argv[1], argc - 1);
  int i = 0;
  for(i = 0; i < (argc - 1); ++i)
  {
    printf("argv[%d]: %s, kopiot[%d]: %s\n", i+1, argv[i+1], i, kopiot[i]);
    free(kopiot[i]); /* Kokeillaan myös vapauttaa kopio. */
  }
  free(kopiot); /* Vapautetaan kopiotaulukko. */
  return 0;
}
