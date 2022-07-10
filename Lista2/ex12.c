#include <stdio.h>

int main(){
    int nota;

    printf("Digite a nota do aluno de 0-10 : ");
    scanf("%d",&nota);

    switch(nota){
        case 9 ... 10:
            printf("Conceito A\n");
            break;
        case 7 ... 8:
            printf("Conceito B\n");
            break;
        case 5 ... 6:
            printf("Conceito C\n");
            break;
        case 0 ... 4:
            printf("Conceito D\n");
            break;
        default:
            printf("Nota invalida\n");
    }

    return 0;
}
