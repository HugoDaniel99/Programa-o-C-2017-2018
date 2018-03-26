#include"livro.h"

Livro::Livro(){}

void Livro::setTitulo(string title){
	titulo=title;
}
string Livro::getTitulo(){
	return titulo;
}
void Livro::setIsbn(int num){
	isbn=num;
}
int Livro::getIsbn(){
	return isbn;
}
void Livro::setAutores(vector<Autor> z){
	autores=z;
}
vector <Autor> Livro::getAutores() const{
	return autores;
}
void Livro::setVolume(int vol){
	volume=vol;
}
int Livro::getVolume(){
	return volume;
}
void Livro::setDatapublic(CDate x){
	datapublic=x;
}
CDate Livro::getDatapublic(){
	return datapublic;
}
void Livro::setPreco(double price){
	preco=price;
}
double Livro::getPreco(){
	return preco;
}
void Livro::setStock(int stck){
	stock=stck;
}
int Livro::getStock(){
	return stock;
}
	void Livro::insereDadosLivro(){
	string title,autor,city,country;
	int num,numautor,vol,stck,numautores,dia,mes,ano,diaaut,mesaut,anoaut;
	double price;
	Autor a1;
	CDate q;
	
	
		cout<<"Introduza o titulo do livro (sem espacos): "<<endl; //nao da para introduzir espaços(n sei porque)
		cin>>title;
		titulo=title;
		
		cout<<"Introduza o numero de ISBN: "<<endl;
		cin>>num;
		isbn=num;
		
		cout<<"Quantos autores tem o livro? "<<endl;
		cin>>numautores;
		do{
		cout<<"Introduza o nome de um autor (sem espacos): "<<endl;
		cin>>autor;
		cout<<"\nDia: ";
		cin>>diaaut;
		cout<<"Mes: ";
		cin>>mesaut;
		cout<<"Ano: ";
		cin>>anoaut;
		q.setDate(diaaut,mesaut,anoaut);
		cout<<"Introduza a cidade do autor: "<<endl;
		cin>>city;
		cout<<"Introduza o pais do autor: "<<endl;
		cin>>country;
		a1.setAutorID(autor,q,city,country);
		autores.push_back(a1);
		}while(autores.size()<numautores);
		
		cout<<"Introduza o volume do livro: "<<endl;
		cin>>vol;
		volume=vol;
		
		cout<<"Dia: ";
		cin>>dia;
		cout<<"Mes: ";
		cin>>mes;
		cout<<"Ano: ";
		cin>>ano;
	 	datapublic.setDate(dia,mes,ano);
	
		cout<<"Introduza o preco do livro: "<<endl;
		cin>>price;
		preco=price;
		
		cout<<"Introduza a quantidade de livros em stock: "<<endl;
		cin>>stck;
		stock=stck;
}

    void Livro::printLivro(){
	cout<<"\nTitulo:"<<titulo<<endl<<"Autores:";
	for(int i=0;i<autores.size();i++){
	cout<<autores[i]<< " ";
	}
	cout<<endl<<"Volume:"<<volume<<endl<<"Data de publicacao:"<<datapublic<<endl<<"Preco:"<<preco<<endl<<"Stock:"<<stock<<endl;
	
}
