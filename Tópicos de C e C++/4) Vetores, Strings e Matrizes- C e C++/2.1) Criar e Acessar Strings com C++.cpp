#include <stdlib.h>
#include <stdio.h> //PARA COMANDOS DE ENTRADA E SAIDA DO C
#include <locale.h>
#include <strings.h>
#include <iostream> //PARA COMANDOS ENTRADA E SAIDA DO C++
#include <string>

int main(){

    setlocale(LC_ALL, "Portuguese");

    using namespace std; //Em C++ o namespace std serve para impedir conflitos de termos iguais mas com funcões distintas //ao invés de escrever std::termo, escrevemos isso pra que fique implicito ja

    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    cout << palavra;

    system("pause");
    return 0;

}
