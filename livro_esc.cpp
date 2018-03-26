#include "livro_esc.h"

void LivroEscolar::setAno_escolar(int ae){
	ano_escolar=ae;
}
int LivroEscolar::getAno_escolar(){
	return ano_escolar;
}

void LivroEscolar::setDisciplina(string uc){
	disciplina=uc;
}
string LivroEscolar::getDisciplina(){
	return disciplina;
}
	void LivroEscolar::insereDadosLivro(){
	string title,autor,uc,city,country;
	int num,numautor,vol,stck,numautores,dia,mes,ano,ae,diaaut,mesaut,anoaut;
	double price;
	Autor a1;
	CDate q;
	
	
		cout<<"Introduza o titulo do livro (sem espacos): "<<endl;
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
		
		cout<<"Introduza o preco do livro: "<<endl;
		cin>>price;
		preco=price;
		
		cout<<"Introduza a quantidade de livros em stock: "<<endl;
		cin>>stck;
		stock=stck;
		while(ae<1 || ae>12){
			
		cout<<"Introduza o ano escolar do livro: "<<endl;
		cin>>ae;
		if(ae<1 || ae>12)
		{
		cout<<"Ano Escolar invalido\n";
		}
		else
		ano_escolar=ae;
		}
	
		
		cout<<"Introduza a disciplina: "<<endl;
		cin>>uc;
		disciplina=uc;
}

    void LivroEscolar::printLivro(){
	cout<<"\nTitulo:"<<titulo<<endl<<"Autores:";
	for(int i=0;i<autores.size();i++){
	cout<<autores[i]<< " ";
	}
	cout<<endl<<"Volume:"<<volume<<endl<<"Data de publicacao:"<<datapublic<<endl<<"Preco:"<<preco<<endl<<"Stock:"<<stock<<endl<<"Ano escolar:"<<ano_escolar<<endl<<"Disciplina:"<<disciplina<<endl;
	
}
