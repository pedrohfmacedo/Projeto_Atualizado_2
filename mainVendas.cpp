# include <iostream>
# include <iomanip>
# include <vector>
# include <locale>
# include <cmath>

using namespace std;

# include "Vendas.cpp"
# include "Produto.cpp"
# include "Cordas.cpp"
# include "Percussao.cpp"
# include "Estoque.cpp"

int main(){
	
	setlocale(LC_ALL, "Portuguse" );
	Vendas v;
	float saldo = 2000.00, faturamento = 1000.00;
	
	cout<<"============================================================ " << endl
		<<"              MAIN DE TESTE - CLASS VENDAS"					<< endl
		<<"============================================================ "<< endl << endl;
	

	cout << "REGISTRO DE VENDAS: " << endl;
	v.registro_vendas();
	cout << "FATURAMENTO: " << endl ;
	v.set_faturamento(faturamento);
	cout << v.get_faturamento();
	cout << endl;	
	cout << "SALDO: " << endl;
	v.set_Saldo(saldo);
	cout << v.get_Saldo();

	
	
	return 0;
}
