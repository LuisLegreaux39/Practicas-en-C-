#include <iostream>
#include <sstream>
#include<windows.h>
#include <stdio.h>
#include <ctype.h>
//funciones***************
 int tomarint();
//****************
using namespace std;
 //funiones para validar
 enum ConvertError
{
  NoError,
  Overflow,
  WrongFormat
};
//---------------------------------------------------------------------------
 
ConvertError ToInt( std::istream& stream, int& value )
{
  ConvertError toReturn = NoError;
 
  bool negate = false;
  bool firstChar = true;
  value = 0;
  bool nextIteration = true;
  do
  {
    char c = stream.peek();
	
    if( c == EOF )
      nextIteration = false;
    else
    {
      stream.get(); // discard from the stream
 
      if( c==' ' || c=='\n' || c=='\r' || c=='\t' )
        nextIteration = false;
      else if( isdigit(c) )
      {
        int newValue = value*10+c-'0';
        if( newValue < value )
        {
          nextIteration = false;
          toReturn = Overflow;
        }
        value = newValue;
      }
      else
      {
        if( (c != '-' && c != '+') || !firstChar )
        {
          nextIteration = false;
          toReturn = WrongFormat;
        }
        else
          negate = (c=='-');
      }
    }
    firstChar = false;
  } while(nextIteration);
 
  if( negate )
    value *= -1;
 
  return toReturn;
}
//---------------------------------------------------------------------------

 int tomar(){
 	 int valor,resultado;
	do{
	stringstream stream;
   string aux;
   	cout<<"introdusca un numero"<<endl;
   getline(cin,aux);
   int nume= atoi(aux.c_str());
 if(!aux.length()==0){
 	stream <<aux;
   resultado =ToInt(stream,valor);
 } else{
 	resultado ==1;
 }


	}while(resultado!=0);
	 system("cls");
  return valor;
 }

//programa que diga que tipo de triangulo es segun sus lados

int main(){
	int a,b,c;
	cout<<"Ingresa el 1er lado del triangulo"<<endl;
	a=tomar();
	while (a==0) {
		cout<<"Ingresar un valor mayor que cero"<<endl;
		a=tomar();
	}
	cout<<"Ingresa el 2do lado del triangulo"<<endl;
	b=tomar();
	while (b==0) {
		cout<<"Ingresar un valor mayor que cero"<<endl;
		b=tomar();
	}
	cout<<"Ingresa el 3er lado del triangulo"<<endl;
	c=tomar();
	while (c==0) {
		cout<<"Ingresar un valor mayor que cero"<<endl;
		c=tomar();
	}
	
	if (a!=b && a!=c && b!=c){
		cout<<"El triangulo es escaleno"<<endl;
	} else {
		if (a==b && a==c && b==c) {
			cout<<"El triangulo es equilatero"<<endl;
		} else {
			cout<<"El triangulo es isoceles"<<endl;
		}
	}
	system("Pause");
}
