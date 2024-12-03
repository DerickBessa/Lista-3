#include <stdio.h>
#include <string.h>
#define TAM 50

void uso_strcmp(char a[], char b[]){

    int resultado = strcmp(a , b);

    if(resultado == 0){
        printf("as strings \"%s\", \"%s\" são iguais\n usando strcmp()\n", a, b);
    }
    else{
        printf("as strings sao diferentes\n");
        if(resultado > 0){
            printf("pois \"%s\" tem mais letras e é maior que \"%s\"\n", a, b);
        }
        else{
            printf("pois \"%s\" tem mais letras e é maior que \"%s\"\n", b, a);
        }
    }

}

void sem_uso(char a[],char b[], int contagem1, int contagem2, int contagem3){
    
    for (int i = 0; a[i] != '\0'; i++){
        if(a[i] == '\n'){
            a[i] = '\0';
            break;
        }
    }
    for (int i = 0; b[i] != '\0'; i++){
        if(b[i] == '\n'){
            b[i] = '\0';
            break;
        }
    }


    for (int i = 0; a[i] != '\0'; i++){
        if(a[i] != '\n'){
        contagem1++;
         
    }}

    for (int i = 0; b[i] != '\0'; i++){
        if(b[i] != '\n'){
        contagem2++; 
    }}
    
    if(contagem1 == contagem2){
        for (int i = 0; i < contagem1; i++){
            if((a[i] != '\n' && b[i] != '\n') && a[i] == b[i]){
            contagem3++; 
    }}
    }
    if((contagem3 == contagem2 && contagem3 == contagem1)){
        printf("as strings \"%s\", \"%s\" sao iguais\n sem o uso de strcmp()\n", a, b);
    }
    else{
        printf("as strings sao diferentes\n");
    }

}
int main(){
    int contagem1 = 0;
    int contagem2 = 0;
    int contagem3 = 0;
    char str1 [TAM], str2[TAM];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    uso_strcmp(str1, str2);
    sem_uso(str1, str2, contagem1, contagem2, contagem3);

    return 0;
}