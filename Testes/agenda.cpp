#include <iostream>
#include <locale.h>
#include <string>
#include <ctype.h>
		
using namespace std;

class Agenda {
	
	public:
	string tabela[100][9]; 
	int contador_registro; //CADA LINHA DA TABELA
	Agenda(){ this->contador_registro = 0; } //CONSTRUCTOR //CONTADOR DE REGISTRO RECEBE 0
	
	//M�TODO PARA CADASTRO DE REGISTROS
	int INSERT(){
		
		cout << "........... Carregando sistema de cadastro de pessoas ...........\n";
		
		string resposta;
		string nome, email, enderec, tel, dia, mes, ano, obsv;
		
		//Do while para confirmar o cadastro
		//O cadastro � refeito se o usu�rio inserir o valor "R" ou "r"
		//A l�gica, ent�o, �: Fa�a{ cadastro }Enquanto(usu�rio digitar "R" ou "r")
		do{
			
			tabela[contador_registro][0] = to_string(contador_registro + 1); //ID DO REGISTRO //ID COME�A EM 1
			cout << "Informe o nome completo da pessoa (em min�sculo):";
    		getline(cin,nome);
    		tabela[contador_registro][1] = nome;
    		
			cout << "\nInforme o e-mail da pessoa:";
    		getline(cin, email);
    		tabela[contador_registro][2] = email;
    		
			cout << "\nInforme o endere�o da pessoa (em min�sculo):";
    		getline(cin, enderec);
    		tabela[contador_registro][3] = enderec;
    		
			cout << "\nInforme o telefone da pessoa (Ex: 53900000000):";
    		getline(cin, tel);
    		tabela[contador_registro][4] = tel;
    		
			cout << "\nInforme o dia de nascimento da pessoa:"; 
    		getline(cin, dia); 
    		tabela[contador_registro][5] = dia;
    		
			cout << "\nInforme o m�s de nascimento da pessoa:"; 
    		getline(cin, mes); 
    		tabela[contador_registro][6] = mes;
    		
			cout << "\nInforme o ano de nascimento da pessoa (Ex: 1998):"; 
    		getline(cin, ano);
    		tabela[contador_registro][7] = ano;
    		
			cout << "\nInforme alguma observa��o adicional (em min�sculo):";
    		getline(cin, obsv);
    		tabela[contador_registro][8] = obsv;
			
			cout << "\nConfira os dados do cadastro: " << "\n";
			cout << "\n | Nome: " << tabela[0][1];
			cout << "\n | E-mail: " << tabela[0][2];
			cout << "\n | Endere�o: " << tabela[0][3];
			cout << "\n | Telefone: " << tabela[0][4];
			cout << "\n | Data de nascimento: " << tabela[0][5] << "/" << tabela[0][6] << "/" << tabela[0][7];
			cout << "\n | Observa��o: " << tabela[0][8];
			
			cout << "\nConfirmar cadastro? Digite C para confirmar, R para refazer, e S para cancelar: ";
			getline(cin, resposta);
			
		}while(resposta == "R" || resposta == "r");
		
		if(resposta == "C"){
			
			contador_registro++; //AUTO_INCREMENT //LIBERA O MECANISMO DE BUSCA DO MENU (CONDI��O: > 0)
			return 1; //RETORNA "TRUE"
			
		}else if(resposta == "S"){
			
			//NESSE CASO O CONTADOR N�O � INCREMENTADO EM UM
			//ENT�O MESMO QUE A TABELA TENHA OS DADOS, O PROGRAMA N�O DISPONIBILIZA O MECANISMO DE PROCURA POR REGISTROS
			
			return 0; //RETORNA "FALSE"
			
		}
			
	}
	
