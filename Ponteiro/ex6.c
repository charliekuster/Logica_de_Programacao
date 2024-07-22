/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao 
que retorne a soma do dobro dos dois numeros lidos. A funcao dever a armazenar o dobro  
de A na propria variavel A e o dobro de B na propria variavel B.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Dobro(int *a, int *b){
    int soma;
    *b *= 2;
    *a *= 2;
    soma = *a + *b;
    
    return soma;
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", Dobro(&a, &b));

    return 0;
}

