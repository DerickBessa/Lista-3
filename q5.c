#include <stdio.h>
#include <string.h>
#define TAM 50
#define TAM_AUX contagem
void uso_strcat(char a[], char b[]){
    strcat(a, b);
    printf("com strcat() \n %s\n ", a);
}

void sem_strcat(char a[], char b[]){

    int tamanho_a = strlen(a);
    int tamanho_b = strlen(b);
    int TAM_AUX = tamanho_a + tamanho_b;
    
    char vetor_auxilio[TAM];

        for (int i = 0; a[i] != '\0'; i++)      // limpeza do buffer de entrada de a
        {
            if( a[i] == '\n'){
                a[i] = '\0';
                break;
            }
        }
        for (int i = 0; b[i] != '\0'; i++)     // limpeza do buffer de entrada de b
        {
            if( b[i] == '\n'){
                b[i] = '\0';
                break;
            }
        }
        
        for (int i = 0; i < tamanho_a; i++)
        {
            vetor_auxilio[i] = a[i];
        }
        for (int i = 0; i < tamanho_b; i++)
        {
            vetor_auxilio[ i + tamanho_a] = b[i];
        }

        vetor_auxilio[TAM_AUX] = '\0';  
        printf("este e o seu vetor final sem strcat( )\n \"%s\"\n", vetor_auxilio);
            
}

int main(){
    char str1[TAM], str2[TAM];
        fgets(str1, sizeof(str1), stdin);
        fgets(str2, sizeof(str2), stdin);
            str1[strcspn(str1, "\n")] = '\0';
            str2[strcspn(str2, "\n")] = '\0';
                sem_strcat(str1, str2);
                uso_strcat( str1, str2);
    }
        


