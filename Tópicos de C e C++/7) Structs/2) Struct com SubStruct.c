#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


    typedef struct Data{ //TYPEDEF DEIXA O TERMO DATA COMO IMPLICATAMENTE UM STRUCT

        int dia;
        int ano;
        int mes;

    }Data;

    struct Aluno{

        int id;
        Data nascimento; //O STRUCT ESTA IMPLICITO //NASCIMENTO É LIGADO AS PROPRIEDADES DO CONJUNTO DATA

    };

    int main(){

    struct Aluno aluno1; //ALUNO1 RECUPERA AS PROPRIEDADES DE DA ESTRUTURA ALUNO

        aluno1.id = 21;
        aluno1.nascimento.ano = 1998; //ALUNO1 RECUPERA AS PROPRIEDADES DA STRUCT DATA POR MEIO DE NASCIMENTO
        aluno1.nascimento.mes = 05;
        aluno1.nascimento.dia = 12;

    printf("Nascido em: %d / %d / %d\n", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    system("pause");
    return 0;
    }
