#include <iostream>
#include <sstream>
#include<windows.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

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
 if(!aux.length()==0 ){
 	stream <<aux;
   resultado =ToInt(stream,valor);
 } else{
 	resultado ==1;
 }


	}while(resultado!=0);
	 system("cls");
  return valor;
 }
 //------------------------------------------------------------------------------------------------
 
void eva(int par){
		if(par%2==0){
		cout<<par<<"este numero es par"<<endl; 
		}else{	cout<<par<<"este numero no es par"<<endl;	}

}

int main(){
	int num1=0,num2=0;
	cout<<"introdusca Dos numeros para saber si son pares "<<endl;
	num1=tomar();
	num2=tomar();
	eva(num1);
	eva(num2);
	system("Pause");
}
