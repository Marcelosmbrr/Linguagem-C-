#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h> //PARA PERMITIR ACENTOS //COMANDO setlocale(LC_ALL,"Portuguese")

int main(){

 setlocale(LC_ALL,"Portuguese");

    bool confirmation;
    int num1, num2;
    char letra;

    //PAR OU �MPAR
    printf("\nDigite o primeiro e o segundo valor: ");
    scanf("%d %d", &num1, &num2);
    if(num1 % 2 == 0 && num2 % 2 == 0){ //SE DIVIDIDO POR 2, O RESTO � 0
        printf("\nOs dois valores s�o pares\n");
    }
    else if(num1 %2 == 1 && num2 %2 ==1){
        printf("\nOs dois valores s�o �mpares\n");
    }
    else if(num1 % 2 == 1 && num2 % 2 == 0){
        printf("\nO primeiro valor � impar e o segundo valor � par\n");
    }
    else if(num1 % 2 == 0 && num2 % 2 == 1){
        printf("\nO primeiro valor � par o segundo valor � �mpar\n");
    }

    system("pause");
    return NULL;

    }

