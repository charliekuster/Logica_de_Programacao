// primeiro termo=0, segundo termo= 1, teceiro termo= 0+1=1, quarto termo= 1+1=2 
// quinto termo= 1+2=3, sexto termo=2+3=5 setimo termo=3+5=8 oitavo termo=5+8=13 ...
#include<stdio.h>

int F(int n){
    if(n == 1){
        return 0;
    }
    else{
        if (n == 2){
            return 1;
        }
        else{
            return F(n-1) + F(n-2);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", F(n));
}