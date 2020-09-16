#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main (){

    int a;
    float b;
    char c;
    bool d = true; //true = 1 e false = 0

    printf ("\nTecle um valor para a variavel a, do tipo inteiro:");
    scanf("%d", &a);
    printf ("\nTecle um valor para a variavel b, do tipo float:");
    scanf("%f", &b);
    printf ("\nTecle um valor para a variavel c, do tipo char:");
    scanf(" %c", &c); //Em C, para ler char, deve haver aquele espaço antes da porcentagem

    printf ("\nFoi digitado um inteiro de valor = %d", a);
    printf ("\nFoi digitado um float de valor = %f", b);
    printf ("\nA variavel tipo char vale = %c", c);
    printf ("\nA variavel tipo bool vale, em linguagem matemática = %d\n", d); //Como TRUE = 1, vai imprimir 1 aqui

    system("pause");
    return NULL;

}
