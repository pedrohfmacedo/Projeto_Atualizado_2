#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cordas.h"
#include "Percussao.h"

class Estoque
{   // Definindo vectors
	vector <Cordas> Lista_Cordas;
	vector <Percussao> Lista_Percussao;
	// M�todo para ler produto
	void lerCordas();
	void lerPercurssao();

public:
	Estoque();
	~Estoque();
    // M�todo para inserir produto
    bool inserirPercussao(Percussao);
    bool inserirCordas(Cordas);

    // M�todo para remover produto
    bool removerPercussao(string); 
    bool removerCordas(string);

    // M�todos para pesquisar produto
    bool pesquisarPercussao(string) ; 
    bool pesquisarCordas(string) ;

    // M�todo para salvar produto
    void salvarPercussao();					
    void salvarCordas();

	bool set_SaidaEstoquePercussao(string, int);
	bool set_EntradaEstoquePercussao(string, int);
	bool set_SaidaEstoqueCordas(string,  int);
	bool set_EntradaEstoqueCordas(string, int);

	// M�todo para imprimir produto
	void imprimePercussao(); //
	void imprimeCordas();

	// M�todo para ordenar produto
    void ordenaPercussao(); //
    void ordenaCordas();
    
	int get_indicePercussao(string) const; //
	int get_indiceCordas(string) const;
	
};
#endif
