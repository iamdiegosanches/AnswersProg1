#include <stdio.h>

int main(){
    float y = 0;
    float x = 1;
    float aux;

    printf("Calculadora de raiz baseado no metodo de aproximacoes de Newton.\n");
    printf("Digite um numero a ser calculado:\n");
    scanf("%f", &y);

    for(int i = 1; i <= 25; i++){
        if(i == 1){
            x = y / 2;
        } else {
            aux = ((x*x) + y)/(2*x);
            x = aux;
        }

    }
    printf("%f", x);
    return 0;
}
