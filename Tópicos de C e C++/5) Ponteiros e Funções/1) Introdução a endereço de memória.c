#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 50; //A VARI�VEL "a" POSSUI UM ENDERE�O NA MEM�RIA, E ESTE ENDERE�O EST� ARMAZENANDO O VALOR 50

    printf("A vari�vel est� armazenando, na mem�ria, o valor: %d", a);
    printf("\nO endere�o da vari�vel na mem�ria �: %d\n", &a); //O & INDICA ENDERE�O DE MEM�RIA

    system("pause");
    return 0;
    }
