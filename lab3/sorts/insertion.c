#include "../sort.h"

void sort(Item* vet, Item lo, Item hi){
    Item atual, anterior, troca, realocado;

    for(atual = 0; atual < hi; atual++){

        for(anterior = 0; anterior < atual; anterior++){

            //se algum valor anterior a posição atual for
            //menor q ela é necessario mover todos os valores
            //e alocar o valor em seu lugar devido
            if( less( vet[atual], vet[anterior]) ){
                //guarda valor q sera realocado
                realocado = vet[atual];
                //realoca uma casa a frente todos os valores
                //entre o valor q é menor q o atual e o atual
                for(troca = atual; troca > anterior; troca--){
                    vet[troca] = vet[troca - 1];
                }
                vet[anterior] = realocado;
            }

        }

    }

}
