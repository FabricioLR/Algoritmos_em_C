#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h> //para usar a constante de M_PI (pi)

/*
Algoritmo:
    Início
        Declarar as variáveis: raio, area
        Definir o valor de π (pi) como aproximadamente 3.14159
        Ler o valor do raio
        Cálculo da area:area = π*raio*raio
        Mostrar o valor da área
    Fim
*/

int main() {
    float raio,area;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    area = M_PI * raio * raio;

    printf("A área do círculo é: %.2f\n", area);
    
    return 0;
}