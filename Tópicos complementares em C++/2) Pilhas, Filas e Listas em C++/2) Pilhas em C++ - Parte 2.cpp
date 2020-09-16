#include <iostream>
#include <locale>
#include <stack> //BIBLIOTECA PARA PILHAGEM DE DADOS

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");


        stack <string> cartas;


         if(cartas.empty()){ //SE A PILHA ESTIVER VAZIA
            cout << "\nA pilha está vazia!" << endl;
        }else{
            cout << "\nA pilha não está vazia!" << endl;
        }

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de Ouros");
        cartas.push("Rei de Paus");



        cout << "\nTamanho da pilha: " << cartas.size() << endl;

        cout << "Carta do topo: " << cartas.top() << endl;

        cartas.pop();

        cout << "\n......................FOI RETIRADO UM ELEMENTO DA PILHA............................\n";

        cout << "Tamanho da pilha: " << cartas.size() << endl;

        cout << "Nova carta do topo: " << cartas.top() << endl;





        return 0;


    }
