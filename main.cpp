#include "livro.h"
#include "livro_esc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Livro l1;
	LivroEscolar le1;
	
	cout<<"Dados Livro normal: \n\n";
	l1.insereDadosLivro();
	l1.printLivro();
	cout<<"\nDados Livro Escolar: \n\n";
	le1.insereDadosLivro();
	le1.printLivro();
	return 0;
}
