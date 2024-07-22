//imprima os numeros de n até 0
#include<stdio.h>



void Print(int numero){
    if(numero == 0){
        printf("%d", numero);
    }
    else{
        printf("%d", numero);
        Print(numero - 1);
        printf("%d", numero);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    Print(n);
}