/*Faca um programa que leia um conjunto de 20 notas e as armazene num vetor. As notas devem assumir valores reais entre 0 e 10. 
Se digitada incorretamente, o programa deve repetir a leitura. Apos, calcule e imprima a media, a maior e a menor nota.*/

#include<stdio.h>

void leituraNotas(float vetor[]);
void MaiorMenor(float vetor[]);




int main(){
    float notas[20];
    leituraNotas(notas);
    MaiorMenor(notas);
}

void leituraNotas(float vetor[]){
    int i, cont=0, n;
    for(i=0; i<10000000; i++){
        scanf("%d", &n);
        if(n < 1 || n > 10){
            printf("valor não permitido");
        }
        else{
            vetor[i] = n;
            cont++; 
        }
        if(cont == 20){
            break;
        }
    }
}

void MaiorMenor(float vetor[]){
    float ma, me, media;
    int i;
    ma = vetor[0];
    me = vetor[0];
    for(i=1; i<20; i++){
        media += vetor[i];
        if(vetor[i] > ma){
            ma = vetor[i];
        }
        if(vetor[i] < me){
            me = vetor[i];
        }   
    }
    printf("maior: %f", ma);
    printf("menor: %f", me);
    printf("media: %f", media/20);
}
