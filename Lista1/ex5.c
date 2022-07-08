#include <stdio.h>

int main() {
    float valor, desc;

    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);

    desc = valor - (0.09 * valor);

    // Usar '%%' para escapar o %
    printf("O valor desse produto com 9%% de desconto e R$%.2f\n", desc);

    return 0;
}
