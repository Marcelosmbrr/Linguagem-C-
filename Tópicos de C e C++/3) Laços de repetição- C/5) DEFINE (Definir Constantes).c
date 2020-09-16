#include <stdlib.h>
#include <stdio.h>
#define CONSTANTE 10 //define [NOME][VALOR]
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i;

    //CONSTANTES SÃO ÚTEIS PORQUE SEUS VALORES SÃO IMUTÁVEIS/FIXOS, EM TODO O PROGRAMA
    for(i=0; i <= CONSTANTE; i++){
        printf("%d\n", i);


    }

    system("pause");
    return 0;

    }
