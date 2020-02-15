//app que lea hora minuto y segundo y diga cual es la hora que sigue un segundo despues

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int tomarint();
bool validar(string);
//--------------------------
/**
Funciones para evaluar
Funcion de exception y repeticion para que el programa no se colapse
*/

int tomarint(){
string numero;
bool esValido=false;
while(!esValido){
    try{
    getline(cin,numero);
    esValido=validar(numero);
    if(! esValido) throw numero;
    }catch(string e){
    MessageBox(NULL,"El numero no es valido","Fatal error on:Numero",MB_OK);
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

//---------------------------

int main(){
	int hora,minutos,segundos;
	cout<<"Ingrese la hora "<<endl;
	hora=tomarint();
	while (hora>23 || hora<0) {
		cout<<"Ingrese un numero entre 0-23"<<endl;
		hora=tomarint();
	}
	cout<<"Ingrese los minutos "<<endl;
	minutos=tomarint();
	while (minutos>59 || minutos<0) {
		cout<<"Ingrese un numero entre 0-59"<<endl;
		minutos=tomarint();
	}
	cout<<"Ingrese los segundos "<<endl;
	segundos=tomarint();
	while (segundos>59 || segundos<0) {
		cout<<"Ingrese un numero entre 0-59"<<endl;
		segundos=tomarint();
	}
	
	if (segundos==59) {
		segundos= 00;
		minutos = minutos+1;
	} else {
		segundos = segundos + 1;
	}
	if (minutos==60 && segundos==00) {
		minutos = 00;
		hora = hora + 1; 
	}
	if (hora == 24 && minutos==00 && segundos==00) {
		hora = 00;
	}
	cout<<hora<<":"<<minutos<<":"<<segundos;
	system("Pause");
}
