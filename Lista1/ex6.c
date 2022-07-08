#include <stdio.h>

int main() {
    int a, b, aux;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Os valores trocados agora sao: a: %d e b: %d", a, b);

    return 0;
}
