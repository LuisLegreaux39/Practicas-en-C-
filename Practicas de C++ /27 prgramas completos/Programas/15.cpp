#include<iostream>
#include<windows.h>
#include<string>
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
    cout<<"\t\t\tIngrese un opcion :"<<endl;
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
if(numero3<1 or numero3>3)return 0;
return 1;
}

int main(void){
	int op=0;
	cout<<"\t\t************************************"<<endl;
	cout<<"\t\tseleccione una opcion por favor"<<endl;
	cout<<"\t\t1-archivo"<<endl;
	cout<<"\t\t2-buscar"<<endl;
	cout<<"\t\t3-salir"<<endl;
	op=tomarint();
	switch(op){
		case 1:
			MessageBox(NULL,"Archivo","Usted selecciono archivo",MB_OK);
			system("start HLA.txt ");
			break;
		case 2:
			MessageBox(NULL,"Buscar","Buscar",MB_OK);
			system("Dir");
			break;
		case 3:
			system("Exit");
			break;
	}
		
		system("Pause");

}

