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

    cout << "\nQuantos carros voc� possui? ";
    cin >> quantidade;

    struct Carro Seucarro[quantidade];

        for(cont =0; cont < quantidade ; cont ++){
            cout << "\nQual o nome do seu " << cont+1 << "� " << "carro? ";
            cin >> Seucarro[cont].nome;
            cout << "\nQual a cor do seu " << cont+1 << "� " << "carro? ";
            cin >> Seucarro[cont].cor;
            if(cont == quantidade-1 && Seucarro[0].nome == Seucarro[1]. nome){
                    do{
                        cout << "O primeiro carro informado tem o mesmo nome do segundo carro? Digite 1 para Sim e 0 para N�o";
                        cin >> confirmation;
                    }while(confirmation != 1 && confirmation != 0);
                if(confirmation){
                doisprimeiros = doisprimeiros + 1;
                cout << "Os dois s�o iguais, e isto tem zero relev�ncia..\n";
                }
                else{
                    cout << "Ent�o voc� digitou errado ou est� trolando\n";
                }
            }

        }


        system("pause");
        return 0;

    }
