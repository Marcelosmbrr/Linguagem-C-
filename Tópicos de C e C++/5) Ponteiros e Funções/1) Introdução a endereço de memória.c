#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 50; //A VARIÁVEL "a" POSSUI UM ENDEREÇO NA MEMÓRIA, E ESTE ENDEREÇO ESTÁ ARMAZENANDO O VALOR 50

    printf("A variável está armazenando, na memória, o valor: %d", a);
    printf("\nO endereço da variável na memória é: %d\n", &a); //O & INDICA ENDEREÇO DE MEMÓRIA

    system("pause");
    return 0;
    }
