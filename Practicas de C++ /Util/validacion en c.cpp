#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int tomarint();
bool validar(string);
int main()
{
int numero1=0;
cout<<"\t\t-------------------------------------------------------"<<endl;
cout<<"Este programa es para saber si un numero es primo o no entre el 1 y el 5"<<endl;
cout<<"\t\t--------------------------------------------------------"<<endl;
numero1=tomarint();

if(numero1== 4){
    cout<<"Este numero  no es primo"<<endl;
}else{
cout<<"Este numero es primo"<<endl;
}

return 0;
}
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
if(numero.length()==1){
    inicio=1;
    if(numero[0]=='+' || numero[0]=='-'|| numero[0]=='+' || numero[0]=='/' ){
        return 0;
    }
}
if(numero.length()==2){
    if((numero[0]=='+' || numero[0]=='-'|| numero[0]=='+' || numero[0]=='/') and numero[1]<=9 and numero[1]>=-9   ){
        return 0;
    }
   
}

for(int i=0;i<numero.length();i++){
    if(! isdigit(numero[i]))
        return 0;
}
return 1;
}

    
