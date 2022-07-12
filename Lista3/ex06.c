#include <stdio.h>

int main(){
    int num = 1;
    float total = 0;
    int quantidade_positivo = 0;
    int n = 0;
    int quantidade_negativo = 0;

    printf("Digite 0 para encerrar o programa\n");

    while(num != 0){
        printf("Digite um numero:\n");
        scanf("%d", &num);

        total += num;
        n++;

        if(num > 0){
            quantidade_positivo++;
        }
        if(num < 0) {
            quantidade_negativo++;
        }

    }

    printf("\nA media de todos os numeros e: %.2f\n", total/(float)(n-1));
    printf("A quantidade de valores positivos e: %d\n", quantidade_positivo);
    printf("A quantidade de valores negativos e: %d\n", quantidade_negativo);
    printf("O percentual de valores positos e: %.2f%%\n"
           "O percentual de valores negativos e: %.2f%%", (float)quantidade_positivo/(float)(n-1),
           (float)quantidade_negativo/(float)(n-1));

    return 0;
}