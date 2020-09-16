#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>



    struct palavra{ //ESTRUTURA/CONJUNTO PALAVRA //IMAGINE UM CONJUNTO DE PROPRIEDADES PARA UM OBJETO
        int ordem; //PROPRIEDADE ORDEM QUE É INT
        char primletra; //PROPRIEDADE PRIMLETRA QUE É CHAR
        char texto [255]; //PROPRIEDADE TEXTO QUE É UMA STRING OU ARRAY DE LETRAS
        };

    int main(){

        setlocale(LC_ALL, "Portuguese");

    struct palavra PrimeiraPalavra; //ESTAMOS CRIANDO UM OBJETO QUE TERÁ AS PROPRIEDADES DO CONJUNTO/STRUCT PALAVRA //OU É DO TIPO "PALAVRA"

    PrimeiraPalavra.ordem = 0;
    PrimeiraPalavra.primletra = 'C';
    strcpy(PrimeiraPalavra.texto, "Cocozinho"); //COPIA A PALAVRA COCOZINHO PARA O OBJETO CRIADO //ASSIM SE TRANSCREVE UM OBJETO QUE SEJA UMA STRING

    printf("A primeira palavra é de ordem %d, sua primeira letra é  %c e ela é a palavra %s\n", PrimeiraPalavra.ordem, PrimeiraPalavra.primletra, PrimeiraPalavra.texto );

    int cont;
    char palavrinha[10];
    struct palavra listapalavra[3]; //TERÃO 3 OBJETOS DE NOME LISTAPALAVRA QUE TERÃO AS PROPRIEDADES DA ESTRUTURA PALAVRA

    for(cont = 0; cont < 3; cont ++){
    listapalavra[cont].ordem = cont;
    listapalavra[cont].primletra = 'A';
    strcpy(listapalavra[cont].texto, "BBBBBBBB");
    printf("A palavra da posição %d é de ordem %d, sua primeira letra é  %c e ela é a palavra %s\n", cont, listapalavra[cont].ordem, listapalavra[cont].primletra, listapalavra[cont].texto );

    }

    system("pause");
    return 0;
    }
