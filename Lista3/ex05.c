#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro para saber sua tabuada: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%d * %d = %d\n", i, num, num*i);
    }

    return 0;
}
