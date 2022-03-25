#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

#include "Produto.cpp"
#include "Percussao.cpp"

int main(){
    setlocale(LC_ALL, "Portuguese");

	cout<<"============================================================"<<endl
		<<"             MAIN DE TESTE - CLASS PERCUSSAO"				<<endl
		<<"============================================================"<<endl<<endl;
		
	Percussao percussao_aux("Pandeiro", "vermelho", "P01443", 200, 125, 7, "Membranofone");
	percussao_aux.imprime_percussao();

    return 0;
}
