#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

    using namespace std;

    int main(){

        ofstream ArquivoS;

        //ABRE O ARQUIVO OU CRIA CASO NÃO EXISTA
        ArquivoS.open("ArquivoS.txt");

        ArquivoS << " "; //LIMPA O ARQUIVO

        //FECHANDO ARQUIVO
        ArquivoS.close();

        return 0;
    }
