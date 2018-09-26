#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que recebe como entrada o caminhamento em pre-order e in-order
// de uma árvore binária e exibe em stdout o caminhamento em post-order da árvore dada.

void print_post_order(int *pre, int *in, int N) {
    // Implemente essa funcao para resolver a questao 2.
    static int root = 0;
    int root_atual = pre[root++];
    int prox_tree;

    //Condições de parada da recursão
    if(N == 0) return;//caso o tamanho do vetor in seja 0
                      //não temos mais o que percorrer
    if(N == 1){
        printf("%d ", in[0]);//caso haja apenas um valor em in
        return;              //devemosprintar tal valor e fina-
    }                        //lizar o programa

    //encontra raiz em in
    for(prox_tree = 0; in[prox_tree] != root_atual; prox_tree++);

    //arvore da esquerda
    print_post_order(pre, in, prox_tree);

    //arvore da direita
    print_post_order(pre, in+prox_tree+1, N-prox_tree-1);

    printf("%d ", root_atual);

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







int calc2(){
    char entrada;
    int numeros[50], atual, cont = 0;

    entrada = getc(stdin);
    while(entrada != EOF){
        if(entrada => '0' && entrada <= '9'){
            atual = entrada - 48;
            entrada = getc(stdin);

            while(entrada != ' '){
                atual = (atual*10) + (entrada - 48);
                entrada = getc(stdin);
            }

            numeros[cont] = atual;
            cont++;
        }
        else{
            if(entrada == '+'){
                numeros[cont] = numeros[cont] + numeros[cont-1];
                cont--;
            }

            else if(entrada == '*'){
                numeros[cont] = numeros[cont] * numeros[cont-1];
                cont--;
            }

            else{
                entrada = getc(stdin);
            }
        }
    }

    return numeros[0];
}
