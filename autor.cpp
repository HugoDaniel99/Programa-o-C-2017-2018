#include "autor.h"

void Autor::setAutorID (string name,CDate date,string w,string nation){
	nomeaut=name;
	datanasci=date;
	cidade=w;
	pais=nation;
}

ostream& operator<< (ostream& os, Autor &a){
	
 os << a.nomeaut << ';' << a.datanasci << ';' << a.cidade<< ';'<<a.pais;
    return os;  
}

void Autor::setNomeaut(string name){
	nomeaut=name;
}
string Autor::getNomeaut(){
	return nomeaut;
}
void Autor::setDatanasci(CDate y){
	datanasci=y;
}
CDate Autor::getDatanasci() const{
	return datanasci;
}
void Autor::setCidade(string city){
	cidade=city;
}
string Autor::getCidade() const{
	return cidade;
}
void Autor::setPais(string country){
	pais=country;
}
string Autor::getPais() const{
	return pais;
}


