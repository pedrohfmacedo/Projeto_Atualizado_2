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

int main(){
	int opcao, qtd, cordas;
	string color, code,name, type, seleciona;
	float valor_f, valor_v;
	
do {	
	cout << "1)  CADASTRAR PRODUTO PERCUSSAO" << endl
	 << "2)  CADASTRAR PRODUTO CORDAS " << endl
	 << "3)  REMOVER PRODUTOS PERCUSSAO " << endl
	 << "4)  REMOVER PRODUTOS CORDAS" << endl
	 << "5)  MOSTRAR PRODUTOS PERCUSSAO" << endl
	 << "6)  MOSTRAR PRODUTOS CORDAS" << endl
	 << "7)  PESQUISAR PRODUTO PERCUSSAO" << endl
	 << "8)  PESQUISAR PRODUTO CORDAS" << endl
	 << "9)  ORGANIZAR SESSAO DE PERCUSSAO" << endl
	 << "10) ORGANIZAR SESSAO DE CORDAS" << endl
	 << "11) ACRESCENTAR QUANTIDADE (PERCUSSAO) " <<endl
	 << "12) ACRESCENTAR QUANTIDADE (CORDAS): " <<endl
	 << "13) TIRAR QUANTIDADE (PERCUSSAO)" <<endl
	 << "14) TIRAR QUANTIDADE (CORDAS): " <<endl
	 << "15) ENCERRAR PROGRAMA: " <<endl;
	cout<<"Digite a op�ao desejeda: ";
	cin>>opcao;
	 Estoque MUSIDOM;
	switch(opcao)
	{
	case 1:
	{
			cout << "CADASTRE PRODUTO PERCUSSAO" << endl << endl;
			cout << "NOME : ";
			cin >> name;
			cout << "COR: ";
			cin >> color;
			cout << "Pre�o da F�brica : ";
			cin >> valor_f;
			cout << "Pre�o a ser vendido ";
			cin >> valor_v;
			cout << "Quantidade " ;
			cin >> qtd;
			cout << "Tipo: ";
			cin >> type;
			cout << "Codigo do produto: " ;
			cin >> code;
			cout<<endl;
			
			Percussao perc(name, color, code, valor_v, valor_f, qtd, type);
			MUSIDOM.inserirPercussao(perc);
			cout << "PRODUTO CADASTRADO COM SUCESSO!" <<endl << endl;
			break;
	}
		
	case 2:
	{
			cout << "CADASTRE PRODUTO PERCUSSAO" << endl << endl;
			cout << "NOME : ";
			cin >> name;
			cout << "COR: ";
			cin >> color;
			cout << "Pre�o da F�brica : ";
			cin >> valor_f;
			cout << "Pre�o a ser vendido ";
			cin >> valor_v;
			cout << "Quantidade " ;
			cin >> qtd;
			cout << "Quantidade de cordas: ";
			cin >> type;
			cout << "Codigo do produto: " ;
			cin >> code;
			
			cout<<endl;
			Cordas cord(name, color, code, valor_v, valor_f, qtd, cordas);
			MUSIDOM.inserirCordas(cord);
			cout << "PRODUTO CADASTRADO COM SUCESSO!" <<endl;
			break;
	}
	case 3:{
			cout << "-------- PERCUSSAO -------- " << endl << endl;

				MUSIDOM.imprimePercussao();
				cout << "DIGITE O C�DGIO DO PRODUTO PARA REMO��O" << endl;
				cin >> seleciona;
				if (MUSIDOM.removerPercussao(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto n�o dispo�vel! "<<endl;
				}		
			break;
	}
	case 4:
	{
			cout << "-------- CORDA -------- " << endl << endl;

				MUSIDOM.imprimeCordas();
				cout << "DIGITE O C�DGIO DO PRODUTO PARA REMO��O" << endl;
				cin >> seleciona;
				if (MUSIDOM.removerCordas(seleciona)){
					cout << "REMOVIDO!" << endl<< endl;
				}
				else{
					cout<< "Produto n�o dispo�vel! "<<endl;
				}			
		break;
	}
	case 5:
	{
			cout << "-------- PERCUSSAO -------- " << endl << endl;
			MUSIDOM.imprimePercussao();	
			break;
	}
	case 6:
	{
			cout << "-------- CORDAS -------- " << endl << endl;
			MUSIDOM.imprimeCordas();
			break;
	}
	case 7:
	{
		
	
		cout << "-------- PERCUSSAO -------- " << endl << endl;
		cout << "DIGITE O C�DGIO DO PRODUTO PARA PESQUISAR" << endl;
		cin >> seleciona;
		 	if (MUSIDOM.pesquisarPercussao(seleciona)){
				cout << "PRODUTO DISPON�VEL!" << endl<< endl;
				cout << "PRODUTO NA POSI��O "<< MUSIDOM.get_indicePercussao(seleciona);
				}
			else{
				cout<< "Produto n�o encontrado! "<<endl;
				}		
			break;
	}
	case 8:
	{
		
		cout << "-------- CORDAS -------- " << endl << endl;
		cout << "DIGITE O C�DGIO DO PRODUTO PARA PESQUISAR" << endl;
		cin >> seleciona;
		 	if (MUSIDOM.pesquisarCordas(seleciona)){
				cout << "PRODUTO ENCONTRADO" << endl<< endl;
				cout << "PRODUTO NA POSI��O "<< MUSIDOM.get_indicePercussao(seleciona);
				}
			else{
				cout<< "Produto n�o encontrado! "<<endl;
				}		
			break;
	}
	case 9:
	{
		MUSIDOM.ordenaPercussao();
		cout<<"Produtos ordenados alfabeticamente"<<endl<<endl;
		break;
	}
	case 10:
	{	
		MUSIDOM.ordenaCordas();
		cout<<"Produtos ordenados alfabeticamente"<<endl<<endl;
		break;
	}
	case 11: 
	{
		MUSIDOM.imprimePercussao();
		cout<<"SELECIONA C�DIGO DE PRODUTO PARA ACRESCENTAR "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE DESEJADA: ";
		cin>>qtd;
		MUSIDOM.set_EntradaEstoquePercussao(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	}
	case 12: 
	{
		
		MUSIDOM.imprimeCordas();
		cout<<"SELECIONA C�DIGO DE PRODUTO PARA ACRESCENTAR "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin>>qtd;
		MUSIDOM.set_EntradaEstoqueCordas(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	}
    case 13:
	{
		MUSIDOM.imprimePercussao();
		cout<<"SELECIONA C�DIGO DE PRODUTO PARA SUBTRAIR QUANTIDADE DE PRODUTOS "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin>>qtd;
		MUSIDOM.set_SaidaEstoquePercussao(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	}
	case 14:
	{
		MUSIDOM.imprimeCordas();
		cout<<"SELECIONA C�DIGO DE PRODUTO PARA SUBTRAIR QUANTIDADE DE PRODUTOS "<<endl;
		cin>>seleciona;
		cout<<"DIGITE QUANTIDADE: ";
		cin>>qtd;
		MUSIDOM.set_SaidaEstoqueCordas(seleciona, qtd);
		cout<<"QUANTIDADE ATUALIZADA "<<endl;
		break;
	}
	default:{
		cout << "Op��o inv�lida, tente novamente" << endl;
		break;
	}
	
	}
} while(opcao!=15);

return 0;
}