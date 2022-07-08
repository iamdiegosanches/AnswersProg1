#include <stdio.h>

int main() {
    int num;

    printf("Antecessor e Sucessor\n");
    printf("Digite um numero:");
    scanf("%d", &num);

    printf("Antecessor: %d e Sucessor: %d", num-1, num+1);

    return 0;
}
