#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

#include "Produto.cpp"
#include "Cordas.cpp"
#include "Percussao.cpp"
#include "Estoque.cpp"


void menu_opcao();
void menu_cadastro();
void menu_impressao();
void menu_pesquisa();
void menu_remocao();
void menu_alteracao();


int main(){
	stelocale(LC_ALL, "Portuguese");
	
	
	
	
	return 0;
}


void menu_opcao(){
	
	int op;
	
	cout << " 1) Cadastrar Produto" << endl
		 << " 2) Visualizar Estoque" << endl
		 << " 3) Pesquisar Produto" << endl
		 << " 4) Remover Produto" << end
		 << " 5) Alterar Qtd. de produtos no Estoque" << endl
		 << " 0) Sair" << endl;
	cin >> op;
	if(op == 1)
		menu_cadastro();

	else if (op == 2){
		menu_impressao();
	}
	
	else if(op == 3){
		menu_pesquisa();	
	}
	
	else if (op == 4){
		menu_remocao();	
	}
	
	else if(op == 5){
		menu_alteracao();
	}
	
	else if (op == 0){
		break;
	}
	
}


void menu_opcao(){
}


void menu_cadastro(){
	int opc, s_opc;
			
	do{
		cout << " 1) Cordas" << endl
			 << " 2) Percussao" << endl
			 << " 3) Menu Inicial" << endl;
		cin >> opc; 
				
		switch(opc){
			case 1: {
				bool inserirCordas(Cordas);
						
				do{
					cout << " 1) Cadastrar novo produto";
					cout << " 2) Menu incial";
					cin >> s_opc;
							
					switch(s_opc){
						case 1:{
							menu_cadastro();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}
			
			case 2:{
				bool inserirPercussao(Percussao);
				
				do{
					cout << " 1) Cadastrar novo produto";
					cout << " 2) Menu incial";
					cin >> s_opc;
							
					switch(s_opc){
						case 1:{
							menu_cadastro();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;
				}while(s_opc !=1 || s_opc!=2);
				
				break;	
			}	
		}
			
		cout << " Opção inválida!" << endl << endl;

	}while(opc!=1 || opc!=2);
}


void menu_impressao(){
	int opc, s_opc;

	do{
		cout << " 1) Cordas"
			 << " 2) Percussao"
			 << " 3) Geral";
		cin >> opc;
		
		switch(opc){
			case 1: {
				imprimeCordas();
				
				do{
					cout << " 1) Visualizar outra Catedoria"
						 << " 2) Menu principal";
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_impressao();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
			
				break;
			}
			
			case 2: {
				imprimePercussao();
				
				do{
					cout << " 1) Visualizar outra Categoria"
						 << " 2) Menu principal";
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_impressao();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}
			
			case 3: {
	        	imprimePercussao();
				imprimeCordas();
				
				do{
					cout << " 1) Visualizar outra Categoria";
					cout << " 2) Menu principal";
					cin >> s_op;
					switch(s_opc){
						case 1:{
							menu_impressao();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}			
		}
		
		cout << " Opção inválida!" << endl << endl;

	}while(opc!=1 || opc!=2);
}


void menu_pesquisa(){
	int opc, s_opc;

	do{
		cout << " 1) Cordas" << endl
			 << " 2) Percussao" << endl;
		cin >> opc;
		
		switch(opc){
			case 1: {
				bool pesquisarCordas(string);
				
				do{
					cout << " 1) Pesquisar novo produto" << endl
						 << " 2) Menu principal" << endl;
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_pesquisa()
						}
						case 2:{
							menu_opcao();
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
			
				break;
			}
			
			case 2: {
				bool pesquisarPercussao(string);
				
				do{
					cout << " 1) Pesquisar novo produto" << endl
						 << " 2) Menu principal" << endl;
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_pesquisa();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}				
					cout << " Opção inválida!" << endl << endl;			
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}
		}
		
		cout << " Opção inválida!" << endl << endl;	
			
	}while(opc!=1 || opc!=2);
}


void menu_remocao(){
	int opc, s_opc;

	do{
		cout << " 1) Cordas"
			 << " 2) Percussao";
		cin >> opc;
		
		switch (opc){
			case 1:{
				bool removerCordas(string);
				
				do{
					cout << " 1) Remover novo produto"
						 << " 2) Menu principal";
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_remocao();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}
			
			case 2:{
				bool removerPercussao(string);
				
				do{
					cout << " 1) Remover novo produto"
						 << " 2) Menu principal";
					cin >> s_opc;
					
					switch(s_opc){
						case 1:{
							menu_remocao();
							break;
						}
						case 2: {
							menu_opcao();
							break;
						}
					}
					cout << " Opção inválida!" << endl << endl;					
				}while(s_opc !=1 || s_opc!=2);
				
				break;
			}
		}
		
		cout << " Opção inválida!" << endl << endl;
				
	}while(opc!=1 || opc!=2);	
}


void menu_alteracao(){
	int op, opc, s_opc;

	do{
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> op;
		
		switch(op){
			case 1:{								
				do{
					cout << " 1) Adicionar";
					cout << " 2) Subtrair";
					cin >> opc;
						
						if (opc == 1){
							bool set_EntradaEstoqueCordas(string);
							
							do{
								cout << " 1) Alterar novo produto";
								cout << " 2) Menu principal";
								cin >> s_opc;
								
								switch(s_opc){
									case 1:{
										menu_alteracao();
										break;
									}
									case 2: {
										menu_opcao();
										break;
									}								
								}
								cout << " Opção inválida!" << endl << endl;	
							}while(s_opc!=1 || s_opc!=2);
						}
					
					else if (opc == 2){
						bool set_SaidaEstoqueCordas(string);
						
						do{
							cout << " 1) Alterar novo produto";
							cout << " 2) Menu principal";
							cin >> s_opc;
							
							switch(s_opc){
								case 1:{
									menu_alteracao();
									break;
								}
								case 2: {
									menu_opcao();
									break;
								}
							}
							cout << " Opção inválida!" << endl << endl;
						}while(s_opc!=1 || s_opc!=2);
					}
					
					else if (opc > 2  || opc < 1)
						cout << " Opção inválida!" << endl << endl;
						
				}while(opc > 2  || opc < 1);
				
				break;
			}
				
			case 2: {
				do{
					cout << " 1) Adicionar";
					cout << " 2) Subtrair";
					cin >> opc;
					
						if (opc == 1){
							bool set_EntradaEstoquePercussao(string);
							
							do{
								cout << " 1) Alterar novo produto";
								cout << " 2) Menu principal";
								cin >> s_opc;
								
								switch(s_opc){
									case 1:{
										menu_alteracao();
										break;
									}
									case 2: {
										menu_opcao();
										break;
									}
								}
								
								cout << " Opção inválida!" << endl << endl;								
							}while(s_opc!=1 || s_opc!=2);
						}
						
						else if (opc == 2){
							bool set_SaidaEstoquePercussao(string);
							
							do{
								cout << " 1) Alterar novo produto";
								cout << " 2) Menu principal";
							  	cin >> s_opc;
							  	
								switch(s_opc){
									case 1:{
										menu_alteracao();
										break:
									}
									case 2: {
										menu_opcao();
										break;
									}
								}
								
								cout << " Opção inválida!" << endl << endl;								
							}while(s_opc!=1 || s_opc!=2);
						}
						
						else if (opc > 2  || opc < 1)
								cout << "Opção inválida.";
					
				}while(opc > 2  || opc < 1);
				
				break;
			}
		}		
	}while(op!=1 || op!=2);
}





