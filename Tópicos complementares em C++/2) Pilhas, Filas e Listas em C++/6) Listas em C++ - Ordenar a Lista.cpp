#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista; //SE ESCREVER: nome_da_lista(50), IR� SIGNIFICAR QUE O TAMANHO DA LISTA SER� 50 POSI��ES //SE ESCREVERMOS (5,50), IR� SIGNIFICAR QUE TER�O 5 POSI��ES COM O VALOR 50
        int cont, tam = 10;
        list<int>::iterator it; //ITERATOR NOS PERMITIR INTERAGIR OU SELECIONAR UM ELEMENTO ESPECIFICO ENTRE VARIOS OUTROS

          lista.push_front(2); //�LTIMO ELEMENTO
          lista.push_front(3);
          lista.push_front(5);
          lista.push_front(4);
          lista.push_front(1);
          lista.push_front(7);
          lista.push_front(6);
          lista.push_front(10);
          lista.push_front(8);
          lista.push_front(9); //PRIMEITO ELEMENTO

        cout << "\n...................................DADOS ANTES DA ORDENA��O.....................................\n";

        cout << "\nO primeiro elemento da lista �: " << lista.front();
        cout << "\nO �ltimo elemento da lista � " << lista.back();
        cout << "\nImpress�o da lista abaixo:" << endl;

        for(cont =0; cont < tam; cont ++){ //IMPRESS�O DA LISTA DESORDENADA
            cout << lista.front() << endl;
            lista.pop_front();
        }
        //AO FINAL DESSE FOR A LISTA ESTAR� VAZIA //A L�GICA DO PORQU� FOI EXPLICADA NO PRIMEIRO PROGRAMA DE LISTAS
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


          lista.sort(); //ORDENA A LISTA, DO MENOR PARA O MAIOR //O CONTR�RIO DISTO, SERIA LISTA.RESERVE();


          cout << "\n.................LISTA ORDENADA DE FORMA CRESCENTE...............DADOS DEPOIS DA ORDENA��O.......\n";

          cout << "\nO primeiro elemento da lista �: " << lista.front();
          cout << "\nO �ltimo elemento da lista � " << lista.back();
          cout << "\nImpress�o da lista abaixo:" << endl;

           for(cont =0; cont < tam; cont ++){
             cout << lista.front() << endl;
             lista.pop_front();
          }



        return 0;


    }


