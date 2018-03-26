#ifndef LIVRO_ESC_H
#define LIVRO_ESC_H
#include<iostream>
#include"livro.h"
using namespace std;


class LivroEscolar: public Livro{
	
	public:
		virtual void insereDadosLivro();
		virtual void printLivro();  //nao funcionava com ostream &
		void setAno_escolar(int);
		int getAno_escolar();
		void setDisciplina(string);
		string getDisciplina();
	private:
		int ano_escolar;
		string disciplina;
};

#endif
