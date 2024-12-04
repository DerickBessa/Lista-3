#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int comparador(const void *a, const void *b){
        
        return ((*(int*)a) - (*(int*)b));
    }

void bubblesort(int a[]){

    for (int i = 0; i < TAM - 1; i++)
    {
        for (int j = 0; j < TAM - i -1; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] ^= a[j+1]; // ai é o resultado
                a[j+1] ^= a[j]; // aj agr é ai
                a[j] ^= a[j+1]; // ai agora é aj
            }
            
        }
        
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("   %d  ,\n", a[i]);
    }
    
}

int main(){
    
    int vetor[TAM];
    int module;
    scanf("%d", &module);
    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % module;
    }
    int n = TAM;
    
    qsort(vetor, n, sizeof(int), comparador);
    
    for (int i = 0; i < TAM; i++)
    {
        printf("   %d  , \n", vetor[i]);
    }
    
    printf("este foi usando o qsort(),  agora usarei o bubblesort\n");

    bubblesort(vetor);
    return 0;
}

