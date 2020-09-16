#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10
#include <locale.h>

    using namespace std;

    //PILHA � UMA FORMA DE ORGANIZAR DADOS //UNS EM CIMA DOS OUTROS - COMO UMA PILHA
    //TEMOS PODER PARA EMPILHAR E DESEMPILHAR DADOS, SENDO O �LTIMO DADO A ENTRAR, O PRIMEIRO A SAIR
    //PORTANTO O DESEMPILHAR DA PILHA COME�A A PARTIR DO TOPO



    void imprime_vetor(int vetor[TAM], int impressao){

        int cont;

        if(impressao == 1){
            cout << "\n........Primeira impress�o, com a pilha vaga..............\n";
        }
        else if(impressao == 2){
            cout << "\n............Segunda impress�o, com a primeira posi��o da pilha preenchida..........\n";
        }

        for(cont = 0; cont < TAM; cont ++){

            cout << "\nNa posicao " << cont << " esta alocado o valor " << vetor[cont] << " - ";
        }
    }

    void pilha_push_teste_simples(int pilha[TAM], int valor, int *topo){ //PILHA[TAM] RECEBE O VETOR PILHA[TAM] DO MAIN, E *TOPO RECEBE O ENDERE�O DA VAR TOPO (QUE NO INICIO ALOCA O VALOR -1)

        int cont;

        if(*topo == TAM - 1){ //SE TOPO FOR IGUAL A 9 ( 0 A 9 S�O 10 UNIDADES, CONTANDO COM 0) //N�O SER�, PORQUE TOPO = -1
        cout << "\nA pilha est� cheia!";
        }
        else{
            *topo = *topo + 1; //TOPO = -1 + 1 = 0
            pilha[*topo] = valor; //PILHA[0] = VALOR(5);

        }
    }

    void pilha_push_dinamico(int pilha[TAM], int valor, int *topo, int auxiliar_cont){

         int cont;

         //PARA CONFERIR SE OS DADOS EST�O ENTRANDO CORRETAMENTE
         cout << "\n.....REVIS�O DOS DADOS ENVIADOS PARA A FUN��O DE PILHAGEM DIN�MICA...........\n";
         cout << "\nO topo vale: " << *topo;
         cout << "\nO contador vale: " << auxiliar_cont;


         if(*topo == - 1){ //APENAS NA PRIMEIRA CHAMADA ESSA CONDICIONAL SER� V�LIDA
            cout << "\nEste valor digitado (" << valor << ") sera o primeiro dado da pilha, na posicao " << auxiliar_cont;
            *topo = *topo +1;
            pilha[*topo] = valor;
        }
    }

    int main(){

        setlocale(LC_ALL, "Portuguese");

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1, cont, valor, impressao; // QUANDO N�O TIVER NENHUM ELEMENTO NA PILHA, O TOPO DEVE COME�AR EM -1 (POIS LEMBRANDO, 0 � A POSI��O 1);

    //TESTE SIMPLES
    impressao = 1;
    imprime_vetor(pilha, impressao); //1) IMPRIME A PILHA SEM NENHUM VALOR (APENAS ZEROS)
    pilha_push_teste_simples(pilha, 5, &topo); //2) REALIZA OS PROCEDIMENTOS DESTA FUN��O
    impressao = 2;
    imprime_vetor(pilha, impressao); //3) AGORA IMPRIME A PILHA COM A POSI��O [0] = 5;

    //SE QUISERMOS EMPILHAR MAIS VEZES
    //VAMOS RESETAR OS DADOS NOVAMENTE, PARA EXEMPLIFICAR
    topo = -1;
    int pilha2[TAM] = {0,0,0,0,0,0,0,0,0,0};
    cout << "\n............................................PILHA PARA A PILHAGEM DIN�MICA................................................\n";
    imprime_vetor(pilha2, 0);
    for(cont = 0; cont < TAM; cont ++ ){
        cout << "\nDigite um valor:";
        cin >> valor;
        if(cont == 0 && topo == -1){
            pilha_push_dinamico(pilha2, valor, &topo, cont); //S� SER� CHAMADO NO PRIMEIRO LA�O
        }
        if(cont > 0 && topo != -1){
            pilha2[cont] = valor;
            topo = topo + 1;
            }
        }
        //IMPRESS�O DA PILHA DINAMICAMENTE PREENCHIDA
        for(cont = 0; cont < TAM; cont ++ ){
            cout << "\nPILHA DIN�MICA - IMPRESS�O: Na posicao " << cont << " esta alocado o valor " << pilha2[cont] << " - ";
        }
        cout << "\nPILHA DIN�MICA - IMPRESS�O: No topo, posicao " << TAM - 1 << " esta alocado o valor " << pilha2[topo];




    system("pause");
    return 0;


    }
