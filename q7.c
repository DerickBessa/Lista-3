#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 3

int main(){
    double produto =1.0;
    int vetor[TAM];
    double media_arit = 0;
    int soma  = 0;
    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 20;
    }
    for (int i = 0; i < TAM; i++)
    {
        soma += vetor[i];
    }
    media_arit = (double)soma / TAM;
     
    for (int i = 0; i < TAM; i++)
    {
        produto *= vetor[i];
    }
    double media_geo = pow(produto, 1.0 / TAM);
    printf(" soma = %d,  media arit = %f , media geo = %f", soma, media_arit, media_geo);
    
    
    return 0;
}