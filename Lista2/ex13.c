#include <stdio.h>
#include <string.h>

int main(){
    float entrada, saida = 0;
    char temperatura;
    char unidade[10];

    printf("Digite a temperatura: ");
    scanf("%f %c", &entrada, &temperatura);

    switch(temperatura){
        case 'F' | 'f':
            saida = (5/9) * (entrada - 32);
            strcpy(unidade, "C");
            break;
        case 'C' | 'c':
            saida = (9/5) * (entrada) + 32;
            strcpy(unidade, "F");
            break;
        default:
            printf("Unidade invalida\n");
    }

    printf("A tempratura convertida e de %.2f %s", saida, unidade);
    return 0;
}
