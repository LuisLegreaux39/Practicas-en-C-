#include<iostream>
using namespace std;
#include <iostream>
#include <sstream>
#include<windows.h>
#include<sstream>
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
 //*******************************************************
int main(void){
	cout<<"introdusca 3 numeros en orden ascendente"<<endl;
	int num1=0,num2=0,num3=0;
	num1=tomar();
	num2=tomar();
	num3=tomar();
	if(num1<num2){
		if(num2<num3){
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
			cout<<"orden ascendente"<<endl;
		}else {
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
		cout<<"no estan en orden ascendente"<<endl;
	}
	} 
	else{
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
			cout<<"no estan en orden ascendente"<<endl;
	}
	system("Pause");
}
