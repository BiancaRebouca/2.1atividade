#include <stdio.h>
#include <math.h>

int main() {
    float litro;
    float km;
    float soma;
    //saida e entrada
    printf("informe a quantidade de litros gastos : ");
    scanf("%f", &litro);
    printf("informe quantos km vc andou : ");
    scanf("%f", &km);
    //acao
    soma = litro/km;
    //saida
    printf("o consumo foi de %.2f litro por metro",soma);
     
}