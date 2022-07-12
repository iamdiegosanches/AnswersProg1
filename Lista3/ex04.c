#include <stdio.h>

int main(){
    float salario = 1;
    float maior = 0;
    float soma = 0;
    int n = 0;
    int filhos = 0;
    int soma2 = 0;
    int contador = 0;

    while(salario > 0){
        printf("Digite o salario do individuo %d: R$", n+1);
        fflush(stdin);
        scanf("%f", &salario);

        if(salario < 0){
            break;
        }

        printf("Digite o numero de filhos do individuo: ");
        fflush(stdin);
        scanf("%d", &filhos);

        if(salario > 0){
            soma += salario;
            soma2 += filhos;
        }
        if(salario > maior){
            maior = salario;
        }
        if(salario <= 100){
            contador++;
        }
        n++;
    }

    printf("\nA media do salario da populacao e: R$%.2f\n", soma/(float)n);
    printf("A media do numero de filhos da populacao e: %.2f\n", (float)soma2/(float)n);
    printf("O maior salario foi o de R$%.2f\n", maior);
    printf("A porcentagem de pessoas com salario menor que R$100,00 e de %.2f%%\n", ((float)contador/(float)n)*100);

    return 0;
}
