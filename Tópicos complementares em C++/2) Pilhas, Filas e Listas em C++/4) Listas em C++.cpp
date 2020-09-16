#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista; //SE ESCREVER: nome_da_lista(50), IRÁ SIGNIFICAR QUE O TAMANHO DA LISTA SERÁ 50 POSIÇÕES //SE ESCREVERMOS (5,50), IRÁ SIGNIFICAR QUE TERÃO 5 POSIÇÕES COM O VALOR 50
        int cont, tam = 10;
        list<int>::iterator it; //ITERATOR NOS PERMITIR INTERAGIR OU SELECIONAR UM ELEMENTO ESPECIFICO ENTRE VARIOS OUTROS

        for(cont =0; cont < tam; cont ++){
            lista.push_front(cont); //CADA PUSH ADICIONA O VALOR DE CONT
        }

        cout << "O tamanho da lista é igual a: " << lista.size() << "\n";
        cout << "O primeiro elemento da lista é igual a: " << lista.front() << endl;

         for(cont =0; cont < tam; cont ++){ //COMO IMPRIMIR A LISTA
            cout << lista.front() << endl; // IMPRIME ELEMENTO DA FRENTE DA LISTA
            lista.pop_front(); //RETIRA O ELEMENTO IMPRESSO NESTE LAÇO, DA LISTA, TORNANDO O POSTERIOR, AGORA, O DA FRENTE //AO FINAL DESSE FOR A LISTA ESTARA VAZIA
        }



        return 0;


    }


