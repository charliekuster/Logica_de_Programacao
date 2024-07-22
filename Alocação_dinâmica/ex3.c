#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Como alocar um vetor dinamico*/

int main(void){
    int *vet, tam, i;
    //tamanho do vetor
    scanf("%d", &tam);
    //criando semente para criar valores aleatorios
    srand(time(NULL));
    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("memoria alocada com sucesso\n");
        for(i=0; i<tam; i++){
            //dandos valores aleatorios
            *(vet + i) = rand() % 100;
        }
        for(i=0; i<tam; i++){
            printf("%d ", *(vet + i));
        }
    }
    else{ 
        printf("Erro ao alocar memoria\n");
    }
    return 0;
}