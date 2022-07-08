#include <stdio.h>

int main() {
    float salario, salario_minimo;

    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &salario_minimo);
    printf("Digite o salario do individuo:\n");
    scanf("%f", &salario);

    printf("Esta pessoa recebe %.2f salarios minimos.", salario/salario_minimo);

    return 0;
}
