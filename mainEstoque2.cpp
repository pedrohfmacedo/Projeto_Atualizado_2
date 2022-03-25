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
	
	 Estoque MUSIDOM;
	 Percussao perc("Flauta","preto","124",123.00, 100.00, 2, "sei");
	 Cordas cord("Violao", "preto", "123", 123.00, 100.00, 2, 5);

 	 MUSIDOM.inserirCordas(cord);
	 MUSIDOM.inserirPercussao(perc);
	 MUSIDOM.get_ListaPercussao();
	 MUSIDOM.get_ListaCordas();
	 MUSIDOM.removerPercussao("120");
	 MUSIDOM.get_ListaPercussao();
	 MUSIDOM.removerPercussao("125");
	 MUSIDOM.get_ListaCordas();
	 MUSIDOM.pesquisarPercussao("0");
	 MUSIDOM.pesquisarCordas("123");
	 MUSIDOM.salvarPercussao();
	 MUSIDOM.salvarCordas();
	 
	 
}
