#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	void Funcao_limpartela(){
    	system("CLS"); //LIMPA A TELA DE EXECUÇÃO
    	
	}
	
	int main(){
		
		int valor;
		
		printf("Digite um valor: ");
		scanf("%d", valor);
	
		Funcao_limpartela();
		
		printf("O valor digitado foi %d \n Fim do programa!", valor);
		
		system("pause");
		return 0;
		
	}
