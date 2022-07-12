#include <stdio.h>

int main(){
    int num, fat = 1;

    printf("Digite o valor a calcular o fatorial:\n");
    scanf("%d", &num);

    for (num; num >= 1; --num) {
        fat = fat * num;
    }

    printf("O fatorial do numero digitado e = %d", fat);

    return 0;
}