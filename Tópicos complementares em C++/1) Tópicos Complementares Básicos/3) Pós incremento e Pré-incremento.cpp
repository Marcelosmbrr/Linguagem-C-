#include <iostream>

    using namespace std;

    int main(){

    int x=1;

    cout << x++ << endl; //IR� PRIMEIRO USAR/IMPRIMIR O VALOR ORIGINAL DE X, S� PARA DEPOIS SOMAR 1 //LOGO IR� IMPRIMIR 1
    cout << x << endl; //AGORA IR� IMPRIMIR 2 //POIS A SOMA OCORREU DEPOIS DO USO DO VALOR DE X


    x = 1;
    cout << ++x; //IR� SOMAR UM PARA X, E USAR/IMPRIMIR POSTERIORMENTE //LOGO IR� IMPRIMIR 2


    return 0;


    }
