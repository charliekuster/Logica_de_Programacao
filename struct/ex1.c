#include<stdio.h>
#include<string.h>

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){
     
    Pessoa usuario;

    usuario.idade = 20;
    usuario.sexo = 'f';
    //função para fazer copia de string(só funciona assim, n da pra atribuir caracteristicas pra um vetor char )
    strcpy(usuario.nome,"Maria");

    //como printar
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", usuario.nome, usuario.idade, usuario.nome);

    return 0;
}
