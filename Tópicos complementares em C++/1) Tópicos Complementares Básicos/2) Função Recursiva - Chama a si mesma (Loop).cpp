#include <iostream>

    using namespace std;

    void contador(int num, int cont=0);

    void contador(int num, int cont){
        cout << cont << endl;
        if(num > cont){
            contador(num, ++cont);

        }
    }

    int main(){

        contador(10);
        return 0;

    }


