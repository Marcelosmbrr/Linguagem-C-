#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    bool a = true, b = false;

    //TODA CONDICIONAL É IMPLICITAMENTE UM SE É IGUAL A TRUE //ENTÃO IF(A) É O MESMO QUE IF(A == TRUE)
    //ASSIM SENDO IF(!A) É "SE A NÃO É TRUE", OU SEJA, SE A É FALSE //A EXCLAMAÇÃO NA LINGUAGEM C SIGNIFICA "NÃO" OU NEGAÇÃO DE ALGO

    if(a){
        printf("\nA é verdadeiro/TRUE/1 e B é falso/FALSE/0\n");
    }
    else if (b){
        printf("\nB é verdadeiro/TRUE/1 e A é falso/FALSE/0");
    }

    system("pause");
    return 0;




}
