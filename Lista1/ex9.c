#include <stdio.h>

int main()
{
    float c, t, i, j, m;

    printf("Calculadora de  matematica financeira.\n");
    printf("Digite o montante total: R$");
    scanf("%f", &c);
    printf("Digite o periodo que o dinheiro rendera em meses: ");
    scanf("%f", &t);
    printf("Digite a taxa de juros mensal (%%): ");
    scanf("%f", &i);

    // j = C . i . t   ||  M = C + j

    j = c * (i/100) * t;
    m = c + j;

    printf("O total investido foi R$%.2f o montante final e R$%.2f e o valor total de juros obtido e R$%.2f", c, m, j);

    return 0;
}
