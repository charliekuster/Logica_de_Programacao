/*9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereco de cada posicao dessa matriz.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int i, j;
    float matriz[3][3] = {1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2, 3.3};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Posicao [%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}