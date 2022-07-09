#include <stdio.h>

int main()
{
    int superior, inferior, num;

    printf("Digite o valor inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("Digite o valor superior do intervalo: ");
    scanf("%d", &superior);
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num >= inferior && num <= superior){
        printf("Este numero pertence ao intervalo\n");
    } else {
        printf("Este numero NAO pertence ao intervalo\n");
    }

    return 0;
}
