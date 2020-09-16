#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <fstream> //COMANDOS DE ESCRITA EM ARQUIVOS EXTERNOS

    using namespace std;

    int main(){

        ofstream ArquivoS; //OFSTREAM = NESTE ARQUIVO AS INFORMAÇÕES DO PROGRAMA ENTRAM NO ARQUIVO

        //ABRE O ARQUIVO OU CRIA CASO NÃO EXISTA
        ArquivoS.open("ArquivoS.txt", std::ios_base::app); //LÓGICA: DEFINIÇÃO DO NOME DO ARQUIVO.EXTENSÃO, FORMA COMO IRÁ SER USADO (OPERAÇÃO DE ESCRITA)
        //ESCREVENDO ALGO DENTRO DO ARQUIVO
        ArquivoS << "A-\n"; //POSSÍVEL PULAR LINHAS NORMALMENTE //DESTA FORMA CADA VEZ QUE RODAR VAI ESCREVER SEM APAGAR O DIGITO ANTERIOR

        //FECHANDO ARQUIVO
        ArquivoS.close();
    }
