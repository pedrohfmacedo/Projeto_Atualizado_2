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
#include "Vendedor.cpp"
#include "Cliente.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");	
	
	Estoque Musidom;
	Vendedor Musidom_v;
	
	int opcao, seleciona, qtd, cordas;
	string color, code,name, type, codigo_selecionado;
	float valor_f, valor_v;
	
	string nome_v, cpf_v;
	int chave_v;
	int senha = 0;

do	
{
	cout << " 1) Login ";
	cout << " 2) Cadastrar-se ";
		 cin >> opcao;
		 
		 if(opcao == 1){
			system("cls");
			while(senha!=1) {

			 cout << "Digite a chave de acesso: ";
			 cin >> chave_v;
			 
			 if(Musidom_v.verifica_login(chave_v)){
				 cout << "Usuário autorizado" << endl;
				 senha = 1;
			}
			 else{
				 cout << "Vendedor não encontrado, tente novamente"<<endl; 
			}
			}
		}
		 else if(opcao==2){
				system("cls");
				
			 	cout << "Digite o nome do novo vendedor: ";
				cin >> nome_v;
				cout << " Digite o cpf do vendedor: ";
				cin >> cpf_v;
				cout << " Cadastre a chave de acesso desse vendedor: ";
				cin >> chave_v;
				Vendedor novo(nome_v, cpf_v, chave_v);
				
				if(novo.cadastrar_vendedor(novo)){
					cout << "VENDEDOR CADASTRADO COM SUCESSO!" << endl << endl;
				}
				else{
					cout << "VENDEDOR JÁ CADASTRADO" << endl<<endl;
				}
		}
     	 else {
			cout << "Opcção Inválida, tente novamente" << endl;
	  	    }	
} while(senha != 1);

