#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "FunctionC.h"




    //CRIEI UM NOVO ARQUIVO, COLEI ESTA FUNÇÃO, E SALVEI COMO UM ARQUIVO .H
    //ASSIM CRIEI UMA NOVA BIBLIOTECA QUE CONTÉM ESTA FUNÇÃO E A INCLUI NO PROGRAMA COM #INCLUDE

    //void imprime_olámundo(){
        //cout << "Olá mundo" << endl;
    //}

    int main(){

        setlocale(LC_ALL, "Portuguese");
        imprime_oi();

        system("pause");
        return 0;

    }
