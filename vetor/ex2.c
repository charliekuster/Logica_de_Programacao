#include<stdio.h>

int main(){
    int x, i, v, d, cont=0, j;
    scanf("%d", &x);
        while(x!=1){
        for(i=2; i<=x; i++){
            cont=0;
            if(x % i == 0){
                for(j=2; j<=i; j++){
                    if(i % j == 0){
                        cont++;
                    }
                }
            if(cont == 1){
                x/=i;
                printf("%d\n", x);
            }
            }
        }    
    }
 
    return 0;
}