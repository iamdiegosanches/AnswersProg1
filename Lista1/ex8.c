#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarar variáveis
    float tempC, tempF;

    printf("Conversao de graus Fahrenheit para graus Celsius.\n");
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    // Realizando a conversão
    tempC = (tempF - 32)/1.8;

    printf("%.2f graus Fahrenheit em graus Celsius e %.2fC \n", tempF, tempC);

    return 0;
}
