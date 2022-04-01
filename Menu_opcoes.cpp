# include <iostream>

void menu(){
	cout << " 1) Login ";
	cout << " 2) Cadastrar-se ";
	cin >> op;
	if(op == 2){
		cadastrarvendedor();
	}
	else if( op == 1){
		loginvendedor();
	}
	
void menu_opcao(){
	cout << " 1) Cadastrar Produto";
	cout << " 2) Visualizar Estoque";
	cout << " 3) Pesquisar Produto";
	cout << " 4) Remover Produto";
	cout << " 5) Alterar Qtd. de produtos no Estoque";
	cout << " 0) Sair";
	cin >> op;
	if(op == 1){
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> ; 
		switch(){
			case 1: {
				bool inserirCordas(Cordas);
				cout << " 1) Cadastrar novo produto";
				cout << " 2) Menu incial";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Cadastro
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case 2:{
				bool inserirPercussao(Percussao);
				switch(){
					case 1:{
						// Menu de Cadastro
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
				
			}
			case default:{
				cout << " Opção inválida.";
			}
		}
	}
	
	else if (op == 2){
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cout << " 3) Geral";
		cin >> ;
		switch(){
			case 1: {
				imprimeCordas();
				cout << " 1) Visualizar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Impressão
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case 2: {
				imprimePercussao();
				cout << " 1) Visualizar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Impressão
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case 3: {
                imprimePercussao();
				imprimeCordas();
				cout << " 1) Visualizar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Impressão
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}	
			}
			case default: {
				cout << " Opção inválida.";
			}
		}
	}
	else if(op == 3){
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> ;
		switch(){
			case 1: {
				bool pesquisarCordas(string);
				cout << " 1) Pesquisar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Pesquisa
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case 2: {
				bool pesquisarPercussao(string);
				cout << " 1) Pesquisar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Pesquisa
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case default : {
				cout << " Opção inválida.";
			}
		}	
	}
	else if (op == 4){
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> ;
		switch (){
			case 1:{
				bool removerCordas(string);
				cout << " 1) Remover novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Remoção
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case 2:{
				bool removerPercussao(string);
				cout << " 1) Remover novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Remoção
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
			}
			case default : {
				cout << " Opção inválida.";
			}
		}	
	}
	
	else if(op == 5){
		cout << " 1) Cordas";
		cout << " 2) Percussao";
		cin >> ;
		switch(){
			case 1: {
				cout << " 1) Adicionar";
				cout << " 2) Subtrair";
				cin >> opc;
				if (opc == 1){
					bool set_EntradaEstoqueCordas(string);
				cout << " 1) Alterar novo produto";
				cout << " 2) Menu principal";
				cin >> ;
				switch(){
					case 1:{
						// Menu de Alteração
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
				}
				else if (opc == 2){
					bool set_SaidaEstoqueCordas(string);
					cout << " 1) Alterar novo produto";
					cout << " 2) Menu principal";
					cin >> ;
				switch(){
					case 1:{
						// Menu de Alteração
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
				}
				else if (opc > 2  || opc < 1){
					cout << "Opção inválida.";
				}	
			}
			case 2: {
				cout << " 1) Adicionar";
				cout << " 2) Subtrair";
				cin >> opc;
				if (opc == 1){
					bool set_EntradaEstoquePercussao(string);
					cout << " 1) Alterar novo produto";
					cout << " 2) Menu principal";
					cin >> ;
				switch(){
					case 1:{
						// Menu de Alteração
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
				}
				else if (opc == 2){
					bool set_SaidaEstoquePercussao(string);
					cout << " 1) Alterar novo produto";
					cout << " 2) Menu principal";
				   	cin >> ;
				switch(){
					case 1:{
						// Menu de Alteração
					}
					case 2: {
						menu_opcao();
					}
					case default: {
						cout << " Opção inválida."
					}
				}
				}
				else if (opc > 2  || opc < 1){
					cout << "Opção inválida.";
				}	
			}
			case default:{
				cout << " Opção inválida.";
			}
		}
	}
	
	else if (op == 0){
		break;
	}
	
}
	
}