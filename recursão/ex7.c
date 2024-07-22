//calcular os numero inteiros de 1 até n

#include<stdio.h>
// n = 3
int Cal(int n){
    int result;
    if(n == 0){
        return 0;
    }
    else{
        result = n + Cal(n-1);
               //3 + 3 =6
               //2 + 1 =3
               //1 + 0 =1
    }
    return result;
}

// 1 + 2 + 3 = 6
// 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28 


int main(){
    int n; 
    scanf("%d", &n);
    printf("%d", Cal(n));




    return 0;
}
