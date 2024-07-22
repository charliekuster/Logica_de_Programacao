/*15. Crie uma funcao que receba como parametro um array e o imprima. Nao utilize ındices
para percorrer o array, apenas aritmetica de ponteiros.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Print(int p[]){
    int i;
    for(i=0; i<5; i++){
        printf("%d\n", *(p+i));
    }
}

int main(void){
    int array[5] = {1, 2, 3, 4, 5};
    Print(array);
    
    return 0;
}