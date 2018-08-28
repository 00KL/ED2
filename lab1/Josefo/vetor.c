#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 4. E  poss ́ıvel  prover  uma  variante  da  estrutura  que   ́e  mais  r ́apida  e/ou  consome  menos
// mem ́oria?  Tente fazer pelo menos uma variante

// 3.  Qual  ́e a estrutura de dados mais adequada para se usar na solu ̧c ̃ao?  Implemente e teste
// essa estrutura. Vetores se mostraram mais eficientes


// root@regata:~/Josefo# time ./exe
// Tamanho do circulo:9
// Regra de votação:5
// 5 1 7 4 3 6 9 2
// 1
//
//
// real    0m1.850s
// user    0m0.000s
// sys     0m0.016s



//criação de 3 variaveis
//static Circulo* C, *aux, *prim;
static int N, M;
static bool* vet;

void iniciaCirculo(int i, int j){
    //Agora se tem acesso em todas as funções posteriomente escritas
    //as variaveis N e M
    //criação de 2 variaveis
    //2 atribuições
    N = i;
    M = j;

    //1 Malloc para o vetor agora q tamanho é conhecido
    //o +1 é para a indice 0 poder ser ignorado e o
    //surgimento do indice N
    vet = (bool*)malloc(N+1 * sizeof(vet) );

    //For para preencher o vetor
    //N atriuições
    for(i = 0; i < N+1; i++){
        vet[i] = 1;
    }
}

void votacao(){

    //1 criação de variavel
    int i = 0, j = 0, k = 0;

    //dessa forma a posição 0 sera ignirada
    //vet[0] = 0;

    //Per correr o vetor N-1 vezes, pois 1 candidato será eleito
    while(k < (N - 1) ){
        //o for deve reiniciar sempre ate sobre apenas o eleito
        for(i = 1; i <= N; i++){
            //somente as posições que não foram eliminadas q devem contar
            if(vet[i] == 1){
                //contando as pessoas eliminaveis
                j++;

                //printf("%d",j );
                //o quinto eliminavel deve ser eliminado
                if(j == M ){
                    //exit(1);
                    //printando eliminados
                    //printf("%d ", i);
                    //eliminando pessoa
                    vet[i] = 0;
                    //contando quantos foram eliminados
                    k++;
                    //zerando j para q ele busque o proximo eliminado
                    j = 0;
                }
            }
        }
    }

    //printf("\n" );

    //busca o eleito
    // for(i = 1; vet[i] != 1; i++);
    // printf("%d\n\n", vet[i]);


}

//void printCirculo();
