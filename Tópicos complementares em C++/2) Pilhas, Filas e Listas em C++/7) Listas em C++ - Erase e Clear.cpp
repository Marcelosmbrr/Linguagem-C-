#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista;
        int cont, tam = 10;
        list<int>::iterator it;

          lista.push_front(2); //ÚLTIMO ELEMENTO
          lista.push_front(3);
          lista.push_front(5);
          lista.push_front(4);
          lista.push_front(1);
          lista.push_front(7);
          lista.push_front(6);
          lista.push_front(10);
          lista.push_front(8);
          lista.push_front(9); //PRIMEITO ELEMENTO

        cout << "\n...................................DADOS ANTES DA ORDENAÇÃO.....................................\n";

        cout << "\nO primeiro elemento da lista é: " << lista.front();
        cout << "\nO último elemento da lista é " << lista.back();
        cout << "\nImpressão da lista abaixo:" << endl;

        for(cont =0; cont < tam; cont ++){ //IMPRESSÃO DA LISTA DESORDENADA
            cout << lista.front() << endl;
            lista.pop_front();
        }

          lista.push_front(2);
          lista.push_front(3);
          lista.push_front(5);
          lista.push_front(4);
          lista.push_front(1);
          lista.push_front(7);
          lista.push_front(6);
          lista.push_front(10);
          lista.push_front(8);
          lista.push_front(9);


          lista.sort();


          cout << "\n.................LISTA ORDENADA DE FORMA CRESCENTE...............DADOS DEPOIS DA ORDENAÇÃO.......\n";

          cout << "\nO primeiro elemento da lista é: " << lista.front();
          cout << "\nO último elemento da lista é " << lista.back();
          cout << "\nImpressão da lista abaixo:" << endl;

           for(cont =0; cont < tam; cont ++){
             cout << lista.front() << endl;
             lista.pop_front();
          }

          //NOVAS COISAS A PARTIR DAQUI

          lista.push_front(2);
          lista.push_front(3);
          lista.push_front(5);
          lista.push_front(4);
          lista.push_front(1);
          lista.push_front(7);
          lista.push_front(6);
          lista.push_front(10);
          lista.push_front(8);
          lista.push_front(9);


          lista.sort();

          it = lista.begin();
          advance(it, 5);
          lista.erase(--it);

          cout << "\n.................LIMPADO/RETIRADO O VALOR DA POSIÇÃO 5 COM O COMANDO ERASE.......\n";
          cout << "\nImpressão da lista abaixo:" << endl;

            for(cont =0; cont < tam; cont ++){
             cout << lista.front() << endl;
             lista.pop_front();
          }

          lista.push_front(2);
          lista.push_front(3);
          lista.push_front(5);
          lista.push_front(4);
          lista.push_front(1);
          lista.push_front(7);
          lista.push_front(6);
          lista.push_front(10);
          lista.push_front(8);
          lista.push_front(9);


          lista.sort();
          lista.clear();

          cout << "\n...........FOI UTILIZADO O COMANDO DE LIMPAR A LISTA..............\n";

          if(lista.empty()){
            cout << "\nA lista está vazia.";
          }
          else{
            cout << "\nA lista não está vazia.";
          }


        return 0;


    }


