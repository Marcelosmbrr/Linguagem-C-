#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>
#include <iostream>

int main(){

    using namespace std;

    setlocale(LC_ALL, "Portuguese");

    int matriz[2][2], L, C;

    for(L=1; L <= 2; L++){
        for(C=1; C <= 2 ; C++){
        cout << "A linha � " << L << " e a coluna � " << C <<endl; //ENDL � O MESMO QUE /N
            }
        }

    system("pause");
    return 0;
    }


