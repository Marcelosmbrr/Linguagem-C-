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
            lista.push_front(cont);
        }

        cout << "O tamanho da lista é igual a: " << lista.size() << "\n";
        cout << "O primeiro elemento da lista é igual a: " << lista.front() << endl;

        it = lista.begin(); //IT "APONTA" PARA O INICIO DA LISTA
        advance(it, 5); //AVANÇAMOS 5 POSIÇÕES PARA O IT //AGORA ELE "APONTA" PARA A QUINTA POSIÇÃO DA LISTA
        lista.insert(it, 0); //INSERIMOS O VALOR 0 NA POSIÇÃO QUE O ITERATOR ESTÁ APONTANDO


         for(cont =0; cont < tam; cont ++){
            cout << lista.front() << endl;
            lista.pop_front();
        }




        return 0;


    }
