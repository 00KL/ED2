#include <stdio.h>
#include <stdlib.h>

// Implemente uma função para ordenar um vetor contendo 100 strings (char *) de no
// máximo 17 caracteres. É proibido o uso da função de sistema qsort e das funções de
// manipulação de strings da biblioteca string.h. Você é livre para implementar o método
// de ordenação que quiser.

#define M 100
#define N 18

void strcpy(char copia[N], char alberto[N] ){
    for(int i = 0; i < N; i++){
        copia[i] = alberto[i];
    }
}

void sort(char a[M][N]) {
    // Implemente essa funcao para resolver a questao 4.
    char troca[N];
    int k;

    for(int i = 0; i < M - 1 ; i++){
        for(int j = i + 1; j < M; j++){

            for(k = 0; a[i][k] == a[j][k]; k++);

                if(a[i][k] > a[j][k]){

                    strcpy(troca, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], troca);


            }

        }
    }
}

int main() {
    char a[M][N];

    // Le a entrada.
    for (int i = 0; i < M; i++) {
        fscanf(stdin,"%s", a[i]);
    }

    // Ordena.
    sort(a);

    // Exibe o resultado.
    for (int i = 0; i < M; i++) {
        printf("%s\n", a[i]);
    }
}
