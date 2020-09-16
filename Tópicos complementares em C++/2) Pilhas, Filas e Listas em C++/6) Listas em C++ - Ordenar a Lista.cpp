#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista; //SE ESCREVER: nome_da_lista(50), IRÁ SIGNIFICAR QUE O TAMANHO DA LISTA SERÁ 50 POSIÇÕES //SE ESCREVERMOS (5,50), IRÁ SIGNIFICAR QUE TERÃO 5 POSIÇÕES COM O VALOR 50
        int cont, tam = 10;
        list<int>::iterator it; //ITERATOR NOS PERMITIR INTERAGIR OU SELECIONAR UM ELEMENTO ESPECIFICO ENTRE VARIOS OUTROS

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
        //AO FINAL DESSE FOR A LISTA ESTARÁ VAZIA //A LÓGICA DO PORQUÊ FOI EXPLICADA NO PRIMEIRO PROGRAMA DE LISTAS
        //AGORA VAMOS REPREENCHER A LISTA

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


          lista.sort(); //ORDENA A LISTA, DO MENOR PARA O MAIOR //O CONTRÁRIO DISTO, SERIA LISTA.RESERVE();


          cout << "\n.................LISTA ORDENADA DE FORMA CRESCENTE...............DADOS DEPOIS DA ORDENAÇÃO.......\n";

          cout << "\nO primeiro elemento da lista é: " << lista.front();
          cout << "\nO último elemento da lista é " << lista.back();
          cout << "\nImpressão da lista abaixo:" << endl;

           for(cont =0; cont < tam; cont ++){
             cout << lista.front() << endl;
             lista.pop_front();
          }



        return 0;


    }


