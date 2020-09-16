#include <iostream>

    using namespace std;

    int main(){

    int cont = 0;
    for(cont =0; cont < 1000; cont ++){
        cout << cont << endl;

    }
    cout << "\n..............SEGUNDA CONTAGEM, COM BREAK EM 500..................." <<endl;
    for(cont =0; cont < 1000; cont ++){
        cout << cont << endl;
        if(cont == 500){
            break;
        }
    }
    return 0;
    }

