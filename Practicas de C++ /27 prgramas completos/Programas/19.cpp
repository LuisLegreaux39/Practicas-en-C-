#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int tomarint();
bool validar(string);
//--------------------------
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

//-------------------------------
int main() 
{ 
int fac=0; 
printf("\t\t Ingresa numero para calcular el factorial \n"); 
fac=tomarint(); 
int temp=fac-1; 
int r=fac; 
while (temp>=1) 
{ 
r=r*temp; 
temp--; 
} 

printf("El factorial de %d es: %d ", fac,r); 
system("pause");
} 
