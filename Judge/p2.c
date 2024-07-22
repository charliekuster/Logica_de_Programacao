# include<stdio.h>
int Ler_numero(){
    
}
int main(void)
{
    int valor, cp;
    scanf("%d", &valor);
    int omg;
    omg = 0;
    cp = valor;
    while(cp != 1)    {
        int cont, div;
        for(cont = 2; cont <= cp; cont++)    {
            div = 0;
            int i;
            for(i = 1; i <= cont; i++){
                if(cont % i == 0)
                    div++;
            }
            if(div == 2){
                if(cp % cont == 0){
                    omg++;
                    cp /= cont;
                }
            }
        }
    }
    printf("Omega(%d)=%d", valor, omg);
}