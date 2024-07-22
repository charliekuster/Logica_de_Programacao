/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
modificacao.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int a = 1, *p1;
    float b = 1.2, *p2;
    char c = 'x', *p3;
    printf("antes:\n");
    printf("%d\n", a);
    printf("%.1f\n", b);
    printf("%c\n\n", c);
    p1 = &a, p2 = &b, p3 = &c;
    *p1 = 2;
    *p2 = 1.2;
    *p3 = 'y';
    printf("depois:\n");
    printf("%d\n", a);
    printf("%.1f\n", b);
    printf("%c\n", c);

    return 0;
}