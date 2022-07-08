#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, dist;

    printf("Calculadora da distância entre dois pontos.\n ");
    printf("Digite a posicao x1 do ponto P1: ");
    scanf(" %f", &x1);
    printf("Digite a posicao y1 do ponto P1: ");
    scanf ("%f", &y1);

    printf("Digite a posicao x2 do ponto P2: ");
    scanf("%f", &x2);
    printf("Digite a posicao y2 do ponto P2: ");
    scanf ("%f", &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nA distancia entre esses dois pontos e %.2f\n", dist);

    return 0;
}