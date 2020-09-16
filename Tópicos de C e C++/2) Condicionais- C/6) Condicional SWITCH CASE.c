#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 1; //MUDE ESSE VALOR PARA MUDAR OS RESULTADOS
    char letra = 'x'; //MUDE ESSE VALOR PARA MUDAR OS RESULTADOS

    //O SWITCHCASE É UMA SEGUNDA FORMA DE CONDICIONAL
    //SEMANTICAMENTE É PREFERÍVEL

    printf("\nRESPOSTA DADA PELA CONDICIONAL IF:\n");
    //CONDICIONAL COM IF
    if(a == 1){
        printf("O valor é igual a 1\n");
    }
    else if (a == 2){
        printf("\nO valor é igual a 2");
    }
    else if (a == 3){
        printf("\nO valor é igual a 3");
    }
    else if (a == 4){
        printf("\nO valor é igual a 4");
    }
    else{
        printf("Não é 1, nem 2, nem 3, nem 4. \n");
    }

    printf("\nRESPOSTAS DADA PELA CONDICIONAL SWITCH CASE:\n");
    //CONDICIONAL COM SWITCH CASE
    switch(a){ //SE A FOR IGUAL AO CASO:
        case 1: //SE A FOR IGUAL A 1
            printf("O valor é igual a 1\n");
            break; //E ENTÃO SAIA DO SWITCH CASE
        case 2:
            printf("O valor é igual a 2\n");
            break;
        case 3:
            printf("O valor é igual a 3\n");
            break;
        case 4:
            printf("O valor é igual a 4\n");
            break;
        default: //SE NÃO FOR NENHUM CASO
            printf("Não é 1, nem 2, nem 3, nem 4. \n");
            break;
    }
    switch(letra){
        case 'x':
            printf("A letra é igual a x\n");
            break;
        default:
            printf("A letra não é igual a x\n");
            break;
        }

    system("pause");
    return 0;



}
