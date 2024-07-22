/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int array[5], *p, i;
    p = array;
    for(i=0; i<5; i++){
        scanf("%d", (p+i));
        *(p+i) *= 2;
    }
    for(i=0; i<5; i++){
        printf("Posicao[%d]: %d\n", i, *(p + i));

    }

    

}
