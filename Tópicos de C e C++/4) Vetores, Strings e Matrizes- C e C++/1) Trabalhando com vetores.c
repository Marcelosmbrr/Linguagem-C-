#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n...............................CONTAGEM MANUAL DO VETOR......SEM ENTRADA DE DADOS.......................................\n");

    //DEFINIÇÃO SEGMENTADA MANUAL
    int vetor[3]; //POSSUI TRÊS POSIÇÕES(UNIDIMENSIONAL) //COMEÇA EM 0
    int cont;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("Posição 0 = %d\n", vetor[0]);
    printf("Posição 1 = %d\n", vetor[1]);
    printf("Posição 2 = %d\n", vetor[2]);

    printf("\n...............................CONTAGEM COM LAÇO DE REPETIÇÃO......SEM ENTRADA DE DADOS.................................\n");

    //DEFINIÇÃO POR LAÇOS DE REPETIÇÃO, COM DADOS DEFINIDOS POR MIM
    int vetor2[5];
    int i;

    for(i = 0; i <= 5; i ++){
        vetor2[i] = i;
        printf("Posição %d = %d\n", i, vetor2[i]);

    }

    printf("\n...............................CONTAGEM COM LAÇO DE REPETIÇÃO.........COM ENTRADA DE DADOS..............................\n");

    //DEFINIÇÃO POR LAÇÕS DE REPETIÇÃO, COM ENTRADA DE DADOS PELO USUÁRIO
    int TAM;

    printf("Informe quantas posições terão o vetor: ");
    scanf("%d", &TAM);
    printf("O vetor possuirá %d posições\n", TAM);

    int vetor3[TAM], cont2; //VETOR POSSUI TAM POSIÇÕES

    for(cont2 = 1; cont2 <= TAM; cont2++){ //AGORA O VETOR COMEÇA A PARTIR DE 1 //SE COMEÇAR A PARTIR DE 0, IRÁ DE 0 ATÉ O TAMANHO TOTAL (TAM), OU SEJA TERÁ UMA POSIÇÃO A MAIS
        printf("Informe o valor que a posição %d armazenará: ", cont2);
        scanf("%d", &vetor3[cont2]);
    }
    printf("...CONFIRMAÇÃO DOS VALORES POR POSIÇÃO...\n");
    for(cont2 = 1; cont2 <= TAM; cont2++){
        printf("A posição %d armazena o valor %d\n", cont2, vetor3[cont2]);
    }

    system("pause");
    return 0;


}
