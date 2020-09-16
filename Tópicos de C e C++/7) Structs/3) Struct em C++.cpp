#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <new>

    using namespace std;


    struct Carro{

        string nome;
        string cor;


    };

    int main(){

        setlocale(LC_ALL, "Portuguese");

    int cont, cont2, quantidade, doisprimeiros = 0;
    int confirmation;

    cout << "\nQuantos carros você possui? ";
    cin >> quantidade;

    struct Carro Seucarro[quantidade];

        for(cont =0; cont < quantidade ; cont ++){
            cout << "\nQual o nome do seu " << cont+1 << "º " << "carro? ";
            cin >> Seucarro[cont].nome;
            cout << "\nQual a cor do seu " << cont+1 << "º " << "carro? ";
            cin >> Seucarro[cont].cor;
            if(cont == quantidade-1 && Seucarro[0].nome == Seucarro[1]. nome){
                    do{
                        cout << "O primeiro carro informado tem o mesmo nome do segundo carro? Digite 1 para Sim e 0 para Não";
                        cin >> confirmation;
                    }while(confirmation != 1 && confirmation != 0);
                if(confirmation){
                doisprimeiros = doisprimeiros + 1;
                cout << "Os dois são iguais, e isto tem zero relevância..\n";
                }
                else{
                    cout << "Então você digitou errado ou está trolando\n";
                }
            }

        }


        system("pause");
        return 0;

    }
