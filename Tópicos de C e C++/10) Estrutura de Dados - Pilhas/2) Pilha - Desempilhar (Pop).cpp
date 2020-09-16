#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <locale.h>

    using namespace std;

    void imprime_vetor(int vetor[TAM], int impressao){

        int cont;

        if(impressao == 1){
            cout << "\n........Primeira impressão, com a pilha vaga..............\n";
        }
        else if(impressao == 2){
            cout << "\n............Segunda impressão, com a primeira posição da pilha preenchida..........\n";
        }
        else if(impressao == 3){
            cout << "\n...........Terceira impressão, com a segunda posição da pilha preenchida.....................\n";
        }
        else if(impressao == 4){
            cout << "\n...........Quarta impressão, com a retirada de um valor da pilha.....................\n"; //PILHAS SÃO DESEMPILHADAS COMEÇANDO PELOS TOPOS //PORTANTO O VALOR 10 SERÁ RETIRADO
        }

        for(cont = 0; cont < TAM; cont ++){

            cout << "\nNa posicao " << cont << " esta alocado o valor " << vetor[cont] << " - ";
        }

    }

    void pilha_push_teste_simples(int pilha[TAM], int valor, int *topo){

        int cont;

        if(*topo == TAM - 1){
        cout << "\nA pilha está cheia!";
        }
        else{
            *topo = *topo + 1;
            pilha[*topo] = valor;

        }
    }

    void desempilhar(int pilha[TAM], int *topo){

        if(*topo == -1){
            cout << "\nNão há como desempilhar - A pilha está vazia.";
        }
        else{
            cout << "\nValor removido: " << pilha[*topo]; //10
            pilha[*topo] = 0;
            *topo = *topo - 1;
        }

    }




int main(){

        setlocale(LC_ALL, "Portuguese");

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1, cont, valor, impressao;

    impressao = 1;
    imprime_vetor(pilha, impressao); //1) IMPRIME A PILHA SEM NENHUM VALOR (APENAS ZEROS)

    pilha_push_teste_simples(pilha, 5, &topo); //2) REALIZA OS PROCEDIMENTOS DESTA FUNÇÃO

    impressao = 2;
    imprime_vetor(pilha, impressao); //3) AGORA IMPRIME A PILHA COM A POSIÇÃO [0] = 5, E TOPO = 5;

    pilha_push_teste_simples(pilha, 10, &topo); //4) REALIZA OS PROCEDIMENTOS DESTA FUNÇÃO

    impressao = 3;
    imprime_vetor(pilha, impressao); //5) AGORA IMPRIME A PILHA COM POSIÇÃO[1] = 10, E TOPO = 10;

    //RETIRADA DE VALOR
    desempilhar(pilha, &topo); //4) REALIZA OS PROCEDIMENTOS DESTA FUNÇÃO

    impressao = 4;
    imprime_vetor(pilha, impressao); //5) IMPRIME O VETOR COM O VALOR RETIRADO





    system("pause");
    return 0;


    }





