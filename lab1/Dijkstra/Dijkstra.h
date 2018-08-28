#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha{
    double pilhaDouble[99];
    char pilhaChar[99];

    int Tdouble;
    int Tchar;
} Pilha;

void extracao(char*);

void operacao();
