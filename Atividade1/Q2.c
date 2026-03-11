#include <stdio.h>
int main(){
    char nomeConvidado[50];

    printf("Qual o seu nome?:");
    scanf("%49[^\n]", nomeConvidado);

    printf("Seja bem vindo %s!", nomeConvidado);
    return 0;
}