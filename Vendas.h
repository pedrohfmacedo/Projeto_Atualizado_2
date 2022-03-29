# ifndef VENDAS_H
# define VENDAS_H

#include "Cordas.h"
#include "Percussao.h"
#include "Estoque.h"


// Declaração da classe
class Vendas : public Estoque{
	private:
		 // Declaração das vectors
		vector<Cordas>Lista_Cordas; 
		vector<Percussao>Lista_Percussao;
		float faturamento;
    	float saldo;
		
    public:
    	Vendas(); // Construtor
    	~Vendas(); // Destrutor
    	void inserirVendasCordas(Cordas);
    	void inserirVendasPercussao(Percussao);
    	void registro_vendas(void);
    	void set_faturamento(float);
    	float get_faturamento(void) const;	
    	void set_Saldo(float);
    	float get_Saldo(void) const;
		void Limpar_carrinho(); // 
    	
};

# endif
/*UFCG - CCEI - ENGENHARIA ELETRICA 2020.2
TECNICAS DE PROGRAMACAO 
PROFESSOR: MARCUS SALERNO
GRUPO: David Emanuel Albuquerque dos Santos- Turma 02
José Vanilson de Brito Júnior - Turma 01
Lameque Dias de Oliveira - Turma 01
Pedro Henrique Fernandes Macêdo -  Turma 02
Felipe Faustino do Nascimento- Turma 02
Monitora:Ravânia Luciano Martildes
PROJETO: LOJA DE INSTRUMENTOS MUSIDOM 
DESCRIÇÃO: O programa deve realizar diversas funções entre eles, o cadastro de 
produto, de cliente, e vendedores, gerenciar o estoque da loja, realizar pedidos
 */