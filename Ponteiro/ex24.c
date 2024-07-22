/*24. Escreva uma funcao que receba um array de inteiros V e os enderecos de duas variaveis 
inteiras, min e max, e armazene nessas variaveis o valor mınimo e maximo do array. 
Escreva tambem uma funcao main que use essa funcao.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 10 

void MinMax(int v[], int *min, int *max){
    int i;
    *min = v[0];
    *max = v[0];
    for(i=0; i<TAM; i++){
        //pegando o menor valor
        if(v[i] < *min)
            *min = v[i];
        //pegando o maior valor     
        if(v[i] > *max)
            *max = v[i];
    }
}

int main(void){
    int array[TAM], min, max, i;
    for(i=0; i<TAM; i++){
        scanf("%d", &array[i]);
    }
    MinMax(array, &min, &max);
    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);

    return 0;
}