#include <stdio.h>

/*
Algoritmo:
    Início
        Declarar as variáveis: base, altura, area
        Ler os valores da base e da altura
        Cálculo da área: area = (base * altura) / 2 
        Mostrar o valor da área
    Fim
*/

int main (){
    float base, altura, area;

    printf("Digite o valor da base do triângulo: ");
    scanf ("%f", &base);

    printf ("Digite o valor da altura do triângulo: ");
    scanf ("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}