#include <stdio.h>
int main(){
    int numInvert, calculo;

    scanf("%d", &numInvert);

    calculo = (numInvert % 10) * 10 + (numInvert / 10);
    
    printf("%02d", calculo);
    return 0;

}