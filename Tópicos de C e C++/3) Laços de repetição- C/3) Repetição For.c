#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int contador;

    printf("Contador variando progressivamente de um em um, e sendo multiplicado por 5\n");
    for(contador =0; contador <=10; contador ++){ //CONTADOR COMEÇA EM 0, E CRESCE DE 1 EM 1 ENQUANTO FOR MENOR OU IGUAL A 10
        printf("Cinco vezes %d = %d\n", contador, contador * 5);

    }
    contador = 0;
    printf("....................................................................................\n");

    printf("Contador variando progressivamente de dois em dois, e sendo multiplicado por 5\n");
    for(contador =0; contador <=20; contador = contador + 2){ //CONTADOR COMEÇA EM 0, E CRESCE DE 2 EM 2 ENQUANTO FOR MENOR OU IGUAL A 20
        printf("Cinco vezes %d = %d\n", contador, contador * 5);

    }

    contador = 20;
    printf("....................................................................................\n");

    printf("Contador variando regressivamente de um em um , e sendo multiplicado por 5\n");
    for(contador = 20; contador >=0; contador--){
        printf("Cinco vezes %d = %d\n", contador, contador * 5);

    }

    system("pause");
    return 0;

    }
