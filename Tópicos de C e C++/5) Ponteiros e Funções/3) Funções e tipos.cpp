#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


   
    
    //FUNÇÕES SÃO CHAMADAS PARA EXECUTAR TAREFAS ESPECIFICAS, PODENDO OU NÃO RETORNAR ALGO PARA A FUNÇÃO PRINCIPAL
    //A FUNÇÃO PRINCIPAL É O PRÓPRIO MAIN, QUE POR SER INT, RETORNA UM INTEIRO, QUE NADA MAIS É DO QUE O RETURN 0 QUE SEMPRE ESCREVEMOS NO FINAL DO PROGRAMA
    //OBS: AS VARIÁVEIS DECLARADAS E MANIPULADAS DENTRO DE UMA FUNÇÃO NÃO TEM LIGAÇÃO COM AS VARIÁVEIS DE OUTRAS FUNÇÕES //VARIÁVEL A DA FUNÇÃO X E A VARIÁVEL A DA FUNÇÃO Y SÃO DIFERENTES
    
    void Funcao_sem_retorno(){
    	printf("Está é a funcao void, e por ser void, significa que não possui retorno algum para a funcao principal.\n");
    	
	}
	
	int Funcao_com_retorno_int(){
		int a;
		printf("\nEsta é a funcao int, e por ser int, significa que retorna um valor inteiro para a funcao principal\n");
		printf("Digite um valor qualquer, do tipo inteiro: ");
		scanf("%d", &a);
		return a;
	}
	
	char Funcao_com_retorno_char(){
		char a;
		printf("\nEsta é a funcao char, e por ser char, significa que retorna uma letra para a funcao principal\n");
		printf("Digite uma letra: ");
		scanf(" %c", &a);
		getchar(); //limpar o buffer 
		return a;
	}
	
	bool Funcao_com_retorno_bool(){
		bool a;
		printf("\nEsta é a funcao booleana, e por ser booleana, significa que retorna um booleano para a funcao principal.\n");
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
		retorno1 = Funcao_com_retorno_int(); //ESTOU CHAMANDO A FUNÇÃO E DIZENDO QUE SEU RETORNO SERÁ ARMAZENADO NA VARIÁVEL RETORNO1
		printf("\nFUNÇÃO MAIN: A primeira função com retorno, do tipo inteira, retornou o valor inteiro %d\n", retorno1);
		retorno2 = Funcao_com_retorno_char(); //ESTOU CHAMANDO A FUNÇÃO E DIZENDO QUE SEU RETORNO SERÁ ARMAZENADO NA VARIÁVEL RETORNO2
		printf("\nFUNÇÃO MAIN: A segunda função com retorno, do tipo char, retornou a letra  %c\n", retorno2);
		retorno3 = Funcao_com_retorno_bool(); //ESTOU CHAMANDO A FUNÇÃO E DIZENDO QUE SEU RETORNO SERÁ ARMAZENADO NA VARIÁVEL RETORNO3
		if(retorno3){
			printf("\nFUNÇÃO MAIN: A terceira função com retorno, do tipo booleana, é TRUE ou %d\n", retorno3);
		}
		else{
			printf("\nFUNÇÃO MAIN: A terceira função com retorno, do tipo booleana, é FALSE ou %d\n", retorno3);
		}
		
		system("pause");
		return 0;
	}
