#include <stdio.h>

int main()
{
    int x, y;

    printf("Verificador de quadrantes\n");
    printf("Digite o par ordenado (x, y): ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0){
        printf("Estes pontos estao no primeiro quadrante\n");
    } else if(x < 0 && y > 0){
        printf("Estes pontos estao no segundo quadrante\n");;
    } else if(x < 0 && y < 0){
        printf("Estes pontos estao no terceiro quadrante\n");
    } else {
        printf("Estes pontos estao no quarto quadrante\n");
    }

    return 0;
}
