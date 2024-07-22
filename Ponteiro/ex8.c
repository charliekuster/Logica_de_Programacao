/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereco de cada posicao desse array.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int i;
    float vetor[10] = {1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2, 3.3, 4.0};
    for(i=0; i<10; i++){
        printf("Posicao %d: %p\n", i, &vetor[i]);
    }

    return 0;
}