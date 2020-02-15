#include <iostream>
#include <sstream>
#include<windows.h>
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
   cin >> aux;
   stream <<aux;
   resultado =ToInt(stream,valor);
  
	}while(resultado!=0);
	 system("cls");
  return valor;
 }
//********************************************************
int main(void){
	double i=0,mayor=0,menor=0,num1=0,cantidad=0;
	cout<<"ingrese la cantidad de numeros a comparar"<<endl;
	cantidad=tomar();
for(i=0;i<cantidad;i++){
		cout<<"ingrese el numero"<<endl;
		num1=tomar();
		if(i==0){
		mayor = num1;
		menor = num1;}

		if(num1>mayor)mayor=num1;
		if(num1<menor)menor=num1;
	}
	
	cout<<"el numero menor es "<<menor<<" el numero mayor es "<<mayor<<endl;
	system("Pause");
	}
	
