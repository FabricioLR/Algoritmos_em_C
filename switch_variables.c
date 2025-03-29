#include <stdio.h>

/*
Algoritmo:
    Início
        Declarar as variáveis: a, b, temp
        Ler os valores de a e b
        Atribuir o valor de a para temp: = a
        Atribuir o valor de b para a: a = b 
        Mostrar os novos valores de a e b 
    Fim
*/

int main () {
    int a, b, temp;

    printf ("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf ("%d", &b);
    
    // Troca de valores
    
    temp = a;
    a = b;
    b = temp;
    
    printf("Valores após a troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    return 0;
}