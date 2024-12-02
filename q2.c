#include <stdio.h>
#define TAM 50
int main(){
    char target;
        printf("digite a letra que vc deseja procurar:  ");
        scanf("%c", &target);
    char string[TAM]; //maior palavra da lingua portuguesa possui 46 letras, considerando que uma é pro /n eu botei 50 para arredondar
        getchar();
        printf("escreva uma palavra");
        fgets(string, sizeof(string), stdin);
            for (int i = 0; string[i] != '\0'; i++){
                if(string[i] == '\n'){
                    string[i] = '\0';
                    break;
                }
        }
        int contagem = 0;
            for (int i = 0; string[i] != '\0'; i++){
                if(string[i] == target){
                   contagem ++;
                }
            }
            (contagem != 0) ? printf("o caractere %c está presente na string", target) : printf("o caractere %c nao está presente na string\n", target);
            printf(" o caractere %c aparece %d vezes na string\n", target, contagem);    
    return 0;
}