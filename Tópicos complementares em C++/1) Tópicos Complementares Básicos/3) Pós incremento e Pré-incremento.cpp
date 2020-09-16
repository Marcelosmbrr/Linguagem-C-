#include <iostream>

    using namespace std;

    int main(){

    int x=1;

    cout << x++ << endl; //IRÁ PRIMEIRO USAR/IMPRIMIR O VALOR ORIGINAL DE X, SÓ PARA DEPOIS SOMAR 1 //LOGO IRÁ IMPRIMIR 1
    cout << x << endl; //AGORA IRÁ IMPRIMIR 2 //POIS A SOMA OCORREU DEPOIS DO USO DO VALOR DE X


    x = 1;
    cout << ++x; //IRÁ SOMAR UM PARA X, E USAR/IMPRIMIR POSTERIORMENTE //LOGO IRÁ IMPRIMIR 2


    return 0;


    }
