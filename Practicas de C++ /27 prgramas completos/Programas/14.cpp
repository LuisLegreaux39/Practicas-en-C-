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
int main(void){
	int num1=0,num2=0,num3=0;
	cout<<"introdusca 3 numeros para saber si el 3ro es la suma de los dos primeros"<<endl;
	num1=tomar();
	num2=tomar();
	num3=tomar();
	if(num3==(num2+num1)){
		cout<<num3<<" esta es la suma ="<<num2<<" + "<<num1<<endl;
	}else {
		cout<<num3<<"esta no es la suma de ningun numero"<<endl;
	}
	system("Pause");
	}
