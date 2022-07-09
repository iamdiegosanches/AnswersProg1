#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int menor = 0;
    int maior = 0;

    printf("Digite o valor do primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero:\n");
    scanf("%d", &num3);

    if(num1 > num2) {
        if(num1 > num3) {
            maior = num1;
        } else {
            maior = num3;
        }
    } else {
        if(num2 > num3) {
            maior = num2;
        } else {
            maior = num3;
        }
    }

    if(num1 < num2) {
        if(num1 < num3) {
            menor = num1;
        } else {
            menor = num3;
        }
    } else {
        if(num2 < num3) {
            menor = num2;
        } else {
            menor = num3;
        }
    }

    printf("O MAIOR e o numero %d e o MENOR e o numero %d\n", maior, menor);

    return 0;
}
