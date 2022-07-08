#include <stdio.h>

int main() {
    float valor, gorjeta, total;

    printf("Digite o valor gasto no restaurante: R$");
    scanf("%f", &valor);

    gorjeta = 0.10 * valor;
    total = valor + gorjeta;

    printf("A gorjeta a ser paga e de R$%.2f e o total a ser pago e de R$%.2f \n", gorjeta, total);

    return 0;
}
