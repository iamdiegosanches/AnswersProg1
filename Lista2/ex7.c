#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Digite o valor do primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero:\n");
    scanf("%d", &num3);

    if(num1 > num3) {
        int temp = num3;
        num3 = num1;
        num1 = temp;
    }
    if(num1 > num2) {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if(num2 > num3) {
        int temp = num3;
        num3 = num2;
        num2 = temp;
    }

    printf("Os numeros em ordem crescente sao %d %d %d\n", num1, num2, num3);

    return 0;
}
