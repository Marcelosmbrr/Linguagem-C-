#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include "FunctionC++.h" //� poss�vel por tamb�m a localidade exata no diret�rio, como: "C:\Users\lcmar\OneDrive\�rea de Trabalho\Programa��o\C e C++ Estudo\C e C++\6) Aloca��o Din�mica de Mem�ria- C e C++\nome.h"




    //CRIEI UM NOVO ARQUIVO, COLEI ESTA FUN��O, E SALVEI COMO UM ARQUIVO .H
    //ASSIM CRIEI UMA NOVA BIBLIOTECA QUE CONT�M ESTA FUN��O E A INCLUI NO PROGRAMA COM #INCLUDE

    //void imprime_ol�mundo(){
        //cout << "Ol� mundo" << endl;
    //}

    int main(){

        using namespace std;

        setlocale(LC_ALL, "Portuguese");
        imprime_oi();

        system("pause");
        return 0;

    }
