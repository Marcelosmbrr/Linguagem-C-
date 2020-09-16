#include <iostream>
#include <locale>

    using namespace std;

    int main(){

    setlocale(LC_ALL, "Portuguese");

    enum armas{AK47, T65, MP4 , M16}; //SEM ATRIBUIÇÃO DE VALOR MANUAL, CADA UM VALE POR SUA POSIÇÃO, COMEÇANDO DE 0 //EXEMPLO: ESCOPETA VALE 1

    armas Escolha;

    Escolha = AK47;
    cout << "\n.....CASO SEM ATRIBUIÇÃO DE VALORES...........";
    cout << Escolha;

    enum armas_ID{DesertGun= 19856, LugerP8= 12452, Glock= 956, M1911= 2154};

    armas_ID Escolha2;

    Escolha2 = LugerP8;

    cout << "\n.......CASO COM ATRIBUIÇÃO DE VALORES..........";
    cout << Escolha2;

    return 0;

    }
