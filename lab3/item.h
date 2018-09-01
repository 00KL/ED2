#ifndef _H_ITEM
#define _H_ITEM

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define key(A)          (A)
#define less(A, B)      (key(A) < key(B))
#define exch(A, B)      { Item t = A; A = B; B = t; }
#define compexch(A, B)  if (less(B, A)) exch(A, B)

Item* preencheVetor(FILE*, int*, int);
void printVetor(int*, int);
#endif
