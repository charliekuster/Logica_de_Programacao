/*17. Escreva uma funcao que dado um numero real passado como parametro, retorne a parte
inteira e a parte fracionaria deste numero. Escreva um programa que chama esta funcao. 
Prototipo: 
void frac(float num, int* inteiro, float* frac);*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Frac(float n, int *i, float *f){
    *i = (int)n;
    *f = n - (int)n;

}

int main(void){
    float numero, f;
    int i;
    scanf("%f", &numero);
    Frac(numero, &i, &f);
    printf("%d\n", i);
    printf("%.2f", f);

    return 0;
}