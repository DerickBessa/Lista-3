#include <stdio.h>
#define TAM 50

int main(){
    int contagem = 0;
    char str[TAM];
    printf("escreva uma palavra   \n");
    fgets(str, sizeof(str),stdin);
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }

    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] != '\n'){
        contagem++; 
    }}
    printf("o numero de caracteres é %d\n", contagem);

    return 0;
}