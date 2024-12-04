#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
int main(){

    int matriz[TAM][TAM];
    int x;
    int count = 0;
    srand(time(NULL));

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() %10;
            printf( "%d          \n", matriz[i][j]);
    }
    };

    printf("digite um numero para ser procurado denntro da matriz");
    scanf("%d", &x);

     for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++)
        {
            if (matriz[i][j] == x)
            {
                count++;
            }
            
    }}
    printf("o numero %d aparaceu %d vezes", x, count);
    return 0;
}