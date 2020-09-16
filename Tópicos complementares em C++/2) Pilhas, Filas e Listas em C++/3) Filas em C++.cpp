#include <iostream>
#include <locale>
#include <queue> //BIBLIOTECA PARA ENFILEIRAR DADOS

    using namespace std;

    int main(){

        //DA MESMA FORMA QUE EM PILHAS, EM FILAS N�S UTLIZAMOS UMA BIBLIOTECA PARA O PROCEDIMENTO, QUE J� CONTEM TODAS AS FUN��ES NECESS�RIAS
        //PARA ENFILEIRAR OS DADOS CHAMAMOS A FUN��O DE ENFILEIRAR(PUSH) E PARA DESENFILEIRAR OS DADOS CHAMAMOS A FUN��O DE DESENFILEIRAR(POP)
        //LEMBRANDO: EM FILAS, O �LTIMO ELEMENTO A ENTRAR � O �LTIMO A SAIR, OU SEJA, DESENFILEIRAMOS A PARTIR DO PRIMEIRO ELEMENTO QUE ENTROU

        queue <string> cartas; //COMANDO PARA EMPILHAR //NOME DA PILHA =  CARTAS // TIPO DOS DADOS EMPILHADOS = STRINGS

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de Ouros");
        cartas.push("Rei de Paus");

        cout << "Tamanho da fila: " << cartas.size() << endl; //IMPRIME O TAMANHO DA FILA

        cout << "Primeira Carta da fila: " << cartas.front() << endl; //IMPRIME O ELEMENTO QUE ESTA NA FRENTE DA FILA //O PRIMEIRO
        cout << "�ltima Carta da fila: " << cartas.back() << endl; //IMPRIME O ELEMENTO QUE ESTA EM �LTIMO NA FILA //O �LTIMO

        cartas.pop(); //RETIRA UM ELEMENTO //COME�ANDO PELA FRENTE //PRIMEIRO ELEMENTO DA FILA

        cout << "\n......................FOI RETIRADO UM ELEMENTO DA FILA............................\n";

        cout << "Tamanho da fila: " << cartas.size() << endl;

        cout << "Nova carta da frente: " << cartas.front() << endl;





        return 0;


    }
