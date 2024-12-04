#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int main(){

    int matriz[TAM][TAM];
    int soma = 0;
    
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("digite um numero para a linha %d da coluna %d", i , j);
            int n;
            scanf("%d", &n);
            matriz[i][j] = n;
        }
        
    }
    
    for (int i = 0; i < TAM; i++)
    {
       soma += matriz [i][i];
    }
        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                printf("| %d  ", matriz[i][j]);
                
            }
            printf("|\n");
        }
        printf(" a soma da diagonal principal e %d", soma);
    return 0;
}