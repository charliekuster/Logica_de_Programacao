#include<stdio.h>
#define TAM 2

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[50];
    float preco;
    Data validade;
}Dados;

void lerValores(Dados lista[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("digite o nome do produto");
        scanf("%s", lista[i].nome);
        printf("digite o preco");
        scanf("%f", &lista[i].preco);
        printf("digite a data de validade");
        scanf("%d %d %d", &lista[i].validade.dia, &lista[i].validade.mes, &lista[i].validade.ano);
    }
}

void printValores(Dados lista[]){
    int i;
    for(i=0; i<TAM; i++){
        if(lista[i].preco >= 100 && lista[i].validade.dia<23 && lista[i].validade.mes<6 && lista[i].validade.ano < 2023){
            printf("%s", lista[i].nome);
        }


    }
}




int main(){
    Dados lista[TAM];
    lerValores(lista);
    printValores(lista);
}
