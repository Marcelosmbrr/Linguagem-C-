#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    //PONTEIROS APONTA PARA O ENDEREÇO DA MEMÓRIA, BEM COMO PARA O VALOR ALOCADO NO ENDEREÇO
    //É PORTANTO UMA FORMA DE TRABALHAR MAIS INTRINSECAMENTE COM OS DADOS

    int a; 
    int *ponteiro; //APONTA PARA UM ENDEREÇO DE MEMÓRIA //NÃO ARMAZENA VALOR
    
    ponteiro = &a; //APONTA PARA O ENDEREÇO DE a
    
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("\nO valor de a é %d e está alocado no endereço %d", a, &a);
    printf("\nO valor de a é %d e está alocado no endereço %d\n", *ponteiro, ponteiro); //*PONTEIRO= VALOR ALOCADO NO ENDEREÇO DE MEMÓRIA //PONTEIRO = ENDEREÇO ONDE O VALOR ESTÁ ALOCADO
    system("pause");
    return 0;
    


    }
