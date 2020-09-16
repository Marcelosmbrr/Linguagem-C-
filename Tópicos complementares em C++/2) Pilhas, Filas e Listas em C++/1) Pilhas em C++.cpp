#include <iostream>
#include <locale>
#include <stack> //BIBLIOTECA PARA PILHAGEM DE DADOS

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        //EM C++ � MUITO MAIS F�CIL, UTLIZAMOS UMA BIBLIOTECA PARA O PROCEDIMENTO, QUE J� CONTEM TODAS AS FUN��ES NECESS�RIAS
        //PARA EMPILHAR OS DADOS CHAMAMOS A FUN��O DE PILHAR(PUSH) E PARA DESEMPILHAR OS DADOS CHAMAMOS A FUN��O DE DESEMPILHAR(POP)
        //LEMBRANDO: EM PILHAS, O �LTIMO ELEMENTO A ENTRAR � O PRIMEIRO A SAIR, OU SEJA, DESEMPILHAMOS COME�ANDO PELO TOPO

        stack <string> cartas; //COMANDO PARA EMPILHAR //NOME DA PILHA =  CARTAS // TIPO DOS DADOS EMPILHADOS = STRINGS

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de Ouros");
        cartas.push("Rei de Paus");

        cout << "Tamanho da pilha: " << cartas.size() << endl; //IMPRIME O TAMANHO DA PILHA

        cout << "Carta do topo: " << cartas.top() << endl; //IMPRIME A CARTA QUE EST� NO TOPO


        cartas.pop(); //RETIRA UM ELEMENTO //COME�ANDO PELO TOPO //�LTIMO ELEMENTO DA PILHA

        cout << "\n......................FOI RETIRADO UM ELEMENTO DA PILHA............................\n";

        cout << "Tamanho da pilha ap�s a retirada: " << cartas.size() << endl;

        cout << "Nova carta do topo: " << cartas.top() << endl;





        return 0;


    }
