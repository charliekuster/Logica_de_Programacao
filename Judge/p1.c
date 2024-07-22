#include<stdio.h>
#include<math.h>

float Achar_delta(float a, float b, float c);
void Achar_raiz(float a, float b, float c, float delta);
float Equacao_1grau(float a, float b, float c);
void Nao_raiz(void);

int main(void){
    float a, b, c, delta;
    scanf("%f %f %f", &a, &b, &c);
    delta=Achar_delta(a, b, c);
    if(delta<0){
        Nao_raiz();  
    }
    else if(a==0){
        Equacao_1grau(a, b, c);   
    }
    else{
        Achar_raiz( a, b, c, delta);  
    }
    return 0;
}
float Achar_delta(float a, float b, float c){
    float delta;
    delta= (pow(b, 2)) - 4 * a *c;
    return delta;
}

void Nao_raiz(void){ 
    printf("Não existem raízes reais\n"); 
}

float Equacao_1grau(float a, float b, float c){
    float resultado;
    resultado= -c / b;
    printf("%.2f\n", resultado);
    return resultado;
}

void Achar_raiz(float a, float b, float c, float delta){
    float raiz_1, raiz_2;
    raiz_1= (-b + sqrt(delta)) / (2*a);
    raiz_2= (-b - sqrt(delta)) / (2*a);
    if(delta==0){
        printf("Raiz: %f\n", raiz_1);
    }
    else{
        printf("Raiz 1: %.2f\n", raiz_1);
        printf("Raiz 2: %.2f\n", raiz_2);
    }

}

