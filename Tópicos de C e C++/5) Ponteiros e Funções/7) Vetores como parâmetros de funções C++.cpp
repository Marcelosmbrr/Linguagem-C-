#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include "Function.h"

    using namespace std;


    void imprime_vetor(int vetor[10], int n){

    	for(n=0; n < 5; n++){
    		cout << "\n" << "O numero da posi��o " << n+1 << " � " << vetor[n] << "\n";

		}
	}

	void modifica_vetor(int *vetor, int tamanho){
		int cont;
		for(cont=0; cont<tamanho; cont++ ){
			vetor[cont] = vetor[cont] + 5;
		}
	}

	void soma_sucessiva(int *vetor, int tamanho){ //*VETOR APONTA PARA AS POSI��ES DO VETORSOMA //TAMANHO RECEBE QUANTIDADE
	    int cont;
	    for(cont = 0; cont < tamanho; cont ++){
            cout << "O valor da posi��o " << cont+1 << " � igual a " << vetor[cont] << endl;
	    }

	}



	int main(){


		setlocale(LC_ALL, "Portuguese");



    	int vetor[5] = {1, 2, 3, 4, 5}, i, quantidade;

    	imprime_vetor(vetor, 5); //PARA ENVIAR O VETOR, BASTA COLOCAR SEU NOME // SE QUISESSEMOS ENVIAR O ENDEREÇO DO VETOR PARA UM PONTEIRO, FARIAMOS A MESMA COISA
    	cout << "\n" << "..................................................................." << "\n";
    	modifica_vetor(vetor, 5);
    	imprime_vetor(vetor, 5);

    	cout << endl << "Informe quantos n�meros deseja somar: ";
    	cin >> quantidade;

    	int vetorsoma[quantidade];
    	for(i=0; i < quantidade; i++){
            cout << "Informe o valor do primeiro n�mero: ";
            cin >> vetorsoma[i];
    	}
    	soma_sucessiva(vetorsoma, quantidade);










	system("pause");
	return 0;

}
