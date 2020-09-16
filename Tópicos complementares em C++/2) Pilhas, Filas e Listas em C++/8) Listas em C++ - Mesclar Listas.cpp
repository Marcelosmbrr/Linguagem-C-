#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista;
        list<int> teste;
        int cont, tam = 10;
        list<int>::iterator it;

          teste.push_front(900);
          teste.push_front(900);
          teste.push_front(900);
          teste.push_front(900);
          teste.push_front(900);
          teste.push_front(900);

          for(cont =0; cont < tam; cont ++){
            lista.push_front(cont); //CADA PUSH ADICIONA O VALOR DE CONT
        }


          lista.merge(teste);
          cout << "O tamanho da lista é igual a: " << lista.size() << "\n";


          tam = lista.size();
          for(cont =0; cont < tam; cont ++){
             cout << lista.front() << endl;
             lista.pop_front();
          }





        return 0;


    }


