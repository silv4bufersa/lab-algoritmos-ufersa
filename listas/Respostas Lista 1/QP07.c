#include <stdio.h>

int main(){
    float temperatura = 30.5;

    if(temperatura > 30.0){
        printf("Esta calor\n");
    }
    else if (temperatura<15.0){
        printf("Esta frio\n");
    }
    else{
        printf("Clima agradavel\n");
    }
    return 0;
}