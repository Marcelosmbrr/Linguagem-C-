#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <locale.h>

    using namespace std;


    void imprime_vetor(int fila[TAM]){

        int cont;

        cout << "\n";

        for(cont = 0; cont < TAM; cont ++){
            cout << fila[cont] << " - ";
        }
    }


    void fila_iniciar(int *auxiliar, int *posicao){

        *auxiliar = 0;
        *posicao = -1;


    }

    void fila_enfileirar(int fila[TAM], int valor, int *posicao){


        if(*posicao == TAM - 1){
        cout << "\nA FILA ESTÁ CHEIA!!";
        }
        else{

            *posicao = *posicao + 1; //POSICAO ATUAL RECEBE SEMPRE 1, PARA QUE O VALOR SEJA ALOCADO NA PROXIMA POSIÇÃO
            fila[*posicao] = valor; //ALOCA O VALOR REPASSADO PARA A ATUAL POSICAO DA FILA (QUE É IGUAL A POSICAO ANTERIOR MAIS 1)

        }



    }

    int main(){

    setlocale(LC_ALL, "Portuguese");

        //A LÓGICA É EXATAMENTE A MESMA DA PILHA
        //UNICA DIFERENÇA ENTRE AS DUAS SÃO OS PROCESSOS DE RETIRADAS DOS ELEMENTOS
        //PILHAS = DESEMPILHAMOS COMEÇANDO PELO TOPO/ÚLTIMO ELEMENTO A ENTRAR //FILA = DESENFILEIRAMOS COMEÇANDO PELO COMEÇO/PRIMEIRO ELEMENTO A ENTRAR

        int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
        int auxiliar, posicao_atual;
        int valor;
        int tamanho;


        fila_iniciar(&auxiliar, &posicao_atual);

        fila_enfileirar(fila, 5, &posicao_atual);
        fila_enfileirar(fila, 10, &posicao_atual);
        fila_enfileirar(fila, 15, &posicao_atual);
        fila_enfileirar(fila, 20, &posicao_atual);
        fila_enfileirar(fila, 25, &posicao_atual);
        fila_enfileirar(fila, 30, &posicao_atual);
        fila_enfileirar(fila, 35, &posicao_atual);
        fila_enfileirar(fila, 40, &posicao_atual);
        fila_enfileirar(fila, 45, &posicao_atual);
        fila_enfileirar(fila, 45, &posicao_atual);
        fila_enfileirar(fila, 45, &posicao_atual);




        imprime_vetor(fila);

        cout << "\nA quantidade de número enfileirados é de : " << (posicao_atual - auxiliar) + 1 << endl;



        system("pause");
        return 0;

    }


