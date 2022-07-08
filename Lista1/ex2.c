#include <stdio.h>

int main() {
    int n1, n2, soma, dif, prod, quoc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    // Operações
    soma = n1 + n2;
    dif = n1 - n2;
    prod = n1 * n2;
    quoc = n1 / n2;

    printf("%d + %d = %d\n"
           "%d - %d = %d\n"
           "%d * %d = %d\n"
           "%d / %d = %d", n1, n2, soma, n1, n2, dif, n1, n2, prod, n1, n2, quoc);

    return 0;
}
