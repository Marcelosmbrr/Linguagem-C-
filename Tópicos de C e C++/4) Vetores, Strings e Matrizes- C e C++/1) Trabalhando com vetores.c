#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n...............................CONTAGEM MANUAL DO VETOR......SEM ENTRADA DE DADOS.......................................\n");

    //DEFINI��O SEGMENTADA MANUAL
    int vetor[3]; //POSSUI TR�S POSI��ES(UNIDIMENSIONAL) //COME�A EM 0
    int cont;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("Posi��o 0 = %d\n", vetor[0]);
    printf("Posi��o 1 = %d\n", vetor[1]);
    printf("Posi��o 2 = %d\n", vetor[2]);

    printf("\n...............................CONTAGEM COM LA�O DE REPETI��O......SEM ENTRADA DE DADOS.................................\n");

    //DEFINI��O POR LA�OS DE REPETI��O, COM DADOS DEFINIDOS POR MIM
    int vetor2[5];
    int i;

    for(i = 0; i <= 5; i ++){
        vetor2[i] = i;
        printf("Posi��o %d = %d\n", i, vetor2[i]);

    }

    printf("\n...............................CONTAGEM COM LA�O DE REPETI��O.........COM ENTRADA DE DADOS..............................\n");

    //DEFINI��O POR LA��S DE REPETI��O, COM ENTRADA DE DADOS PELO USU�RIO
    int TAM;

    printf("Informe quantas posi��es ter�o o vetor: ");
    scanf("%d", &TAM);
    printf("O vetor possuir� %d posi��es\n", TAM);

    int vetor3[TAM], cont2; //VETOR POSSUI TAM POSI��ES

    for(cont2 = 1; cont2 <= TAM; cont2++){ //AGORA O VETOR COME�A A PARTIR DE 1 //SE COME�AR A PARTIR DE 0, IR� DE 0 AT� O TAMANHO TOTAL (TAM), OU SEJA TER� UMA POSI��O A MAIS
        printf("Informe o valor que a posi��o %d armazenar�: ", cont2);
        scanf("%d", &vetor3[cont2]);
    }
    printf("...CONFIRMA��O DOS VALORES POR POSI��O...\n");
    for(cont2 = 1; cont2 <= TAM; cont2++){
        printf("A posi��o %d armazena o valor %d\n", cont2, vetor3[cont2]);
    }

    system("pause");
    return 0;


}
