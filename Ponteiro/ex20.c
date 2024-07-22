/*20. Implemente uma funcao que receba como parametro um array de numeros reais de 
tamanho N e retorne quantos numeros negativos ha nesse array. Essa funcao deve
obedecer ao prototipo: 
int negativos(float *vet, int N);*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 10 

int Negativos(float *vet, int N){
    int i;
    for(i=0; i<TAM; i++){
        if(vet[i]<0){
            N++;
        }
    }
    return N;
}

int main(void){
    int n, i;
    float vetor[TAM];
    for(i=0; i<TAM; i++){
        scanf("%f", &vetor[i]);
    }
    printf("%d", Negativos(vetor, n));

    return 0;
}