#include<stdio.h>
#define tam 3

int main(){
    int l, c, m[tam][tam];
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            scanf("%d", &m[l][c]);
            printf("%d", m[l][c]);
        }
        printf("\n");
    }
    for(l=0; l<tam; l++){   
        for(c=0; c<tam; c++){
            if(l == (tam-1)-c){
                printf("%d", m[l][c]);

            }  
        }
    }
}    