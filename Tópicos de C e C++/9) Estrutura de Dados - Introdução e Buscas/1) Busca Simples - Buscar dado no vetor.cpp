#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#define TAM 10


    using namespace std;

   // void imprime_vetor(int vetor[TAM]) {

       // int cont;
       // for(cont =0; cont < TAM; cont++){
           // cout << "Posição " << cont << " = " << vetor[cont] << " // ";
       // }
    //}

    int Busca_simples(int valorprocurado, int vetor[TAM], int *PosicaoEncontrada){ //ESTE PONTEIRO RECEBE O ENDEREÇO DA VAR ENVIADA DO MAIN

        int cont;//POSITIONFOUND IRÁ ARMAZENAR A POSICAO DO VALOR IGUAL AO DIGITADO
        int Procura;
        cout << "\nO valor digitado foi recebido pela função....o valor é..." << valorprocurado;
        for(cont =0; cont < TAM; cont++){
            if(vetor[cont] == valorprocurado){
            	*PosicaoEncontrada = cont+1; //AUXILIAR DO MAIN RECEBE CONT ATRAVÉS DO SEU PONTEIRO //CONT+1 PARA MOSTRAR A PRIMEIRA POSICAO COMO 1 E NÃO COMO 0
                Procura = 1;
                return 1;

                }
                else if(vetor[cont] != valorprocurado){
                    Procura = 0;
                    }
            }
        if(Procura == 0){
            return 0;
        }
    }


    int main(){

        setlocale(LC_ALL, "Portuguese");

        int vetor[TAM] = {20, 50, 30, 90, 2, 3, 5, 8, 1, 10};
        int valorprocurado, cont, PosicaoEncontrada;
        bool retorno;

        //IMPRIME O VETOR
        for(cont = 0; cont < TAM; cont ++){
            cout << vetor[cont] << " // ";
        }

        cout << "\nDigite o valor que deseja encontrar: ";
        cin >> valorprocurado;

        retorno = Busca_simples(valorprocurado, vetor, &PosicaoEncontrada); //ESTOU ENVIANDO O VALOR DIGITADO, O VETOR, E O ENDEREÇO DE UMA VARIÁVEL

        if(retorno == true){
        	cout << "\nValor encontrado na posicao " << PosicaoEncontrada;
		}
		else if(retorno == false){
            cout << "\nO valor não foi encontrado\n";
		}

    system("pause");
    return 0;

    }
