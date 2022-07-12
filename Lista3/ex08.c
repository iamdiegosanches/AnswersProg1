#include <stdio.h>

int main(){

    float num = 0;
    int quantidade = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite um valor na posicao %d: ", i);
        scanf("%f", &num);

        if(num >= 10 && num <= 20){
            quantidade++;
        }

    }

    printf("\nA quantidade de numeros DENTRO do intervalo [10-20] e de: %d\n", quantidade);
    printf("A quantidade de numeros FORA do intervalo [10-20] e de: %d\n", 10 - quantidade);

    return 0;
}
