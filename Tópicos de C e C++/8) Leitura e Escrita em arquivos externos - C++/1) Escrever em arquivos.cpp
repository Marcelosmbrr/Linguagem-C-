#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <fstream> //COMANDOS DE ESCRITA EM ARQUIVOS EXTERNOS

    using namespace std;

    int main(){

        ofstream ArquivoS; //OFSTREAM = NESTE ARQUIVO AS INFORMA��ES DO PROGRAMA ENTRAM NO ARQUIVO

        //ABRE O ARQUIVO OU CRIA CASO N�O EXISTA
        ArquivoS.open("ArquivoS.txt", std::ios_base::app); //L�GICA: DEFINI��O DO NOME DO ARQUIVO.EXTENS�O, FORMA COMO IR� SER USADO (OPERA��O DE ESCRITA)
        //ESCREVENDO ALGO DENTRO DO ARQUIVO
        ArquivoS << "A-\n"; //POSS�VEL PULAR LINHAS NORMALMENTE //DESTA FORMA CADA VEZ QUE RODAR VAI ESCREVER SEM APAGAR O DIGITO ANTERIOR

        //FECHANDO ARQUIVO
        ArquivoS.close();
    }
