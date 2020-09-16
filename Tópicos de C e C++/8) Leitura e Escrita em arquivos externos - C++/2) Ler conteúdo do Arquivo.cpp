#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <fstream> //COMANDOS DE ESCRITA EM ARQUIVOS EXTERNOS

    using namespace std;

    int main(){



    ifstream ArquivoE("ArquivoS.txt"); //IFSTREAM = IREMOS LER AS INFORMAÇÕES DE UM ARQUIVO E JOGA-LAS PARA CÁ //O ARQUIVO USADO SERÁ O DO PROGRAMA ANTERIOR

        //STRING QUE RECEBERÁ O TEXTO LIDO DO ARQUIVO
        string Textolido;

        //PASSA O TEXTO DO ARQUIVO PARA A STRING
        for(string line; getline(ArquivoE, line);){ //LÓGICA = PARA CADA LINHA QUE ELE PEGAR/LER DO ARQUIVOE, TRANSFORME O CONTEUDO DESSA LINHA EM UMA STRING CHAMADA LINE
            Textolido = line; //SERÁ ADICIONADO A CADA LAÇO, O CONTEÚDO DE LINE À TEXTOLIDO
             cout << Textolido << endl;//MOSTRAR O CONTEÚDO LIDO POR LAÇO/LINHA
        }




    system("pause");
    return 0;
    }
