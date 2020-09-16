#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char option, indicadorwhile = 0; //INDICADORWHILE = CORRESPONDENTE NUMÉRICO UTILIZADO PARA O WHILE

    //POR ALGUM MOTIVO, MESMO QUANDO ATENTIDA A EXIGENCIA DO WHILE, O PROGRAMA CONTINUA EXECUTANDO O DO

    printf("Existem três tipos de funcionalidades possíveis de serem escolhidas: A funcionalidade A, B ou C.\n");
    printf("Para escolher uma delas, digite a letra da funcionalidade (EX: A para a funcionalidade A.\n");
    do{
    printf("Digite a funcionalidade que deseja executar:\n");
    scanf(" %c", &option);

    switch(option){
        case 'A':
            printf("Foi escolhida a opção %c\n", option);
            indicadorwhile = 1;
            break;
        case 'B':
            printf("Foi escolhida a opção %c\n", option);
            indicadorwhile = 2;
            break;
        case 'C':
            printf("Foi escolhida a opção %c\n", option);
            indicadorwhile = 3;
            break;
        default:
            printf("Opção inválida. Digite A, B ou C.\n");
            indicadorwhile = 0; //SENDO 0= NENHMA ALTERNATIVA VÁLIDA ESCOLHIDA
            break;
            }
            printf("Valor do indicador do While: %d\n", indicadorwhile);
        }
        while(indicadorwhile != 1 && indicadorwhile != 2 && indicadorwhile != 3); //ENQUANTO O QUE FOR DIFITADO FOR DIFERENTE DE A(1), B(2) OU C(3) //SÓ FUNCIONA COM "E", NÃO FAZ SENTIDO
        printf("Saiu do while\n");

        system("pause");
        return 0;
    }
