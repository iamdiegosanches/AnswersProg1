#include <stdio.h>

int main(){

    int num, end = 0;

    while(end < 4){
        num++;
        int aux = 0;
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                aux += i;
            }
        }
        if(num == (aux - num)){
            printf("%d e um numero perfeito!!\n", num);
            end++;
        }
    }

    return 0;
}