	//M�TODO PARA PESQUISA DE REGISTROS
	int SELECT(string op){
		
		cout << "........... Carregando sistema de pesquisa de pessoas ...........\n";
		cout << "........... Registros encontrados: " << this->contador_registro << " ...........\n";
		
		string continuar; //Decis�o de perman�ncia ou sa�da do usu�rio do sistema de busca
		string pnome, pdia, pmes;
		
		if(op == "TODOS"){
			
			for(int linha = 0; linha < contador_registro; linha++){
				
				if(tabela[linha][0] != "NULL"){
					
					cout << "============== REGISTRO DA LINHA N�:" << linha+1 << " ===============================\n";
					
						cout << "\n|ID:" << tabela[linha][0] << "|Nome:" << tabela[linha][1] << "|Email:" << tabela[linha][2] << "|Endere�o:" << tabela[linha][3] << "|Telefone:" << tabela[linha][4] 
						<< "|Nascimento:" << tabela[linha][5] << "/" << tabela[linha][6] << "/" << tabela[linha][7] << "|Observa��o:" << tabela[linha][8]; 
						
					cout << "\n======================================================================================\n\n";
					
				}
										
			}//fim for linha
		
		}else if(op == "ESPEC"){
			
			string pesquisa_escolhida; //Para armazenar a escolha de pesquisa do usu�rio
				
				do{
					
					cout << "Para pesquisar por primeiro nome digite N.\n";
					cout << "Para pesquisar por m�s de anivers�rio digite M.\n";
					cout << "Para pesquisar por dia e m�s de anivers�rio digite DM.\n";
					cout << "A��o:";
					getline(cin, pesquisa_escolhida);
					
					//CASO POR NOME
					if(pesquisa_escolhida == "N" || pesquisa_escolhida == "n"){
						
						cout << "Digite o nome da pessoa em letra min�scula: ";
						getline(cin, pnome);
						
						if(pnome != "NULL"){
							
							cout << "\nRegistros encontrados =====\n";
							for(int linha = 0; linha <= contador_registro; linha++){ //PERCORRE AS LINHAS DA TABELA
							
								//SE A COLUNA, DO REGISTRO ATUAL, TIVER UM NOME IGUAL AO DIGITADO PELO USU�RIO
								if(tabela[linha][1] == pnome){ 
									
									//IMPRIME O REGISTRO ATUAL
									cout << "\n --> ID:" << tabela[linha][0] << "|Nome:" << tabela[linha][1] << "|Email:" << tabela[linha][2] << "|Endere�o:" << tabela[linha][3] << "|Telefone:" << tabela[linha][4] 
									<< "|Nascimento:" << tabela[linha][5] << "/" << tabela[linha][6] << "/" << tabela[linha][7] << "|Observa��o:" << tabela[linha][8]; 
											
								}
							}
							
						}else{
							cout << "\nErro! Voltando para o menu do sistema";
							return 0;
						}
					
					//CASO POR M�S
					}else if(pesquisa_escolhida == "M" || pesquisa_escolhida == "m"){
						
						cout << "Digite o m�s de anivers�rio da pessoa: ";
						getline(cin, pmes);
						
						if(pmes != "NULL"){
						
							cout << "\nRegistros encontrados ====\n";
							for(int linha = 0; linha <= contador_registro; linha++){
									
								//SE A COLUNA M�S, DO REGISTRO ATUAL, TIVER UM VALOR IGUAL AO DIGITADO PELO USU�RIO
								if(tabela[linha][6] == pmes){ 
									
									//IMPRIME O REGISTRO ATUAL
									cout << "\n --> ID:" << tabela[linha][0] << "|Nome:" << tabela[linha][1] << "|Email:" << tabela[linha][2] << "|Endere�o:" << tabela[linha][3] << "|Telefone:" << tabela[linha][4] 
									<< "|Nascimento:" << tabela[linha][5] << "/" << tabela[linha][6] << "/" << tabela[linha][7] << "|Observa��o:" << tabela[linha][8]; 
									
								}
								
							}
							
						}else{
							cout << "\nErro! Voltando para o menu do sistema";
							return 0;
						}
					
					//CASO POR M�S E DIA
					}else if(pesquisa_escolhida == "DM" || pesquisa_escolhida == "dm"){
						
						cout << "Digite o m�s e dia de anivers�rio da pessoa, respectivamente.\n";
						cout << "\nM�s: ";
						getline(cin, pmes);
						cout << "Dia: ";
						getline(cin, pdia);
						
						if(pmes != "NULL" && pdia != "NULL"){
					
							cout << "\nRegistros encontrados ====\n";
							for(int linha = 0; linha <= contador_registro; linha++){
													
								//SE A COLUNA M�S E DIA, DO REGISTRO ATUAL, TIVEREM VALORES IGUAIS AOS DIGITADOS PELO USU�RIO
								if(tabela[linha][5] == pdia && tabela[linha][6] == pmes){ 
									
									//IMPRIME O REGISTRO ATUAL
									cout << "\n --> ID:" << tabela[linha][0] << "|Nome:" << tabela[linha][1] << "|Email:" << tabela[linha][2] << "|Endere�o:" << tabela[linha][3] << "|Telefone:" << tabela[linha][4] 
									<< "|Nascimento:" << tabela[linha][5] << "/" << tabela[linha][6] << "/" << tabela[linha][7] << "|Observa��o:" << tabela[linha][8]; 
									
								}
							}
						
						}else{
							cout << "\nErro! Voltando para o menu do sistema";
							return 0;
						}
						
					}
					
					cout << "\n\nQuer continuar, e realizar uma nova pesquisa? Digite S para sim, e N para n�o: \n";
					getline(cin, continuar);
				
				}while(continuar == "S" || continuar == "s");
				
				//QUANDO FINALIZADA A PESQUISA, RETORNA 1 PARA O MAIN
				return 1;
			
		}//fecha pesquisa "espec"
			
	}//fecha m�todo select
	
