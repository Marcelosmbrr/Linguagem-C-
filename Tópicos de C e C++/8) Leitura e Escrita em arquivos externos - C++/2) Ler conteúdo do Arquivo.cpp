#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <fstream> //COMANDOS DE ESCRITA EM ARQUIVOS EXTERNOS

    using namespace std;

    int main(){



    ifstream ArquivoE("ArquivoS.txt"); //IFSTREAM = IREMOS LER AS INFORMA��ES DE UM ARQUIVO E JOGA-LAS PARA C� //O ARQUIVO USADO SER� O DO PROGRAMA ANTERIOR

        //STRING QUE RECEBER� O TEXTO LIDO DO ARQUIVO
        string Textolido;

        //PASSA O TEXTO DO ARQUIVO PARA A STRING
        for(string line; getline(ArquivoE, line);){ //L�GICA = PARA CADA LINHA QUE ELE PEGAR/LER DO ARQUIVOE, TRANSFORME O CONTEUDO DESSA LINHA EM UMA STRING CHAMADA LINE
            Textolido = line; //SER� ADICIONADO A CADA LA�O, O CONTE�DO DE LINE � TEXTOLIDO
             cout << Textolido << endl;//MOSTRAR O CONTE�DO LIDO POR LA�O/LINHA
        }




    system("pause");
    return 0;
    }
