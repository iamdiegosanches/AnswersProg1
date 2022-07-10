#include <stdio.h>

int main(){
    int x, y = 0;
    char op;
    float resultado;

    printf("Digite a operacao (Por exemplo, 2 * 5): ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
            resultado = x * y;
            break;
        case '/':
            if(y != 0){
                resultado = ((float)x) / y;
            }
            break;
        default:
            printf("Operacao invalida");
    }

    printf("\nOperacao %d %c %d = %.2f\n", x, op, y, resultado);
    return 0;
}
