#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int dias, kilometers, result;
    float divi, totalvalor, truncar;
    
    scanf("%d", &dias);
    while(dias < 1 || dias > 30){
        scanf("%d", &dias);
    }
    
    scanf("%d", &kilometers);
    while(kilometers < 1 || kilometers > 1000){
        scanf("%d", &kilometers);
    }
    
    
    totalvalor = (dias * 30) + (kilometers * 0.01);
    divi = totalvalor - (totalvalor / 10);
    
    result = (int)(divi * 100.00);
    truncar = (result / 100.00);

    printf("%.2f", truncar);
    
    
    
	return 0;
}