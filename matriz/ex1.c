/*Escreva uma funcao que troque duas linhas de uma matriz de inteiros. 
 1) a funcao deve verificar se as dimensoes informadas sao iguais ou menores que MAX;
 2) A funcao deve verificar se as linhas informadas para troca pertencem a matriz;  
 3) a funcao deve retornar 0 se a substituicao foi realizada e 1 caso contrario.
Considere o seguinte prototipo de funcao:
// l e c -> quantidade de linhas e colunas
// l1 e l2 -> indicam as linhas a serem trocadas
int subLinha(int M[MAX][MAX], int l, int c, int l1, int l2);
*/

#include<stdio.h>
#define TAM 3



void lerMatriz(int matriz[TAM][TAM], int m2[TAM][TAM]){
    int l, c;
    for(l=0; l<TAM; l++){
        for(c=0;c<TAM;c++){
            scanf("%d", &matriz[l][c]);
            m2[l][c] = matriz[l][c];
            printf("%d", matriz[l][c]);
        }
        printf("\n");
    }
}


void subMatriz(int matriz[TAM][TAM], int m2[TAM][TAM], int linha, int linha2){
    int l, c;
    printf("Linha %d trocada pela %d\n", linha, linha2);
    for(l=0; l<TAM; l++){
        for(c=0;c<TAM;c++){
            m2[linha][c] = matriz[linha2][c];
            printf("%d ", m2[l][c] );
        }
        printf("\n");
    }    
}

int main(){
    int m1[TAM][TAM], m2[TAM][TAM];
    int l, l2;
    scanf("%d %d", &l, &l2);
    lerMatriz(m1, m2);
    subMatriz(m1, m2, l, l2);
}

