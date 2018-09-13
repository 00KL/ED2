#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que recebe como entrada o caminhamento em pre-order e in-order
// de uma árvore binária e exibe em stdout o caminhamento em post-order da árvore dada.

void print_post_order(int *pre, int *in, int N) {
    // Implemente essa funcao para resolver a questao 2.
}

int main() {
    // Le a entrada.
    int N;
    scanf("%d\n", &N);
    int *pre = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &pre[i]);
    }
    int *in = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &in[i]);
    }

    // Calcula e exibe a saida.
    print_post_order(pre, in, N);
    printf("\n");
    free(pre);
    free(in);
}
