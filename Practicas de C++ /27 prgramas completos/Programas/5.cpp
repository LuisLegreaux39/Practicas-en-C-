#include <iostream>
#include <windows.h>
#include <string>
#include <ctype.h>
using namespace std;
/*programa para ordernar 3 numeros de manor a mayor*/
//funciones
int tomarint();
bool validar(string);
//***********************************************************

int main(void){
	double num1=0,num2=0,num3=0;
	cout<<"\tintrodusca 3 numeros para ordenarlos de menor a mayor"<<endl;
	num1=tomarint();
	num2=tomarint();
	num3=tomarint();
	if(num1<num2 and num1<num3){
		if(num2<num3){
			cout<<num1<<endl;
			cout<<num2<<endl;
			cout<<num3<<endl;
		}else{
			cout<<num1<<endl;
			cout<<num3<<endl;
			cout<<num2<<endl;
			
		}
		
		
	}else if(num2<num1 and num2<num3){
		
		if(num1<num3){
			cout<<num2<<endl;
			cout<<num1<<endl;
			cout<<num3<<endl;
			
		}else{
			
			cout<<num2<<endl;
			cout<<num3<<endl;
			cout<<num1<<endl;
		}
		
	}else if(num3<num1 and num3<num2){
		if(num1<num2){
		
			cout<<num3<<endl;
			cout<<num1<<endl;
			cout<<num2<<endl;
		}else{
			cout<<num3<<endl;
			cout<<num2<<endl;
			cout<<num1<<endl;	
			
		}	
	}
	system("Pause");
	return 0;
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
    MessageBox(NULL,"El numero no es valido","Fatal error on:72",MB_OK);
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
if(numero.length()==0 ) return 0;
if(numero[0]=='+' || numero[0]=='-'|| numero[0]=='+' || numero[0]=='/' ){
    inicio=1;
    if(numero.length()==1){
        return 0;
    }
}
for(int i=0 ;i < numero.length() ; i++){
    if(! isdigit (numero[i]) )
        return 0;
}
return 1;
}

