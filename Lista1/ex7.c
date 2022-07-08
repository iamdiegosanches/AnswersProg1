#include <stdio.h>

int main() {
    float tempC, tempF;

    printf("Conversao de graus Celsius para graus Fahrenheit.\n");
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &tempC);

    tempF = ((9*tempC) + 160)/5;

    printf("%.2f graus celsius em Fahrenheit e %.2fF. \n", tempC, tempF);

    return 0;
}
