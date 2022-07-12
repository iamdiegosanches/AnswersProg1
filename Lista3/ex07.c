#include <stdio.h>

int main(){
    int num = 1;
    int total = 0;
    int quantidade = 0;
    int media = 0;
    int n = 0;

    printf("Digite 0 para encerrar o programa\n");

    while(num != 0){
        printf("Digite um numero positivo:\n");
        scanf("%d", &num);

        total += num;
        n++;

        if(num % 2 == 0){
            quantidade++;
            media += num;
        }
    }

    printf("\nA quantidade de numeros pares e %d\n", quantidade - 1);
    printf("A quantidade de numeros impares e %d\n", (n - 1) - (quantidade - 1));
    printf("A media do valores pares e: %.2f\n", (float)media/(float)(n-1));
    printf("A media de todos os numeros e: %.2f\n", (float)total/(float)(n-1));

    return 0;
}