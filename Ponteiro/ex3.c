/*3. Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(&a > &b){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }
    return 0;

}