/*11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereco das posicoes contendo valores pares.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int array[5], *p, i;
    p = array;
    for(i=0; i<5; i++){
        scanf("%d", (p+i));
    }
    for(i=0; i<5; i++){
        if(*(p+i) % 2 == 0){
            printf("Posicao[%d]: %d\n", i, *(p + i));
        }
    }
}   
