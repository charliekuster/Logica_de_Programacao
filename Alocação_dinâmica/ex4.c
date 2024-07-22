#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Alocação dinâmica de memória de uma finção realloc
-> Retorna um ponteiro para a nova região de memória
-> Se o ponteiro for nulo ela aloca memória
-> Se o nomo tamnho for zero a memória é liberada
-> Se não houver memória suficiente retorna null*/

int main(void){
    int *vet, tam, i;
    //tamanho do vetor
    scanf("%d", &tam);
    //tam = 5
    //criando semente para criar valores aleatorios
    srand(time(NULL));
    vet =  malloc(tam * sizeof(int));

    if(vet){
        printf("memoria alocada com sucesso\n");
        for(i=0; i<tam; i++){
            //dandos valores aleatorios
            *(vet + i) = rand() % 100;
        }
        for(i=0; i<tam; i++){
            printf("%d ", *(vet + i));
            //printar 0s 5 valores
        }

        //novo valor para o tamanho da matriz
        scanf("%d", &tam);
        //novo valor igual a 10
        vet = realloc(vet, tam);
        printf("vetor realocado\n");
        for(i=0; i<tam; i++){
            printf("%d ", *(vet + i));
            //vai printar os 5 primeiros valores mais os outros 5 a mais que foram add 

        }
    }
    else{ 
        printf("Erro ao alocar memoria\n");
    }
}