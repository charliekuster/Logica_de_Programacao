#include <stdio.h>
#include <stdlib.h>

/**/

int main(){
    char *x;

    x = colloc(1, sizeof(char));

    if(x){
        printf("Memeoria alocada com susseco\n");
        printf("x = %c\n", *x);
        //não vai printar nada
        *x = 'H';
        printf("x = %c\n", *x);
        //print x = o caracter H
    }
    else{
        prinf("Erro ao alocar memoria\n");
    }
    /*else if(x == NULL){
        prinf("Erro ao alocar memoria\n");
    }*/
    return 0;
}