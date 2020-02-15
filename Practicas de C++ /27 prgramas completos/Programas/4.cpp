#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
/*programa para saber que mes del año le corresponde a un numero del 1-12*/
//**funciones
int tomarint();
bool validar(string);
//*******************
int main(void){
	int numero1=0;
	cout<<"\tintrodusca un numero para saber a que dia de la semana corresponde"<<endl;
	cout<<"\t\t\t\tentre el 1-12"<<endl;
	numero1=tomarint();
	switch(numero1){
	
		case 1:
			cout<<"enero"<<endl;
			break;
		case 2:
			cout<<"febrero"<<endl;
			break;
		case 3:
			cout<<"marzo"<<endl;
			break;
		case 4:
			cout<<"abril"<<endl;
			break;
		case 5:
			cout<<"mayo"<<endl;
			break;
		case 6:
			cout<<"junio"<<endl;
			break;
		case 7:
			cout<<"julio"<<endl;
			break;
		case 8:
			cout<<"agosto"<<endl;
			break;
		case 9:
			cout<<"septiembre"<<endl;
			break;
		case 10:
			cout<<"octubre"<<endl;
			break;
		case 11:
			cout<<"noviembre"<<endl;
			break;
		case 12:
			cout<<"diciembre"<<endl;
			break;

	}
	system("Pause");
}
//*******************funciones para validar
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
if(numero3<0 or numero3>12)return 0;
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

