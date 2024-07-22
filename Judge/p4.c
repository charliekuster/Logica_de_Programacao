#include<stdio.h>
#include<string.h>

void Ler_string(char *texto);
int Cacular_ocorrencia(char *texto1, char *texto2);
void Printar(int qtd);

int main(){
	char texto1[100], texto2[100];
	int qtd;
	Ler_string(texto1);
	Ler_string(texto2);
	qtd = Cacular_ocorrencia(texto1, texto2);
	Printar(qtd);
}
//leitura de string
void Ler_string(char *texto){
	scanf(" %s", texto);
}
//funcao para calcular numero de ocorrencia 
int Cacular_ocorrencia(char *texto1, char *texto2){
	int n_ocorencia, cont, TAM1, TAM2, result;
	n_ocorencia = cont = 0;
	TAM1 = strlen(texto1);
	TAM2 = strlen(texto2);
	for(;cont< TAM1; cont++){
		int cont2 = 0;
		if(texto1[cont] == texto2[0]){
			for(; cont2< TAM2; cont2++){
				if(texto1[cont+cont2] != texto2[cont2]){
					break;
				}
				else if (cont2 == TAM2-1){

					n_ocorencia++;
				}
			}
		}
			
	}
	return n_ocorencia;
}
//funcao para fazer o print
void Printar(int qtd){
	printf("Número de ocorrência: %d", qtd);
}