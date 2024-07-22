#include<stdio.h>

//funcao recursiva
int MM(int v[], int tam, int indice){
    int maior, atual;
    if(tam == 0){
        return v[0];
    }
    atual = v[tam];
    //recursao 
    maior = MM(v, tam - 1, indice);
    if(atual > maior){
        return atual;
    }
    else{
        return maior;
    }
}

int main(){
    int vetor[100000], cont=0, i;
    //lendo os valores do vetor 
    for(i=0; i<100000; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] == 0){
            break;
        }
        else{
            cont++;
        }
    }
    //resultado
    printf("%d", MM(vetor, cont, 0));
    return 0;
}