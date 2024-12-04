#include <stdio.h>
#include <string.h>
#define TAM 50
                                 
int main(){
    int j = 0;
    char string_reversed[TAM];
    char string[TAM];
        fgets(string , sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';
            for (int i = (strlen(string) - 1); i >= 0 ; i--)
            {
                string_reversed[j] = string[i];
                j++;
            }
            string_reversed[j] = '\0';
        printf(" o reverso de \"%s\" e \"%s\"\n", string , string_reversed);
    return 0;
}