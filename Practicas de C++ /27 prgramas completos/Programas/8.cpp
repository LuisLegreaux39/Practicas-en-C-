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
  	cin>>aux;
  	if(cin.fail()) cin.ignore(); resultado=1;
   stream <<aux;
   resultado =ToInt(stream,valor);
	}while(resultado!=0);
	 system("cls");
  return valor;
 }
int main(){
	cout<<"\t\t*******************************"<<endl;
	cout<<"\tprograma para saber cuando un numero es negativo o positivo que no sea 0"<<endl;
	cout<<"\t\t*******************************"<<endl;
	int a=0;
	a=tomar();
	if(a>0){
			cout<<"el numero "<<a<<" es positivo"<<endl;
	}else{
		
			cout<<"el numero "<<a<<" es negativo"<<endl;
	}

	
system("Pause");	
	
}
 
