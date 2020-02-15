#include<stdio.h>
#include <stdlib.h>
#include <iostream>
#include<windows.h>
using namespace std;
//funciones
int tomarint();
bool validar(string);
//*******************
int main(void)
{
            int num1,num2,num3;
            printf("\t\t\tIntroduzca numero 1: \n");
            num1=tomarint();
            printf("\t\t\tIntroduzca numero 2:\n");
            num2=tomarint();
            printf("\t\t\tIntroduzca numero 3:\n");
            num3=tomarint();
    if (num1>num2 && num1>num3)
    {
       if (num2>num3)
       {
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3);
       }
       else if (num3>num2)
       {
        printf("%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2);
       }
       else
       {
        printf("%d\n",num1);
        printf("%d",num3);
        printf("%d\n",num2);
       }
    }
    else if (num2>num1 && num2>num3)
    {
       if (num1>num3)
       {
        printf("%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3);
       }
       else if (num3>num1)
       {
        printf("%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1);
       }
       else
       {
        printf("%d\n",num2);
        printf("%d",num3);
        printf("%d\n",num1);
       }
    }
    else if (num3>num1 && num3>num2)
    {
       if (num1>num2)
       {
        printf("%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2);
       }
       else if (num2>num1)
       {
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
       }
       else
       {
        printf("%d\n",num3);
        printf("%d",num2);
        printf("%d\n",num1);
       }
    }
    else
    {
        printf("%d",num1);
        printf("%d\n",num2);
        printf("%d",num3);
    }
    system("Pause");
}
//******fuciones para validar
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
    cout<<"\t\t\t    Valor :"<<endl;
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

