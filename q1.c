#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 15

int main(){
    float maior = 0;
    srand(time(NULL));

    float vetor[TAM];
    for (int i = 0; i < TAM ;i++){
        vetor[i] = rand() / (float)RAND_MAX;
        printf("  %f  ,", vetor[i]);
    }
    float menor = vetor[0];
    for (int i = 0; i<TAM ;i++){
        if (vetor [i] >= maior){
            maior = vetor [i];
        }
    }
    for (int i = 0; i<TAM ;i++){
                if (vetor [i] <= menor){
            menor = vetor [i];
                }
    }
    printf("maior: %f , menor: %f, soma: %f", maior, menor, maior + menor);
    return 0;
}