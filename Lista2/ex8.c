#include <stdio.h>

int main()
{
    int num1, num2, soma, produto;
    float divisao, media;
    int maior, menor = 0;

    printf("Digite dois valores entre 1 e 10: ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;

    // Verificar o maior numero
    if(num1 > num2){
        maior = num1;
        menor = num2;
    } else if(num1 < num2) {
        maior = num2;
        menor = num1;
    } else {
        maior = menor = num1;
    }

    if(soma < 8) {
        media = (soma)/(float)2;
        printf("Media: %.2f", media);
    } else if(soma == 8) {
        produto = num1 * num2;
        printf("Produto: %d", produto);
    } else {
        divisao = maior/(float)menor;
        printf("Divisao: %f", divisao);
    }

    return 0;
}
