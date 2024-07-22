/*4. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 
2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas 
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B  
tera o valor de A.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Troca(int *a, int *b){
    int x = *b;
    *b = *a;
    *a = x;
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    Troca(&a, &b);
    return 0;
}