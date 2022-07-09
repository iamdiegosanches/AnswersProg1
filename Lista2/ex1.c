#include <stdio.h>

int main()
{
    int num;

    printf("Verificar par ou impar\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Este numero e par\n");
    } else {
        printf("Este numero e impar\n");
    }

    return 0;
}
