/*26. Implemente uma funcao que calcule as raızes de uma equacao do segundo grau do tipo 
Ax2 + Bx + C = 0.
Essa funcao deve obedecer ao seguinte prototipo:  
int raizes(float A,float B,float C,float * X1,float * X2);
Essa funcao deve ter como valor de retorno o numero de raızes reais e distintas da
equacao. Se existirem raızes reais, seus valores devem ser armazenados nas variaveis 
apontadas por X1 e X2.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int Raizes(float A , float B, float C, float *X1, float *X2){
    float delta;
    delta = pow(B, 2) - 4 * A * C;
    
    *X1 = (- B + sqrt(delta)) / (A * 2);
    *X2 = (- B - sqrt(delta)) / (A * 2);

    if(delta < 0){
        return 0;
    }    
    else if(delta == 0){
        return 1;
    }
    else{
        return 2;
    }

}

int main(void){
    float a, b, c, X1, X2;
    printf("Insira o valor do coeviciente a: ");
    scanf("%f", &a);
    printf("Insira o valor do coeviciente b: ");
    scanf("%f", &b);  
    printf("Insira o valor do coeviciente c: ");
    scanf("%f", &c);
    if(Raizes(a, b, c, &X1, &X2) == 0){
        printf("Não existe valores reais");
    }
    else if(Raizes(a, b, c, &X1, &X2) == 1){
        printf("Uma raiz real\n");
        printf("Raiz = %.2f", X1);
    }    
    else{
        printf("Duas raizes reais\n");
        printf("Raiz 1 = %.2f\n", X1);
        printf("Raiz 2 = %.2f\n", X2);
    }    

    return 0;
}