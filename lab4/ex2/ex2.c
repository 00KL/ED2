#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que recebe como entrada o caminhamento em pre-order e in-order
// de uma árvore binária e exibe em stdout o caminhamento em post-order da árvore dada.

void print_post_order(int *pre, int *in, int last, int init) {
    // Implemente essa funcao para resolver a questao 2.

    if(last != 0){
        int i;
        for(int j = init; j < last; j++){
            for(i = init; i < last; i++){
                if(pre[j] == in[i]){
                    break;
                }
            }

            if(pre[j] == in[i]){
                break;
            }
        }


        print_post_order(pre, in, i-1, init);
        if(last != i+1){
            print_post_order(pre, in, last, i+1);
        }
        //

        printf("%d ", in[i]);
    }
    else{
        printf("%d ", in[0]);
    }

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
    print_post_order(pre, in, N, 0);
    printf("\n");
    free(pre);
    free(in);
}
