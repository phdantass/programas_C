#include <stdio.h>

int main(){

    char letra;
    float litros;

    printf("Selecione um tipo de gasolina\n A-Alcool\n D-Diesel \n G-Gasolina");
    scanf("%c", &letra);

    printf("\nInforme a quantidade de litros\n");
    scanf("%f", &litros);

    if (letra == 'a'){
        printf("Valor a ser pago e: %f", (litros * 1.7997f));
    }
    else if(letra == 'd'){
        printf("Valor a ser pago e: %f", (litros * 0.9798f));
    }
    else if(letra == 'g'){
        printf("Valor a ser pago e: %f", (litros * 2.1009f));
    }
    else{
        printf("Tipo de combustivel não encontrada");
    }
    return 0;
}