#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//LEMBRANDO: *PONTEIRO = VALOR ARMAZENADO NO ENDEREÇO //PONTEIRO = ENDEREÇO DA POSIÇÃO;
	//UTILIZANDO PONTEIROS PARA APONTAR PARA VARIÁVEIS DO MAIN, TORNA DESNECESSÁRIO A UTILIZAÇÃO DE RETORNOS

	void aumentadez(int *numero){ //2) PONTEIRO RECEBE O ENDEREÇO DA VARIÁVEL //AGORA ESSE PONTEIRO APONTA PARA A VARIÁVEL DO MAIN, OU SEJA, MODIFICAÇÕES FEITAS NESTA FUNÇÃO AFETAM DIRETAMENTE A VARIÁVEL DO MAIN
		printf("O valor alocado no endereço de memória da variável é igual a %d\n", *numero); //IMPRIME O VALOR CONTIDO NA VARIÁVEL DO MAIN
		printf("O endereço da variável na memória é igual a %d\n", numero); //IMPRIME O ENDEREÇO DA VARIÁVEL DO MAIN
		*numero = *numero + 10; //3) ADICIONA 10 À VARIÁVEL DO MAIN
		
		
	}
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int valor;
		
		printf("Digite um valor: ");
		scanf("%d", &valor);
		aumentadez(&valor); //1) ENVIANDO O ENDEREÇO DA VARIÁVEL 
		printf("O valor é %d\n", valor); //4) IMPRIME O VALOR DIGITADO ACRESCENTADO A 10 //ISSO É POSSÍVEL PORQUE MANIPULAMOS DIRETAMENTE A VARIÁVEL NO SEU ENDEREÇO
		
		system("pause");
		return 0;
	}
