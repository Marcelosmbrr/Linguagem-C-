#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//LEMBRANDO: *PONTEIRO = VALOR ARMAZENADO NO ENDERE�O //PONTEIRO = ENDERE�O DA POSI��O;
	//UTILIZANDO PONTEIROS PARA APONTAR PARA VARI�VEIS DO MAIN, TORNA DESNECESS�RIO A UTILIZA��O DE RETORNOS

	void aumentadez(int *numero){ //2) PONTEIRO RECEBE O ENDERE�O DA VARI�VEL //AGORA ESSE PONTEIRO APONTA PARA A VARI�VEL DO MAIN, OU SEJA, MODIFICA��ES FEITAS NESTA FUN��O AFETAM DIRETAMENTE A VARI�VEL DO MAIN
		printf("O valor alocado no endere�o de mem�ria da vari�vel � igual a %d\n", *numero); //IMPRIME O VALOR CONTIDO NA VARI�VEL DO MAIN
		printf("O endere�o da vari�vel na mem�ria � igual a %d\n", numero); //IMPRIME O ENDERE�O DA VARI�VEL DO MAIN
		*numero = *numero + 10; //3) ADICIONA 10 � VARI�VEL DO MAIN
		
		
	}
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int valor;
		
		printf("Digite um valor: ");
		scanf("%d", &valor);
		aumentadez(&valor); //1) ENVIANDO O ENDERE�O DA VARI�VEL 
		printf("O valor � %d\n", valor); //4) IMPRIME O VALOR DIGITADO ACRESCENTADO A 10 //ISSO � POSS�VEL PORQUE MANIPULAMOS DIRETAMENTE A VARI�VEL NO SEU ENDERE�O
		
		system("pause");
		return 0;
	}
