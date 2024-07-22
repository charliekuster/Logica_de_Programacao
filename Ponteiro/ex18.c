/*18. Implemente uma funcao que calcule a area da superfıcie e o volume de uma esfera de
raio R. Essa funcao deve obedecer ao prototipo: 
void calc_esfera(float R, float *area, float *volume)*/

#include<stdio.h>
#include<math.h>

void Calc_Esfera(float R, float *area, float *volume){
    *area = 4 * M_PI * pow(R, 2);
    *volume = 4 / 3 * M_PI * pow(R, 3);
}
 
int main(void){
    float R, area, volume;
    scanf("%f", &R);
    Calc_Esfera(R, &area, &volume);
    printf("%.2f\n", area);
    printf("%.2f", volume);

    return 0;
}
