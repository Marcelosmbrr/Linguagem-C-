#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "FunctionC.h"




    //CRIEI UM NOVO ARQUIVO, COLEI ESTA FUN��O, E SALVEI COMO UM ARQUIVO .H
    //ASSIM CRIEI UMA NOVA BIBLIOTECA QUE CONT�M ESTA FUN��O E A INCLUI NO PROGRAMA COM #INCLUDE

    //void imprime_ol�mundo(){
        //cout << "Ol� mundo" << endl;
    //}

    int main(){

        setlocale(LC_ALL, "Portuguese");
        imprime_oi();

        system("pause");
        return 0;

    }
