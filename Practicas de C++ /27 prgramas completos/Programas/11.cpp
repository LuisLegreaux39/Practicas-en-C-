#include<iostream>
#include<windows.h>
using namespace std;
int tomarint();
bool validar(string);

/**
Funciones para evaluar
Funcion de exception y repeticion para que el programa no se colapse
*/

int tomarint(){
string numero;
bool esValido=false;
while(!esValido){
    try{
    cout<<"\t\t*************************************"<<endl;
    cout<<"\t\tIngrese un la letra correcta :"<<endl;
    getline(cin,numero);
    esValido=validar(numero);
    if(! esValido) throw numero;
    }catch(string e){
    MessageBox(NULL,"El caracter no es valido","Fatal error on:Numero",MB_OK);
    system("cls");
    }
}
return atoi(numero.c_str());
}
//************************
bool validar(string numero){
	int inicio=0;
if(numero.length()==0 ) return 0;

if( !(numero[0]=='a' || numero[0]=='e' || numero[0]=='i' || numero[0]=='o' || numero[0]=='u')  ){
	return 0;
}
if( !(numero[1]==NULL || numero[1]==NULL)  ){
	return 0;
}
if(numero[0]=='+' || numero[0]=='-'|| numero[0]=='+' || numero[0]=='/' ){
    inicio=1;
    if(numero.length()==1){
        return 0;
    }
}
for(int i=0;i<numero.length();i++){
    if(isdigit(numero[i]=NULL ))
        return 0;
}
return 1;
}
int main(){
	cout<<"\t\t********************************************"<<endl;
	cout<<"\t\t introdusca los caracteres S o N"<<endl;	
	char letra;
	letra=tomarint();
	cout<<"Es correcto"<<endl;
	system("Pause");

}
