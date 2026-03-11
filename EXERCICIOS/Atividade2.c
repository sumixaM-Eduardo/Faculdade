#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float valor;
    
    scanf("%f", &valor);
    
    printf("%.2f", valor + (valor/10));
    
	return 0;
}