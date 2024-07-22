/*2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int a, b;
    if(&a > &b){
        printf("%p", &a);
    }
    else{
        printf("%p", &b);
    }
}