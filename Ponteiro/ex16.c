/*16. Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que leia a
variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int a, *b, **c, ***d;
    scanf("%d", &a);
    b = &a;
    c = &b;
    d = &c;
   
    printf("%d\n", a);
    printf("%d\n", (*b) * 2);
    printf("%d\n", (**c) * 3);
    printf("%d\n", (***d) * 4);

    return 0;
}