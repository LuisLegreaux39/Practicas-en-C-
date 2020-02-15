#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*prpgrama para saber si un numero es par o impar*/
//funciones
int tomarint();
bool validar(string);
//***********************************************************
int main(){
	int numero1=0;
	cout<<"\tintrodusca un numero para saber si es par o impar"<<endl;
	numero1=tomarint();
	if(numero1 %2==0){
		cout<<"este numero es par"<<endl;
	}else{
		
		cout<<"este numero no es par"<<endl;
	}
	
	system("Pause");
}
//**********funcion para validar
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
/**
Funcion de validacion
*/
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

