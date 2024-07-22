/*5. Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na 
segunda variavel. Escreva o conteudo das 2 variaveis na tela.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void MaiorMenor(int *a, int *b){
    int aux = *b;
    if(*b > *a){
        *b = *a;
        *a = aux;
    }
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    MaiorMenor(&a, &b);
    printf("Primeira variavel: %d\n", a);
    printf("Segunda variavel: %d", b);
    
    return 0;
}