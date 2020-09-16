#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


   
    
    //FUN��ES S�O CHAMADAS PARA EXECUTAR TAREFAS ESPECIFICAS, PODENDO OU N�O RETORNAR ALGO PARA A FUN��O PRINCIPAL
    //A FUN��O PRINCIPAL � O PR�PRIO MAIN, QUE POR SER INT, RETORNA UM INTEIRO, QUE NADA MAIS � DO QUE O RETURN 0 QUE SEMPRE ESCREVEMOS NO FINAL DO PROGRAMA
    //OBS: AS VARI�VEIS DECLARADAS E MANIPULADAS DENTRO DE UMA FUN��O N�O TEM LIGA��O COM AS VARI�VEIS DE OUTRAS FUN��ES //VARI�VEL A DA FUN��O X E A VARI�VEL A DA FUN��O Y S�O DIFERENTES
    
    void Funcao_sem_retorno(){
    	printf("Est� � a funcao void, e por ser void, significa que n�o possui retorno algum para a funcao principal.\n");
    	
	}
	
	int Funcao_com_retorno_int(){
		int a;
		printf("\nEsta � a funcao int, e por ser int, significa que retorna um valor inteiro para a funcao principal\n");
		printf("Digite um valor qualquer, do tipo inteiro: ");
		scanf("%d", &a);
		return a;
	}
	
	char Funcao_com_retorno_char(){
		char a;
		printf("\nEsta � a funcao char, e por ser char, significa que retorna uma letra para a funcao principal\n");
		printf("Digite uma letra: ");
		scanf(" %c", &a);
		getchar(); //limpar o buffer 
		return a;
	}
	
	bool Funcao_com_retorno_bool(){
		bool a;
		printf("\nEsta � a funcao booleana, e por ser booleana, significa que retorna um booleano para a funcao principal.\n");
		//printf("\nDigite 1 ou 0: ");
		//scanf("%d", &a);
		return true;
	
	}
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int retorno1;
		char retorno2;
		bool retorno3;
		
		Funcao_sem_retorno();
		retorno1 = Funcao_com_retorno_int(); //ESTOU CHAMANDO A FUN��O E DIZENDO QUE SEU RETORNO SER� ARMAZENADO NA VARI�VEL RETORNO1
		printf("\nFUN��O MAIN: A primeira fun��o com retorno, do tipo inteira, retornou o valor inteiro %d\n", retorno1);
		retorno2 = Funcao_com_retorno_char(); //ESTOU CHAMANDO A FUN��O E DIZENDO QUE SEU RETORNO SER� ARMAZENADO NA VARI�VEL RETORNO2
		printf("\nFUN��O MAIN: A segunda fun��o com retorno, do tipo char, retornou a letra  %c\n", retorno2);
		retorno3 = Funcao_com_retorno_bool(); //ESTOU CHAMANDO A FUN��O E DIZENDO QUE SEU RETORNO SER� ARMAZENADO NA VARI�VEL RETORNO3
		if(retorno3){
			printf("\nFUN��O MAIN: A terceira fun��o com retorno, do tipo booleana, � TRUE ou %d\n", retorno3);
		}
		else{
			printf("\nFUN��O MAIN: A terceira fun��o com retorno, do tipo booleana, � FALSE ou %d\n", retorno3);
		}
		
		system("pause");
		return 0;
	}
