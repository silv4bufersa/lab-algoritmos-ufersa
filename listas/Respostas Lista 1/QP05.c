#include <stdio.h>

int main(){
    int x = 10;
    int y = 20;

    if(x > y){
        printf("x eh maior que y\n");
    } else if (x < y){
        printf("y eh maior que x\n");
    } else {
        printf("x e y sao iguais\n");
        // nao precisa de mais ifs, pois se x nao for maior que y e nem menor, entao necessariamente eles sao iguais
    }
    return 0;

}