#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	
		void sucessor_do_valor(int lalala){ //2) A FUN��O RECEBE A C�PIA DO VALOR ENVIADO DO MAIN // POR SER UMA C�PIA, A VARI�VEL VALOR DO MAIN E DESTA FUN��O, N�O TEM RELA��O DIRETA //LALALA AGORA VALE O VALOR DA VAR VALOR
			printf("\nValor recebido na primeira fun��o.....valor %d..\n", lalala); //E COMO DITO NO PONTO 1), ESTA VARI�VEL RECEBE APENAS O VALOR CONTIDO, PODENDO PORTANTO TER QUALQUER DENOMINA��O
			printf("\nO sucessor do valor %d � o valor %d\n", lalala, lalala + 1);
				
		}
		
		int antecessor_do_valor(int lololo){
			printf("\nValor recebido na segunda fun��o.....valor %d....\n", lololo);
			return lololo - 1;
			
		}
		void soma_dos_valores(int valor1, int valor2){
			printf("\nA soma do valor %d com o valor %d � igual a %d\n", valor1, valor2, valor1 + valor2);
		}
		
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int valor, valor2, numero[10], i;
		int retorno1, retorno2, retorno3;
		
		
		printf("\nDigite um valor inteiro: ");
		scanf("%d", valor);
		sucessor_do_valor(valor); //1) O VALOR CONTIDO NA VARI�VEL VALOR � COPIADO E ENVIADO PARA A FUN��O
		retorno1 = antecessor_do_valor(valor); //RETORNO RECEBE O RETORNO DA FUN��O INT
		printf("\nO antecessor do valor � %d\n", retorno1);
		printf("\nDigite um segundo valor: ");
		scanf("%d", valor2);
		printf("\nSegundo valor recebido...%d\n", valor2);
		soma_dos_valores(valor, valor2);
		
		
		
	
		
		
		
		system("pause");
		return 0;
		
	
	}
