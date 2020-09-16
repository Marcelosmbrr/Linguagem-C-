#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include "FunctionC++.h" //É possível por também a localidade exata no diretório, como: "C:\Users\lcmar\OneDrive\Área de Trabalho\Programação\C e C++ Estudo\C e C++\6) Alocação Dinâmica de Memória- C e C++\nome.h"




    //CRIEI UM NOVO ARQUIVO, COLEI ESTA FUNÇÃO, E SALVEI COMO UM ARQUIVO .H
    //ASSIM CRIEI UMA NOVA BIBLIOTECA QUE CONTÉM ESTA FUNÇÃO E A INCLUI NO PROGRAMA COM #INCLUDE

    //void imprime_olámundo(){
        //cout << "Olá mundo" << endl;
    //}

    int main(){

        using namespace std;

        setlocale(LC_ALL, "Portuguese");
        imprime_oi();

        system("pause");
        return 0;

    }
