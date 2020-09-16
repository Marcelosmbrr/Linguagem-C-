#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>
#include <stdbool.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int matriz[2][2], contL, contC; //L = LINHA E C = COLUNA
    bool confirma;

    printf("\n...............Matriz sem entrada de dados pelo usuário ...................................\n");
    for(contL=1; contL <= 2; contL++){
        for(contC=1; contC <= 2 ; contC++){
        printf("A linha é %d e a coluna é %d\n", contL, contC);
            }
        }

    printf("\n...............Matriz com entrada de dados pelo usuário ...................................\n");
    int L2MAX, C2MAX; //NUMERO MAXIMO DE LINHAS E NUMERO MAXIMOS DE COLUNAS


    do{
    printf("Escreva o número de linhas da matriz:");
    scanf("%d", &L2MAX);
    printf("Escreva o número de colunas da matriz:");
    scanf("%d", &C2MAX);
    printf("\nA matriz informada possui, portanto, %d linhas e %d colunas? Digite 1 para confirmar e 0 para negar e reinformar os dados da matriz: ", L2MAX, C2MAX);
    scanf("%d", &confirma);
    }
    while(confirma == 0);
    printf("\nMatriz confirmada....processando...........%d linhas....%d colunas.....", L2MAX, C2MAX);

    int matriz2[L2MAX][C2MAX];
    for(contL = 1; contL <= L2MAX; contL++){
        for(contC = 1; contC <= C2MAX; contC++){
            printf("\nDigite o valor da %d linha %d coluna: ", contL, contC);
            scanf("%d", &matriz2[contL][contC]);
            }
        }
    printf("\n.....Impressão da matriz....\n");
    for(contL = 1; contL <= L2MAX; contL++){
        for(contC = 1; contC <= C2MAX; contC++){
                printf("%d ", matriz2[contL][contC]); //ESPAÇAMENTO APOS O D PARA EXISTIR UM ESPAÇO ENTRE UM NUMERO E OUTRO, NA MESMA LINHA
        }
    printf("\n"); //QUANDO SAI DO FOR DA COLUNA, E VAI PARA O FOR DA LINHA, ELE LE ESSA QUEBRA DE LINHA ANTES, ASSIM A SEGUNDA LINHA FICARÁ ABAIXO DA PRIMEIRA
    }



    system("pause");
    return 0;
    }
