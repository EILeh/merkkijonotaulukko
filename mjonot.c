#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "mjonot.h"

char ** kopioi_mjt(char **mjt, size_t lkm)
{
    char **x = malloc(lkm*sizeof(char *));
    int i = 0;
    char **y;

    for (i = 0; i < lkm ; ++i)
    {
        x[i] = malloc((strlen(mjt[i]) + 1) * sizeof(char));

        strcpy(x[i], mjt[i]);
    }
    return x;



}
