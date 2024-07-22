//dado uma função recursiva, que dado dois numeros int x e y retorne conlune o valor de x elevado a y

#include<stdio.h>
 
// x=3
// y=4
int F(int x, int y){
    int result;
    if(y==0){
        return 1;
    }
    else{
        result = x * F(x, y-1);
        //       x    y    F           x * 3 2
        //       3    3    27         x * 3 1                                        
        //       3    2    9          x * 3 1
        //       3    1    3       x * 
    }   //       3    0    1 
    return result;
}




int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", F(x, y));
    return 0;
}