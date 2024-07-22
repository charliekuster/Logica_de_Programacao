#include<stdio.h>

//funcão recursiva para fazer a soma dos valores
float V(float vetor[], int cont){
    int i;
    if(cont == 0){
        return 0;
    }
    else{
        //recursao
        return vetor[cont] + V(vetor, cont-1); 
    }
}

//funcão principal
int main(){
    float vetor[1000000];
    int i, cont=0,cont2=0;
    float media;
    //lendo os valores do vetor
    for(i=1; i<100000; i++){
        scanf("%f", &vetor[i]);
        if(vetor[i] == 0){
            break;
        }
        else{
            cont++;
        }    
    }
    printf("A media aritmética dos %d valores é: %.1f", cont, V(vetor, cont)/cont);
    return 0; 
}