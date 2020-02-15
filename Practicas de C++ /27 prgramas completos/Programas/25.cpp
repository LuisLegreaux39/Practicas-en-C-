//aplicacion  que lea un importe neto y si es mayor de 25000 le aplique 16% impuesto
//en caso contrario un 10%

#include <iostream>
#include <windows.h>
#include <string>
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
    cout<<"\t\t\tIngrese el importe"<<endl;
    cout<<"\t\t\tIngrese un numero :"<<endl;
    getline(cin,numero);
    esValido=validar(numero);
    if(! esValido) throw numero;
    }catch(string e){
    MessageBox(NULL,"El numero no es valido","Fatal error on:Numero",MB_OK);
    system("cls");
    }
}
return atoi(numero.c_str());
}
//************************
bool validar(string numero){
int inicio=0;
int numero3 =atoi(numero.c_str());
if(numero.length()==0 ) return 0;
if(numero3<0)return 0;
if(numero[0]=='+' || numero[0]=='-'|| numero[0]=='+' || numero[0]=='/' ){
    inicio=1;
    if(numero.length()==1){
        return 0;
    }
}

for(int i=0;i<numero.length();i++){
    if(! isdigit(numero[i]))
        return 0;
}
return 1;
}
//----------------------------------------------------------------------------------
int main (){
	int a,b,c;
	cout<<"Aplicacion que lea un importe bruto y calcule su importe neto, si es mayor de 25,000 se le aplicara un 16% de impuestos, en caso contrario se le aplicara un 10%."<<endl;
	a=tomarint();
	if (a>=25000) {
		b=a*0.16;
		c=a+b;
	} else {
		b=a*0.1;
		c=a+b;
	}
	cout<<"El precio neto es: "<<a<<endl;
	cout<<"El Impuesto a incluir es: "<<b<<endl;
	cout<<"El precio total es: "<<c;
	system("Pause");
}
