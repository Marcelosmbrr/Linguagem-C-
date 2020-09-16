#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //CADA LETRA, SEJA MAIUSCULA OU MINUSCULA, É RELACIONADA A UM CÓDIGO NUMÉRICO
    //A MÁQUINA NÃO ENTENDE LETRAS CONCRETAS, ELA ENTENDE APENAS EM BINÁRIO
    //CADA LETRA POSSUI UM NÚMERO DECIMAL CORRESPONDENTE, E ESTE NÚMERO POR SUA VEZ, É CONVERTIDO PARA BINÁRIO
    //A TABELA ASCII(American Standard Code for Information Interchange) POSSUI ESTAS REPRESENTAÇÕES NUMÉRICAS, CONSIDERE-A

    char letra = 'p'; //MUDE A LETRA E COMPARE COM OS DADOS DA TABELA ASCII //MAIUSCULA E MINUSCULA SÃO DIFERENTES

    if(letra == 'p'){ //CONDICIONAL DE CONFIRMAÇÃO
        printf("A letra é %c", letra);
    }
    printf("\nO correspondente numérico para a letra %c digitada é %d\n", letra, letra); //AO IMPRIMIR A VARIÁVEL LETRA, QUE É X, COM %D, NÓS IMPRIMOS O CORRESPONDENTE NÚMERICO INTEIRO DELA

    system("pause");
    return 0;

}
