#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <locale.h>

    using namespace std;

    //ESTE PROGRAMA IRÁ DEMONSTRAR UM MÉTODO PARA ORGANIZAR UM VETOR EM ORDEM CRESCENTE


    void imprime_vetor(int vetor[TAM]){

        int cont;

        cout << "\n\n";
        cout << "\n.........ORDENAÇÃO EM ANDAMENTO...................IMPRESSÃO VETOR...................................\n";
        cout << "\n\n";

        for(cont = 0; cont < TAM; cont ++){
            cout << " [" << vetor[cont] << "] ";

        }

    }




    int main(){

        setlocale(LC_ALL, "Portuguese");

        int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
        int x, y, aux;

        for(x=0; x < TAM; x++){

            imprime_vetor(vetor);

            for(y = x +1; y < TAM; y++){
                if(vetor[x] > vetor[y]){
                    aux = vetor[x];
                    vetor[x] = vetor[y];
                    vetor[y] = aux;

                }

            }

        }




    system("pause");
    return 0;
    }
