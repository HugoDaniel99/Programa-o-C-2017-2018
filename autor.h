#ifndef AUTOR_H
#define AUTOR_H
#include "DATE1.h"
#include <string>
using namespace std;

class Autor{
	
	public:
		void setAutorID(string ,CDate ,string ,string );
		void setNomeaut(string);
		string getNomeaut();
		void setDatanasci(CDate);
		CDate getDatanasci() const;
		void setCidade(string);
		string getCidade() const;
		void setPais(string);
		string getPais() const;
		friend ostream& operator<< (ostream& os , Autor &a);
		
	private:
		string nomeaut;
		CDate datanasci;
		string cidade;
		string pais;
};

#endif
