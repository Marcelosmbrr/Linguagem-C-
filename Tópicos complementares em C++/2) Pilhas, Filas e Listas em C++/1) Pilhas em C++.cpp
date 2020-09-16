#include <iostream>
#include <locale>
#include <stack> //BIBLIOTECA PARA PILHAGEM DE DADOS

    using namespace std;

    int main(){

        setlocale(LC_ALL, "Portuguese");

        //EM C++ É MUITO MAIS FÁCIL, UTLIZAMOS UMA BIBLIOTECA PARA O PROCEDIMENTO, QUE JÁ CONTEM TODAS AS FUNÇÕES NECESSÁRIAS
        //PARA EMPILHAR OS DADOS CHAMAMOS A FUNÇÃO DE PILHAR(PUSH) E PARA DESEMPILHAR OS DADOS CHAMAMOS A FUNÇÃO DE DESEMPILHAR(POP)
        //LEMBRANDO: EM PILHAS, O ÚLTIMO ELEMENTO A ENTRAR É O PRIMEIRO A SAIR, OU SEJA, DESEMPILHAMOS COMEÇANDO PELO TOPO

        stack <string> cartas; //COMANDO PARA EMPILHAR //NOME DA PILHA =  CARTAS // TIPO DOS DADOS EMPILHADOS = STRINGS

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de Ouros");
        cartas.push("Rei de Paus");

        cout << "Tamanho da pilha: " << cartas.size() << endl; //IMPRIME O TAMANHO DA PILHA

        cout << "Carta do topo: " << cartas.top() << endl; //IMPRIME A CARTA QUE ESTÁ NO TOPO


        cartas.pop(); //RETIRA UM ELEMENTO //COMEÇANDO PELO TOPO //ÚLTIMO ELEMENTO DA PILHA

        cout << "\n......................FOI RETIRADO UM ELEMENTO DA PILHA............................\n";

        cout << "Tamanho da pilha após a retirada: " << cartas.size() << endl;

        cout << "Nova carta do topo: " << cartas.top() << endl;





        return 0;


    }
