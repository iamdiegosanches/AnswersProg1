#include <stdio.h>
#include <limits.h>

int main(){
    int maior, num;
    int menor = INT_MAX;


    for(int i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d:", i+1);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
    }

    printf("O menor numero digitado foi %d e o maior numero numero %d", menor, maior);
    return 0;
}
