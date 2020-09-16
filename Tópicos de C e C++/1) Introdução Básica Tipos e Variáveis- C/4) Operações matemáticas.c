#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (){

    int a = 5, b = 5, c = -3;


    printf("\nA soma de %d + %d e igual a: %d", a, b, a+b);
    printf("\nA subtracao de %d - %d e igual a: %d", a, b, a-b);
    printf("\nA divisao de %d / %d e igual a: %d", a, b, a/b);
    printf("\nA multiplicacao de %d x %d e igual a: %d", a, b, a*b);
    printf("\nO resto da divisao de %d por %d e igual a: %d\n", a, b, a%b);
    printf("\nO valor absoluto de %d e igual a: %d\n", c, abs(c)); //sinal inverso

    system("pause");
    return 0;

    }
