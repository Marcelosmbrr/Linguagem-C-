#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //CADA LETRA, SEJA MAIUSCULA OU MINUSCULA, � RELACIONADA A UM C�DIGO NUM�RICO
    //A M�QUINA N�O ENTENDE LETRAS CONCRETAS, ELA ENTENDE APENAS EM BIN�RIO
    //CADA LETRA POSSUI UM N�MERO DECIMAL CORRESPONDENTE, E ESTE N�MERO POR SUA VEZ, � CONVERTIDO PARA BIN�RIO
    //A TABELA ASCII(American Standard Code for Information Interchange) POSSUI ESTAS REPRESENTA��ES NUM�RICAS, CONSIDERE-A

    char letra = 'p'; //MUDE A LETRA E COMPARE COM OS DADOS DA TABELA ASCII //MAIUSCULA E MINUSCULA S�O DIFERENTES

    if(letra == 'p'){ //CONDICIONAL DE CONFIRMA��O
        printf("A letra � %c", letra);
    }
    printf("\nO correspondente num�rico para a letra %c digitada � %d\n", letra, letra); //AO IMPRIMIR A VARI�VEL LETRA, QUE � X, COM %D, N�S IMPRIMOS O CORRESPONDENTE N�MERICO INTEIRO DELA

    system("pause");
    return 0;

}
