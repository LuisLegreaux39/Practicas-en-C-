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
//********************************************************
 

 
int main(){
 
   //system ("clear");
 
    int i, n, cont = 0;
 
    long long int a[100];
 
    a[0] = 0;
    a[1] = 1;
 
    cout << "\t\tNumero de terminos de la serie = ? "<<endl;
 
    n=tomarint();
 
    cout << "\n";
 
    for(i=1; i < n; i++){
 
        a[i+1] = a[i-1] + a[i];
 
    }
 
 
    for(i=0; i < n; i++){
 
        if (cont == 10){ 
 
            cout << "\n";
 
            cont = 0;           
 
        }
 
        cout << a[i] << " "<<endl;
 
        cont += 1;  
 
    }
       
    cout << "\n";
    system("Pause");
 
}
