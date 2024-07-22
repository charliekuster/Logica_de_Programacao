/*7. Crie um programa que contenha uma funcao que permita passar por parametro dois 
numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e 
armazenar o resultado na variavel A. Esta funcao nao dever a possuir retorno, mas devera 
modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Soma(int *a, int *b){
    *a += *b;
}


int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    Soma(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d", b);
    
    return 0;
}