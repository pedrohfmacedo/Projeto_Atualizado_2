#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
	private:
		string nome;
		string cor;
		string codigo;
		float precoVenda;
		float precoFabrica;
		int quantidade;
		
    public:
	//Construtor e destrutor
		Produto ( string = "", string = "", string = "", float = 0.0, float = 0.0, int = 0);
		~Produto();
		//m�todos para atribui��o (set) e retorno (get) de dados.
		void set_nome(string);
		string get_nome() const;
		void set_cor(string);
		string get_cor() const;
		void set_codigo(string);
		string get_codigo() const;
		void set_precoVenda(float);
		float get_precoVenda() const;
		void set_precoFabrica(float);
		float get_precoFabrica() const;
		int get_quantidade() const;
		void set_quantidade(int);
		void imprime();
};
#endif

/*UFCG - CCEI - ENGENHARIA ELETRICA 2020.2
TECNICAS DE PROGRAMACAO 
PROFESSOR: MARCUS SALERNO
GRUPO: David Emanuel Albuquerque dos Santos- Turma 02
Jos� Vanilson de Brito J�nior - Turma 01
Lameque Dias de Oliveira - Turma 01
Pedro Henrique Fernandes Mac�do -  Turma 02
Felipe Faustino do Nascimento- Turma 02
Monitora:Rav�nia Luciano Martildes
PROJETO: LOJA DE INSTRUMENTOS MUSIDOM 
DESCRI��O: O programa deve realizar diversas fun��es entre eles, o cadastro de 
produto, de cliente, e vendedores, gerenciar o estoque da loja, realizar pedidos
 */
