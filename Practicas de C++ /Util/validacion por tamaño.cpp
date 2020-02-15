#include <iostream>
#include <sstream>
 
using namespace std;
 
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
 
int main()
{
	bool isok=true;
	do{
	stringstream stream;
   string aux;
   int valor;
   cin >> aux;
   stream <<aux;
   switch(ToInt(stream,valor)){
      case 0:
         cout<<"El valor es: "<<valor<<endl;
         isok=true;
         break;
      case 1:
         cout<<"1"<<endl;
         isok=0;
         break;
      case 2:
         cout<<"Formato incorrecto"<<endl;
         isok=0;
         break;
   }
   }while(!isok);
		

   return 0;
}

//---------------------------------------------------------------------------
 
 
