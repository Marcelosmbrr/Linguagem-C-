#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h> //PARA PERMITIR ACENTOS //COMANDO setlocale(LC_ALL,"Portuguese")

int main(){

 setlocale(LC_ALL,"Portuguese");

    bool confirmation;
    int num1, num2;
    char letra;

    //PAR OU ÍMPAR
    printf("\nDigite o primeiro e o segundo valor: ");
    scanf("%d %d", &num1, &num2);
    if(num1 % 2 == 0 && num2 % 2 == 0){ //SE DIVIDIDO POR 2, O RESTO É 0
        printf("\nOs dois valores são pares\n");
    }
    else if(num1 %2 == 1 && num2 %2 ==1){
        printf("\nOs dois valores são ímpares\n");
    }
    else if(num1 % 2 == 1 && num2 % 2 == 0){
        printf("\nO primeiro valor é impar e o segundo valor é par\n");
    }
    else if(num1 % 2 == 0 && num2 % 2 == 1){
        printf("\nO primeiro valor é par o segundo valor é ímpar\n");
    }

    system("pause");
    return NULL;

    }

