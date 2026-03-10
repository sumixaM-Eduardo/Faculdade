#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;

    printf("==========IMC==========\n");

    printf("Digite Seu Peso: \n");
    scanf("%f", &peso);

    while(peso < 1 || peso > 500){
        printf("Informação Invalida. Digite Novamente: \n");
        scanf("%f", &peso);
    }

    printf("Digite Sua Altura: \n");
    scanf("%f", &altura);

    while(altura < 1 || altura > 2.8){
        printf("Informação invalida. Digite Novamente: \n");
        scanf("%f", &altura);
    }

    imc = peso /(altura * altura);

    printf("Seu IMC é: %.2f \n", imc);

    if(imc < 18.5){
        printf("Você está abaixo do peso.");
    } else if (imc > 18.5 && imc < 24.9){
        printf("Você está com o peso normal.");
    } else if (imc > 24.9 && imc < 29.9){
        printf("Você está sobrepeso.");
    } else if (imc > 29.9 && imc < 34.9){
        printf("Você está com obesidade grau 1.");
    } else if (imc > 34.9 && imc < 40){
        printf("Você está com obesidade grau 2.");
    } else if (imc > 39.9) {
        printf("Você está com obesidade Morbida.");
    }

    return 0;
}