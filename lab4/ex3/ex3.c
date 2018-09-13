#include <stdio.h>
#include <stdlib.h>

#define MAX 100

float f_C(int N) {
    // Implemente essa funcao para resolver a questao 3.
    float somatorioN = 1, somatorioC = 0, i;
    for(i = 1; i <= N; i++){
        somatorioC += somatorioN;
        somatorioN = i + (1/i)*somatorioC*2;
    }

    return somatorioN;
}

int main() {
    int N;
    // Le a entrada.
    scanf("%d\n", &N);
    // Calcula e exibe a saida.
    float res = f_C(N);
    printf("%f\n", res);
}
