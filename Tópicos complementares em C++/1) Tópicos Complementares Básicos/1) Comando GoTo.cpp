#include <iostream>
#include <stdlib.h>
#include <locale>
#define TAM 5
#include <string.h>
#include <cstring>

    using namespace std;

    void soma_function(int numeros[TAM], int *soma){

        cout << "\n........................Somando numeros...................\n";
        *soma = 0;
        int cont;

        for(cont = 0; cont < TAM; cont++){
            cout << "\nFUN��O: O n�mero da posi��o " << cont << " foi recebido: " << numeros[cont];
        }
        for(cont = 0; cont < TAM; cont++){
            *soma = *soma + numeros[cont];
        }


    }

    int main(){


        setlocale(LC_ALL, "Portuguese");

        int num[TAM], cont = 0, soma = 99999;
        bool decision, decision2;

    inicio: //GOTO NOS REENVIA PARA C�, CRIANDO UM LOOP
    for(cont = 0; cont <TAM; cont++ ){
        cout << "\nDigite o " << cont+1 << "� n�mero: ";
        cin >> num[cont];
    }

    cout << "\nDeseja somar os n�meros? Digite 1 para Sim ou 0 para N�o";
    cin >> decision;

    if(decision){
        soma_function(num, &soma);

    }
    if(soma != 99999){
     cout << "\nA soma vale: " << soma;
    }
     cout << "\nDeseja reinformar 5 numeros para somar? Digite 1 para Sim ou 0 para N�o";
     cin >> decision2;
     if(decision2){
        goto inicio; //V� PARA INICIO

    }




    system("pause");
    return 0;
    }
