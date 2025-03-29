#include <stdio.h>

/*
Algoritmo:
    Início
        Declare as variáveis: nota1, nota2, nota3, nota4, media
        Leia as quatro notas (nota1 + nota2 + nota3 + nota4)/4
        Calcule a média: media = (nota1 + nota2 + nota3 + nota4)/4
        Mostre o valor da média
    Fim
*/

int main() {
    
    float nota1, nota2, nota3, nota4, media;
    
    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf ("Digite a terceira nota: ");
    scanf ("%f", &nota3);

    printf ("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf ("A média das notas é: %.2f\n", media);

    return 0;
}