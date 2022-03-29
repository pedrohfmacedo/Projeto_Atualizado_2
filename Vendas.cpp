# include "Vendas.h"
# include "Cordas.h"
# include "Percussao.h"
# include "Estoque.h"
# include "Vendas.h"

# include <iomanip>
# include <fstream>

Vendas::Vendas(){
	float f;
	
    ifstream arquivo;
    arquivo.open("faturamento.txt");
    arquivo >> f;
    this -> faturamento  = f;
    arquivo.close();
    
    ifstream arquivo2;
    arquivo2.open("saldo.txt");
    arquivo2 >> f;
    this -> saldo = f;
    arquivo2.close();
}
Vendas::~Vendas(){
	{
	ofstream arquivo;
	arquivo.open("faturamento.txt", std::ofstream::out | std::ofstream::trunc);
	if (arquivo.is_open())
	{
		arquivo << (this -> faturamento);
		arquivo.close();
	}
	else cout << "Não foi possível abrir o arquivo.";
	
	ofstream arquivo2;
	arquivo2.open("saldo.txt", std::ofstream::out | std::ofstream::trunc);
	if (arquivo2.is_open())
	{
		arquivo2 << (this -> saldo);
		arquivo2.close();
	}
	else cout << "Não foi possível abrir o arquivo.";
}
}

void Vendas::inserirVendasCordas(Cordas aux){
	Lista_Cordas.push_back(aux);
}

void Vendas::inserirVendasPercussao(Percussao aux){
	Lista_Percussao.push_back(aux);
}

void Vendas::registro_vendas(){
		cout << fixed << setprecision(2);
		
		ofstream arquivo;
		arquivo.open ("Vendas.txt", std::ofstream::out | std::ofstream::app);
		if (arquivo.is_open())
		{
			arquivo << "=== Vendas ===" <<endl<<endl;
			for(unsigned i(0); i < Lista_Cordas.size(); i++)
			{
				arquivo << "Nome do Produto: " << Lista_Cordas[i].get_nome();
				arquivo << "Preço do Produto: R$" << Lista_Cordas[i].get_precoVenda();
				arquivo << "Códico de Barras: " << Lista_Cordas[i].get_codigo();
			}
			for(unsigned i(0); i < Lista_Percussao.size(); i++)
			{
				arquivo << "Nome do Produto: " << Lista_Percussao[i].get_nome();
				arquivo << "Preço do Produto: R$" << Lista_Percussao[i].get_precoVenda();
				arquivo << "Códico de Barras: " << Lista_Percussao[i].get_codigo() << endl;
			}
			arquivo << endl;
			arquivo.close();
		}
		else cout << "Não foi possível abrir o arquivo.";

		for(unsigned i(0); i < Lista_Percussao.size(); i++)
		{
			set_Saldo(Lista_Cordas[i].get_precoVenda());
			set_faturamento(Lista_Cordas[i].get_precoVenda() - Lista_Cordas[i].get_precoFabrica());
		}
		for(unsigned i(0); i < Lista_Percussao.size(); i++)
		{
			set_Saldo(Lista_Percussao[i].get_precoVenda());
			set_faturamento(Lista_Percussao[i].get_precoVenda() - Lista_Percussao[i].get_precoFabrica());
		}
			
}

void Vendas::set_faturamento(float faturamento){
	this-> faturamento += (faturamento>0)?faturamento:0;
}

float Vendas::get_faturamento(void)const{
	return faturamento;
}
	
void Vendas::set_Saldo(float saldo){
	this->saldo += (saldo>0)?saldo:0; 
}

float Vendas::get_Saldo(void)const{
	return saldo;
}

void Vendas::Limpar_carrinho(){
	Lista_Cordas.clear();
	Lista_Percussao.clear();
}

