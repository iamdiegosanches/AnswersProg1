#include <stdio.h>

int main(){
    int codigo;

    printf("Digite o codigo do funcionario : ");
    scanf("%d",&codigo);

    switch(codigo){
        case 101:
            printf("Vendedor\n");
            break;
        case 102:
            printf("Atendente\n");
            break;
        case 103:
            printf("Auxiliar tecnico\n");
            break;
        case 104:
            printf("Assitente\n");
            break;
        case 105:
            printf("Coordenador de Grupos\n");
            break;
        case 106:
            printf("Gerente\n");
            break;
        default:
            printf("Cargo invalido\n");
    }

    return 0;
}