do
{
    cout<<endl;
	menu_de_opcao()
	cin >> opcao;
	
		if(opcao == 1)
		{
			cout << "Digite qual tipo de instrumento deseja cadastrar: "<<endl;
			cout << " 1) Cordas";
			cout << " 2) Percussao";
			cin >> seleciona;
			
				if(seleciona == 1){
					
				   	cout << "-----CADASTRO DE INSTRUMENTOS DE CORDAS-----" << endl << endl;
					cout << "Nome do instrumento: ";
					cin >> name;
			   	   	cout << "Cor: ";
					cin >> color;
					cout << "Quantidade de cordas do instrumento: ";
			   	   	cin >> cordas;
			   	   	cout << "Código: ";
			   	   	cin >> code;
			   	   	cout << "Valor do instrumento: ";
			   	   	cin >> valor_v;
			   	   	cout << "Valor da fábrica  " ;
			   	   	cin >> valor_f;
			   	   	cout << "Quantidade  " ;
			   	   	cin >> qtd;
			   	   	cout<<endl;
					Cordas cord(name, color, code, valor_v, valor_f, qtd, cordas);
					
					if(MUSIDOM.inserirCordas(cord)){
						cout << "INSTRUMENTO CADASTRADO COM SUCESSO!" << endl<<endl;
					 	MUSIDOM.salvarCordas();
			   	   	}
					else
					{
						cout << "INSTRUMENTO JÁ CADASTRADO" << endl<<endl;
                    }				  								
				}
				else if(seleciona == 2){
					cout << "-----CADASTRO DE INSTRUMENTOS DE PERCUSSAO-----" << endl << endl;
			   	   	cout << "Nome do instrumento: ";
			   	   	cin >> name;
			   	   	cout << "COR: ";
					cin >> color;
					cout << "Tipo: ";
					cin >> type;
					cout << "Codigo do produto: " ;
					cin >> code;
					cout << "Preço a ser vendido ";
					cin >> valor_v;
					cout << "Preço da Fábrica : ";
				   	cin >> valor_f;
					cout << "Quantidade " ;
				    cin >> qtd;
					cout<<endl;
					Percussao perc(name, color, code, valor_v, valor_f, qtd, type);
			
					if(MUSIDOM.inserirPercussao(perc)){
		    		   	   cout << "INSTRUMENTO CADASTRADO COM SUCESSO!" << endl<<endl;
                           MUSIDOM.salvarPercussao();			
					}
				}
				else
				{
					cout << "Opcção Inválida, tente novamente!" << endl<<endl;
				}
				
		}
		else if(opcao == 2)
		{
			cout << "Digite qual os instrumentos deseja visualizar o estoque: "<<endl;
			cout << " 1) Cordas";
			cout << " 2) Percussao";
			cout << " 3) Geral";
			cin >> seleciona;
			
				if(seleciona == 1){
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();			  								
				}
				else if(seleciona == 2){
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else if(seleciona == 3){
					cout << "-------- TODOS OS INSTRUMENTOS -------- " << endl << endl;
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();			  	
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
				
		}
		else if(opcao == 3){
			cout << "Digite qual o tipo de instrumentos deseja visualizar o estoque: "<<endl;
			cout << " 1) Cordas";
			cout << " 2) Percussao";
			cout << " 3) Geral";
			cin >> seleciona;
			
				if(seleciona == 1){
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();			  								
				}
				else if(seleciona == 2){
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else if(seleciona == 3){
					cout << "-------- TODOS OS INSTRUMENTOS -------- " << endl << endl;
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();			  	
					cout << "-------- CORDAS -------- " << endl << endl;
					MUSIDOM.imprimeCordas();
				}
				else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
				
		}
		else if(opcao ==4 ){
			cout << "Digite qual a secção de instrumentos que você deseja excluir do estoque: "<<endl;
			cout << " 1) Cordas";
			cout << " 2) Percussao";
			cin >> seleciona;
			
			if(seleciona == 1){
				cout << "-------- CORDA -------- " << endl << endl;

				MUSIDOM.imprimeCordas();
				cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
				cin >> seleciona;
				
				if (MUSIDOM.removerCordas(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}						  								
			}
			else if(seleciona == 2){
					cout << "-------- PERCUSSAO -------- " << endl << endl;
					MUSIDOM.imprimePercussao();
					cout << "DIGITE O CÓDGIO DO PRODUTO PARA REMOÇÃO" << endl;
					cin >> seleciona;
					
				if (MUSIDOM.removerPercussao(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto não dispoível! "<<endl;
				}		
				}
			else
				{
					cout << "Opcção Inválida, tente novamente" << endl << endl;
				}
		}
		else if(opcao == 5){
		cout << "Digite qual a secção de instrumentos que você deseja atualizar a quantidade dno estoque: "<<endl;
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> seleciona;
		switch(seleciona){
			case 1: {
				cout << " 1) Adicionar";
				cout << " 2) Subtrair";
				cin >> opcao;
				if (opcao == 1){
					MUSIDOM.imprimeCordas();
					cout << "Selecione o código do produto que deseja aumentar a quantidade "<< endl;
					cin >> codigo_selecionado;
					cout << "Digite a quantidade: ";
					ci >> qtd;
					MUSIDOM.set_EntradaEstoqueCordas(codigo_selecionado, qtd);
					cout<<"QUANTIDADE ATUALIZADA "<<endl;
				}
				else if(opcao == 2){
					MUSIDOM.imprimeCordas();
					cout << "Selecione o código do produto que deseja subtrair a quantidade "<< endl;
					cin >> codigo_selecionado;
					cout << "Digite a quantidade: ";
					cin >> qtd;
					MUSIDOM.set_SaidaEstoqueCordas(codigo_selecionado, qtd);
					cout << "QUANTIDADE ATUALIZADA " << endl;					
				}
				else {
					cout << " Opção inválida."
				}
			}
			case 2: {
				cout << " 1) Adicionar";
				cout << " 2) Subtrair";
				cin >> opcao;
				if (opcao == 1){
					MUSIDOM.imprimePercussao();
					cout << "Selecione o código do produto que deseja aumentar a quantidade "<< endl;
					cin >> codigo_selecionado;
					cout << "Digite a quantidade: ";
					ci >> qtd;
					MUSIDOM.set_EntradaEstoquePercussao(codigo_selecionado, qtd);
					cout << "QUANTIDADE ATUALIZADA " << endl;
					break;
				}
				else if(opcao == 2){
					MUSIDOM.imprimePercussao();
					cout << "Selecione o código do produto que deseja subtrair a quantidade "<< endl;
					cin >> codigo_selecionado;
					cout << "Digite a quantidade: ";
					cin >> qtd;
					MUSIDOM.set_SaidaEstoquePercussao(codigo_selecionado, qtd);
					cout << "QUANTIDADE ATUALIZADA " << endl;
					break;			
				}
				else {
					cout << " Opção inválida."
				}
			case default:{
				cout << " Opção inválida.";
			}
			}
		}
}
		else{
			cout << " Opção inválida.";
		}
	
} while(seleciona !=0);

	return 0;
}

void menu_de_opcao(){
	cout << " 1) Cadastrar Produto";
	cout << " 2) Visualizar Estoque";
	cout << " 3) Pesquisar Produto";
	cout << " 4) Remover Produto";
	cout << " 5) Atualizar Qtd. de produtos no Estoque";
	cout << " 0) Sair";
}
