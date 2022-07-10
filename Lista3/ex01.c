#include <stdio.h>

int main(){
    int quantidade = 0, num;

    for(int i = 1; i <= 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &num);

        if(num < 0){
            quantidade++;
        }
    }

    printf("A quantidade numeros negativos e: %d", quantidade);
    return 0;
}
