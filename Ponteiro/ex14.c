/*14. Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
array. A funcao devera preencher os elementos de array com esse valor. Nao utilize 
ındices para percorrer o array, apenas aritmetica de ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Preencher(float array[], float a){
    int i;
    for(i=0; i<10; i++){
        *(array + i) = a;
    }

}
int main(void){
    int i;
    float array[10], a = 1.1;
    Preencher(array, a);
    for(i=0; i<10; i++){
        printf("%.1f\n", *(array +i));
    }

    return 0;
}
