#include "DATE1.h"

CDate::CDate(int dia, int mes, int ano){
	day=dia;
	month=mes;
	year=ano;
}
CDate::~CDate(){}

void CDate::print() const{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

void CDate::setDate(int d,int m,int a){
	if(m>=1 && m<=12)
		month=m;
	
	if( (d>=1) && ( d<=checkDay() ))
		day=d;
	
	if(a>=1970)
	year=a;
}
int CDate::checkDay(){
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			return 31;
		else if (month==4 || month==6 || month==9 || month==11)
			return 30;
		else if (month==2){
			if((year/4==0 && year/100!=0) || year/400==0)
			return 29;
			else 
			return 28;
		}
}

bool CDate::operator== (const CDate& rhs){
	return (day==rhs.day && month==rhs.month && year==rhs.year);
}

ostream& operator<< (ostream& os, CDate &d){
 os << d.day << '/' << d.month << '/' << d.year;  
    return os;  
}

//CDate& CDate::operator++( )  
//{  
    
//}
