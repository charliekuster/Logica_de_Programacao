 //Escreva uma funcao que eleve uma matriz quadrada A a nesima potencia, exemplo: A5 = A⇤A⇤A⇤A⇤A.

 #include<stdio.h>
 #include<math.h>
 #define TAM 3

void lerMatriz(int matriz[TAM][TAM], int matriz2[TAM][TAM]);
void potMatriz(int matriz[TAM][TAM], int matriz2[TAM][TAM], int n);

 int main(){
    int m[TAM][TAM], m2[TAM][TAM], n;
    scanf("%d", &n);
    lerMatriz(m, m2);
    potMatriz(m, m2, n);
 }

 void lerMatriz(int matriz[TAM][TAM], int matriz2[TAM][TAM]){
    int l, c;

    for(l=0; l<TAM; l++){
        for(c=0;c<TAM;c++){
            scanf("%d", &matriz[l][c]);
            printf("%d", matriz[l][c]);
        }
        printf("\n");
    }

    for(l=0; l<TAM; l++){
        for(c=0;c<TAM;c++){
            matriz2[l][c] = 0;
        }
    } 
}

void potMatriz(int matriz[TAM][TAM], int matriz2[TAM][TAM], int n){
    int l, c;

    for(l=0; l<TAM; l++){
        for(c=0;c<TAM;c++){
            matriz2[l][c] = pow(matriz[l][c], n);
            printf("%d ", matriz2[l][c]);
        }
        printf("\n");
    }
}
