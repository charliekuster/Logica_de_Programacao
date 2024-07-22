#include<stdio.h>

//funcao recursiva
int Fatorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        //recursao
        return n * Fatorial(n-1);
    }      
}

//funcao principal
int main(){
    int n;
    scanf("%d", &n);
    //caso valor digitado pelo usuario seja negativo
    if(n<0){
        printf("Não existe fatorial de %d", n);
    }
    else{
        //printf do resultado
        printf("O fatorial de %d é: %d", n, Fatorial(n));
    }
    return 0;
}