#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cordas.h"
#include "Percussao.h"

class Estoque
{   // Definindo vectors
	vector <Cordas> Lista_Cordas;
	vector <Percussao> Lista_Percussao;
	// Método para ler produto
	void lerCordas();
	void lerPercurssao();

public:
	Estoque();
	~Estoque();
    // Método para inserir produto
    bool inserirPercussao(Percussao);
    bool inserirCordas(Cordas);

    // Método para remover produto
    bool removerPercussao(string); 
    bool removerCordas(string);

    // Métodos para pesquisar produto
    bool pesquisarPercussao(string) ; 
    bool pesquisarCordas(string) ;

    // Método para salvar produto
    void salvarPercussao();					
    void salvarCordas();

	bool set_SaidaEstoquePercussao(string, int);
	bool set_EntradaEstoquePercussao(string, int);
	bool set_SaidaEstoqueCordas(string,  int);
	bool set_EntradaEstoqueCordas(string, int);

	// Método para imprimir produto
	void imprimePercussao(); //
	void imprimeCordas();

	// Método para ordenar produto
    void ordenaPercussao(); //
    void ordenaCordas();
    
	int get_indicePercussao(string) const; //
	int get_indiceCordas(string) const;
	
};
#endif