	//M�TODO PARA DELETAR REGISTROS
	int DELETE(){
		
		cout << "........... Carregando sistema de remo��o de pessoas ...........\n";
		cout << "........... Registros encontrados: " << this->contador_registro << " ...........\n";
		
		string id;

		cout << "Digite o ID do registro que quer excluir:";
		getline(cin, id);
		
		//ESSA REMO��O � PROBLEM�TICA, PORQUE O ARRAY CONTINUA COM O REGISTRO, MAS COM VALORES 'NULL' 
		//PARA O USU�RIO PARECE UMA REMO��O, PORQUE A PESQUISA BUSCA VALORES DIFERENTES DE 'NULL'
		//ASSIM, OS REGISTROS REMOVIDOS, ISTO �, COM 'NULL', N�O APARECEM NA LISTAGEM
		
		for(int linha = 0; linha <= contador_registro; linha++){
			
			//SE O ID INFORMADO FOR IGUAL AO DO REGISTRO ATUAL
			if(tabela[linha][0] == id){
				
				//PERCORRE CADA COLUNA/CAMPO DO REGISTRO ATUAL
				for(int coluna = 0; coluna < 9; coluna++){
					
					//ATRIBUI O VALOR "NULL" PARA CADA CAMPO
					tabela[linha][coluna] = "NULL";
				}				
			}	
		}
		
		cout << "\nRemo��o realizada com sucesso!";	
		return 0;
				
	}
	
};

//IMPRESS�O DAS LINHAS DE PROCESSAMENTO
//MERAMENTE PARA FACILITAR A LEITURA DO FLUXO DO PROGRAMA DURANTE A EXECU��O
void processamentoAction(){
	
	for(int ponto = 0; ponto <= 5; ponto++){
		if(ponto == 3){
			cout << "Processando...\n";
		}
		cout << ".\n";
	}
}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
		
	Agenda ExecInst; //INST�NCIA DA CLASSE AGENDA // SE MANT�M ENQUANTO O PROGRAMA N�O FOR FINALIZADO, POR ISSO O NOME "EXECINST"
	string resposta; //VARI�VEL PARA GRAVAR A A��O DO USU�RIO NO MENU
	
	cout << "================================= Inicializa��o do sistema de agenda =================================\n";
	
	ExecInst.contador_registro = 0;
	cout << "Registros detectados: " << ExecInst.contador_registro << "\n"; 
	
	do{
		
		cout << "\n --> Para cadastrar uma nova pessoa digite C. \n";
		cout << " --> Para finalizar o programa digite F. \n";
		
		if(ExecInst.contador_registro > 0){	
			//ESSES S�O LIBERADOS NO MENU QUANDO O ATRIBUTO "CONTADOR_REGISTRO", DA CLASSE AGENDA, FOR MAIOR DO QUE ZERO
			cout << " --> Foram detectados " << ExecInst.contador_registro << " registros. Para realizar uma pesquisa espec�fica digite B1, e para listar todos os registros digite B2.\n";
			cout << "--> Para excluir um registro digite D. \n";
		}
		
		cout << "A��o: ";
		getline(cin, resposta);
		
		processamentoAction();
		if(resposta == "C" || resposta == "c"){
			
			if(ExecInst.INSERT()){
				ExecInst.contador_registro += 1;
				cout << "\nCadastro realizado com sucesso!\n";	
			}else{
				cout << "\nO cadastro foi cancelado!\n";
			}
			
		}else if(resposta == "B1" || resposta == "b1"){
			
			ExecInst.SELECT("ESPEC");
			
		}else if(resposta == "B2" || resposta == "b2"){
			
			ExecInst.SELECT("TODOS");
			
		}else if(resposta == "D" || resposta == "d"){
			
			ExecInst.DELETE();
			
		}
		
		else if((resposta != "C" && resposta != "c") && (resposta != "B" && resposta != "b") && (resposta != "D" && resposta != "d") && (resposta != "F" && resposta != "f")){
			//SE O USU�RIO DIGITAR UM VALOR DIFERENTE DOS QUE O DIRECIONAM PARA UM SEGMENTO DO SISTEMA

			cout << "Erro! Valor inv�lido!\n";
		}
		
	//O PROGRAMA CONTINUA RODANDO ENQUANTO O USU�RIO N�O DIGITAR F/f OU O CONTADOR DE REGISTROS FOR MENOS DO QUE 100
	}while(resposta != "F" && resposta != "f" && ExecInst.contador_registro < 100);
	
	//AQUI O USU�RIO SAIU DO SISTEMA, E ELE � FINALIZADO
	
	cout << "================================= Finaliza��o do sistema de agenda =================================\n";
	cout << "...........Cadastros realizados: " << ExecInst.contador_registro << "...........\n";
	
	system("pause");
	return 0;
	
}


