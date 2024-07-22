/*12. Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,
o segundo menor valor na variavel do meio, e o maior valor na  ultima variavel. A funcao 
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Num(int *n1, int *n2, int *n3){
    int aux = *n1;
    int aux2 = *n2;
    if (*n3 > *n1){
        if (*n1 > *n2){
            *n1 = *n2;
            *n2 = aux;
            //ordem crescente: n2, n1, n3
        }    
        else if (*n2 < *n3){
            //ordem crescente: n1, n2, n3
        } 
        return 1;   
    }        
    if (*n1 > *n2){
        if (*n2 > *n3){
            *n1 = *n3;
            *n3 = aux;
            //ordem crescente: n3, n2, n1
        }    
        else if (*n3 < *n1){
            *n1 = *n2;
            *n2 = *n3;
            *n3 = aux;
            //ordem crescente: n2, n3, n1
        }  
        return 1;  
    }        
    if (*n1 < *n2){
        if (*n3 < *n1){
            *n2 = *n1;
            *n1 = *n3;
            *n3 = aux2;
            //ordem crescente: n3, n1, n2
        }    
        else if (*n3 < *n2){
            *n2 = *n3;
            *n3 = aux2;
            //ordem crescente: n1, n3, n2
        }
        return 1;    
    }    
        return 0;  
}

int main(void){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    Num(&n1, &n2, &n3);
    printf("Retorno: %d\n", (Num(&n1, &n2, &n3)));
    printf("n1: %d\n", n1);
    printf("n2: %d\n", n2);
    printf("n3: %d\n", n3);

    return 0;
}   