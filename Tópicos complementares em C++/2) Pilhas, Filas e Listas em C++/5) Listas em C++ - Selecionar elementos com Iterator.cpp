#include <iostream>
#include <list>
#include <locale>

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        list<int> lista; //SE ESCREVER: nome_da_lista(50), IR� SIGNIFICAR QUE O TAMANHO DA LISTA SER� 50 POSI��ES //SE ESCREVERMOS (5,50), IR� SIGNIFICAR QUE TER�O 5 POSI��ES COM O VALOR 50
        int cont, tam = 10;
        list<int>::iterator it; //ITERATOR NOS PERMITIR INTERAGIR OU SELECIONAR UM ELEMENTO ESPECIFICO ENTRE VARIOS OUTROS

        for(cont =0; cont < tam; cont ++){
            lista.push_front(cont);
        }

        cout << "O tamanho da lista � igual a: " << lista.size() << "\n";
        cout << "O primeiro elemento da lista � igual a: " << lista.front() << endl;

        it = lista.begin(); //IT "APONTA" PARA O INICIO DA LISTA
        advance(it, 5); //AVAN�AMOS 5 POSI��ES PARA O IT //AGORA ELE "APONTA" PARA A QUINTA POSI��O DA LISTA
        lista.insert(it, 0); //INSERIMOS O VALOR 0 NA POSI��O QUE O ITERATOR EST� APONTANDO


         for(cont =0; cont < tam; cont ++){
            cout << lista.front() << endl;
            lista.pop_front();
        }




        return 0;


    }
