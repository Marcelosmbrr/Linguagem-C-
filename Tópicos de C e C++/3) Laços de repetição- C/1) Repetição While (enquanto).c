#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int contadorprog = 1, contadorreg = 10; //contador progressivo e contador regressivo

    //CONTAGEM PROGRESSIVA
    while(contadorprog <= 10){
        printf("Contagem Progressiva: %d\n", contadorprog);
         contadorprog++; //contadorprog = contadorprog + 1; //

    }

    printf("....................................................................................\n");

    //CONTADOR REGRESSIVA
    while(contadorreg >= 1){
        printf("Contagem Regressiva: %d\n", contadorreg);
        contadorreg--; //contadorreg = contadorreg - 1;

    }
    system("pause");
    return 0;
}
