#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    //PONTEIROS APONTA PARA O ENDERE�O DA MEM�RIA, BEM COMO PARA O VALOR ALOCADO NO ENDERE�O
    //� PORTANTO UMA FORMA DE TRABALHAR MAIS INTRINSECAMENTE COM OS DADOS

    int a; 
    int *ponteiro; //APONTA PARA UM ENDERE�O DE MEM�RIA //N�O ARMAZENA VALOR
    
    ponteiro = &a; //APONTA PARA O ENDERE�O DE a
    
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("\nO valor de a � %d e est� alocado no endere�o %d", a, &a);
    printf("\nO valor de a � %d e est� alocado no endere�o %d\n", *ponteiro, ponteiro); //*PONTEIRO= VALOR ALOCADO NO ENDERE�O DE MEM�RIA //PONTEIRO = ENDERE�O ONDE O VALOR EST� ALOCADO
    system("pause");
    return 0;
    


    }
