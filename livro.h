#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <vector>
#include "DATE1.h"
#include "autor.h"

using namespace std;

class Livro{
	
		public:
			Livro();
			void setTitulo(string);
			string getTitulo();
			void setIsbn(int);
			int getIsbn();
			void setAutores(vector<Autor>);
			vector<Autor> getAutores() const;
			void setVolume(int);
			int getVolume();
			void setDatapublic(CDate);
			CDate getDatapublic();
			void setPreco(double);
			double getPreco();
			void setStock(int);
			int getStock();
			virtual void insereDadosLivro();
			virtual void printLivro();  //nao funcionava com ostream &
			
		protected:
			string titulo;
			int isbn;
			vector <Autor> autores;
			int volume;
			CDate datapublic;
			double preco;
			int stock;
			
};

#endif
