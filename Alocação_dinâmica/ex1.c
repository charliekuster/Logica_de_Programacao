#include<stdio.h>
#include<stdlib.h>

/*Alocação dinâmica de memôria com função malloc.
retorna um ponteiro para a região de memória alocada ou NULL*/

int main(){
    int *x;

    x = malloc(sizeof(int));

    if(x){
        printf("Memeoria alocada com susseco\n");
        printf("x = %d\n", *x);
        //print de lixo de memoria
        *x = 50;
        printf("x = %d\n", *x);
        //print x = 50
    }
    else{
        prinf("Erro ao alocar memoria\n");
    }
    /*else if(x == NULL){
        prinf("Erro ao alocar memoria\n");
    }*/
    return 0;
}