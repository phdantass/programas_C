#include <stdio.h>

int main(){
    int idade;

    printf("Qual a idade do atleta?");
    scanf("%i", &idade);

    if (idade >= 5 && idade <=7){
        printf("Esse atleta e pre-mirim");
    }
    else if (idade >= 8 && idade <=10){
        printf("Esse atleta e mirim");
    }
    else if (idade >= 11 && idade <=13){
        printf("Esse atleta e infantil");
    }
    else if (idade >= 14 && idade <= 17){
        printf("Esse atleta e infanto-juvenil");
    }
    else if (idade >= 18 && idade <=20){
        printf("Esse atleta e juvenil");
    }
    else if (idade >= 21 && idade <=60){
        printf("Esse atleta e adulto");
    }
    else if (idade >= 60 && idade <=100){
        printf("Esse atleta e pre-jurassico");
    }
    else if (idade >=100 && idade <=1000){
        printf("Esse atleta e jurassico");
    }
    else if (idade >= 1000){
        printf("Esse atleta e uma divindade");
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}