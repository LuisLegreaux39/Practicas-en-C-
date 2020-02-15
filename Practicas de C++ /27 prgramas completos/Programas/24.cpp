#include <iostream>
#include <sstream>
#include<windows.h>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
//funciones***************

int tomarint();
bool validar(string);
//-----------------
int tomarint2();
bool validar2(string);
//Funciones para evaluar
//Funciones para evaluar
//-------------------------------------------------------------------
int tomarint(){
string numero;
bool esValido=false;
while(!esValido){
    try{
    cout<<"\t\t*************************************"<<endl;
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
//-------------------
//-------------------------------------------------------------------
int tomarint2(){
string numero;
bool esValido=false;
while(!esValido){
    try{
    cout<<"\t\t*************************************"<<endl;
    cout<<"\t\t\tIngrese un numero :"<<endl;
    getline(cin,numero);
    esValido=validar2(numero);
    if(! esValido) throw numero;
    }catch(string e){
    MessageBox(NULL,"El numero no es valido","Fatal error on:Numero",MB_OK);
    system("cls");
    }
}
return atoi(numero.c_str());
}
//************************
bool validar2(string numero){
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
if(numero3<1 or numero3>6)return 0;
return 1;
}
//-------------------
int main(){
	int opcion;
	float a,cambio;
	
	cout<<"\t\t\tIngrese su valor en Kg"<<endl;
	a=tomarint();
	cout<<"\t\tA que unidad de medida desea convertirlo?"<<endl;
	cout<<"\t\t1. Hectogramo (Hg)"<<endl;
	cout<<"\t\t2. Decagramo (Dag)"<<endl;
	cout<<"\t\t3. Gramo (G)"<<endl;
	cout<<"\t\t4. Decigramo (Dg)"<<endl;
	cout<<"\t\t5. Centigramo (Cg)"<<endl;
	cout<<"\t\t6. Miligramo (Mg)"<<endl<<endl;
	opcion=tomarint2();
	
	switch (opcion) {
		case 1:
			cambio=a*10;
			printf("Son %8.8f Hg", cambio);
			break;
		case 2 :
			cambio=a*100;
			printf("Son %8.8f Dag", cambio);
			break;
		case 3:
			cambio=a*1000;
			printf("Son %8.8f G", cambio);
			break;
		case 4:
			cambio=a*10000;
			printf("Son %8.8f Dg", cambio);
			break;
		case 5:
			cambio=a*100000;
			printf("Son %8.8f Cg", cambio);
			break;
		case 6:
			cambio=a*1000000;
			printf("Son %8.8f Mg", cambio);
			break;
		default:
			cout<<"Este valor no esta permitido";
	}
	system("Pause");
}
