#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int contadorprog = 1, contadorreg = 10; //contador progressivo e contador regressivo

    //CONTAGEM PROGRESSIVA
    do{
        printf("Contagem Progressiva: %d\n", contadorprog);
        contadorprog ++;

    }
    while(contadorprog <= 10);

    printf("....................................................................................\n");

    //CONTAGEM REGRESSIVA
    do{
        printf("Contagem Regressiva: %d\n", contadorreg);
        contadorreg --;

    }
    while(contadorreg >= 1);

    system("pause");
    return 0;

    }
