#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    bool a = true, b = false;

    //TODA CONDICIONAL � IMPLICITAMENTE UM SE � IGUAL A TRUE //ENT�O IF(A) � O MESMO QUE IF(A == TRUE)
    //ASSIM SENDO IF(!A) � "SE A N�O � TRUE", OU SEJA, SE A � FALSE //A EXCLAMA��O NA LINGUAGEM C SIGNIFICA "N�O" OU NEGA��O DE ALGO

    if(a){
        printf("\nA � verdadeiro/TRUE/1 e B � falso/FALSE/0\n");
    }
    else if (b){
        printf("\nB � verdadeiro/TRUE/1 e A � falso/FALSE/0");
    }

    system("pause");
    return 0;




}
