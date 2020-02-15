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
 if(!aux.length()==0 and !isspace(nume)){
 	stream <<aux;
   resultado =ToInt(stream,valor);
 } else{
 	resultado ==1;
 }


	}while(resultado!=0);
	 system("cls");
  return valor;
 }
int main(void){
	int num1=0,num2=0,num3=0;
	
	cout<<"introdusca el numero 1"<<endl;
	num1=tomar();
	cout<<"introdusca el numero 2"<<endl;
	num2=tomar();
	cout<<"introdusca el numero 3"<<endl;
    num3=tomar();
	if(num1>num2){
	if(num2>num3){
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
			cout<<"Estan en order decencente"<<endl;
	}else{
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
			cout<<"NO estan en order decencente"<<endl;
		}
	}
		else{
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
		cout<<"NO estan en order decencente"<<endl;
	}	
	

system("Pause");
}
	

