#include <stdio.h>

int main() {
    float totalCompra = 150.0;
    if (totalCompra>100){
        totalCompra = totalCompra * 0.9; // Aplica desconto de 10%
        printf("Desconto aplicado! Total a pagar: %.2f\n", totalCompra);
    }
    else{
        printf("Total a pagar: %.2f\n", totalCompra);
    }
    return 0;
}