#include<stdio.h>
#include<string.h>
//leitura de valores da string
void Ler_valores(char *string){
    gets(string);
}
//funcão para inverter a string
void Inverter_valores(char *string){
    int i, j, x, tamanho = strlen(string) - 1;
    char auxiliar;
    printf("%d", tamanho);
    for(i=0, j=tamanho; i<j; i++, j--){
        auxiliar = string[i];
        string[i] = string[j];
        string[j] = auxiliar; 
    }
}
//funcão para printar valores 
void Print_valores_invertidos(char *string){
    int i;
    for(i=0; i<strlen(string); i++){
        printf("%c", string[i]);
    }
}
//funcão principal
int main(void){
    char string[100];
    Ler_valores(string);
    Inverter_valores(string);
    Print_valores_invertidos(string);
}