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


    void fila_iniciar(int *posicao_retirada, int *posicao){

        *posicao_retirada = 0;
        *posicao = -1;


    }

    void fila_enfileirar(int fila[TAM], int valor, int *posicao){


        if(*posicao == TAM - 1){
        cout << "\nA FILA EST� CHEIA!!";
        }
        else{

            *posicao = *posicao + 1; //POSICAO ATUAL RECEBE SEMPRE 1, PARA QUE O VALOR SEJA ALOCADO NA PROXIMA POSI��O
            fila[*posicao] = valor; //ALOCA O VALOR REPASSADO PARA A ATUAL POSICAO DA FILA (QUE � IGUAL A POSICAO ANTERIOR MAIS 1)

        }

    }

    void desenfileirar(int fila[TAM], int *posicao_retirada){

        cout << "\n......Processo de remo��o.....\n";

        cout << "O valor " << fila[*posicao_retirada] << " foi removido";
        fila[*posicao_retirada] = 0;
        *posicao_retirada = *posicao_retirada + 1;

    }



    int main(){

    setlocale(LC_ALL, "Portuguese");

        //A L�GICA � EXATAMENTE A MESMA DA PILHA
        //UNICA DIFEREN�A ENTRE AS DUAS S�O OS PROCESSOS DE RETIRADAS DOS ELEMENTOS
        //PILHAS = DESEMPILHAMOS COME�ANDO PELO TOPO/�LTIMO ELEMENTO A ENTRAR //FILA = DESENFILEIRAMOS COME�ANDO PELO COME�O/PRIMEIRO ELEMENTO A ENTRAR

        int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
        int posicao_retirada, posicao_atual;
        int valor;
        int tamanho;

        //A VARI�VEL POSICAO_ATUAL INICIA COM VALOR -1, E VARIA DE 1 EM 1 A CADA VEZ QUE A FUN��O DE ENFILEIRAR � CHAMADA
        //POR EXEMPLO, NA PRIMEIRA CHAMADA DESTA FUN��O, A VARI�VEL POSICAO_ATUAL RECEBE O VALOR 1, TORNANDO-SE 0 (POIS -1 + +1 = 0)
        //EM SEGUIDA UTILIZAMOS ESTA VARIAVEL COMO REFERENCIA PARA POSICAO DA FILA, E NESTA POSI��O ALOCAMOS O VALOR REPASSADO //ASSIM, NA PRIMEIRA CHAMADA: FILA[POSICAO_ATUAL = 0] = VALOR
        //ASSIM A CADA CHAMADA, A ESTA VARI�VEL RECEBE O VALOR 1, E � UTILIZADA DE REFERENCIA PARA A POSICAO DO VETOR. DESTA FORMA A CADA CHAMADA, A POSICAO VARIA +1 E RECEBE O NOVO VALOR

        //A VARI�VEL POSICAO_RETIRADA ASSUME O VALOR 0 AT� QUE A FUN��O DE DESENFILEIRAR SEJA CHAMADA
        //EM PILHAS COME�AMOS A RETIRADA DE DADOS PELO PRIMEIRO ELEMENTO
        //A L�GICA � A MESMA DA FUN��O DE ENFILEIRAR, POR�M AGORA UTILIZAMOS COMO REFER�NCIA PARA POSICAO MANIPULADO DO VETOR, A VARIAVEL POSICAO_RETIRADA
        //A CADA CHAMADA ELA VARIA +1, COME�ANDO EM 0, E CADA CHAMADA A POSICAO RECEBE O VALOR 0, COMO FORMA DE EXPRESSAR UMA SUPOSTA RETIRADA DO VALOR

        fila_iniciar(&posicao_retirada, &posicao_atual);

        fila_enfileirar(fila, 5, &posicao_atual);
        fila_enfileirar(fila, 10, &posicao_atual);
        fila_enfileirar(fila, 15, &posicao_atual);
        fila_enfileirar(fila, 20, &posicao_atual);
        fila_enfileirar(fila, 25, &posicao_atual);
        fila_enfileirar(fila, 30, &posicao_atual);
        fila_enfileirar(fila, 35, &posicao_atual);
        fila_enfileirar(fila, 40, &posicao_atual);

        imprime_vetor(fila);

        desenfileirar(fila, &posicao_retirada);

        imprime_vetor(fila);


        cout << "\nA quantidade de n�mero enfileirados � de : " << (posicao_atual - posicao_retirada) + 1 << endl;



        system("pause");
        return 0;

    }


