#include<iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
//*******
int tomarint();
bool validar(string);
//*********
main()
{
      /*variables*/
      int a,b,c,may,men,med;
      
      /*Ingresar datos*/
      printf("DETERMINAR QUE NUMERO ES MAYOR, MEDIO, MENOR O SI EXISTE ALGUNA IGUALDAD");
      a=tomarint();
	  b=tomarint();	
      c=tomarint();
            
      /*condiciones --- bloque mayor*/
      may=a;
      if (b>may)
         may=b;      
      if (c>may)
         may=c;      
          
      /*condiciones --- bloque menor*/
      men=a;
      if (b<men)
         men=b;      
      if (c<men)
         men=c;      
            
       /*condiciones --- bloque medio*/
      if(may>a && a>men)
         med=a;
      if(may>b && b>men)
         med=b;
      if(may>c && c>men)
         med=c;
        
      /*Condicionar la igualdad y Escribir en pantalla*/
      
      if(a==b && a==c && b==c) 
               printf("\n\n\t\t\tLos tres numeros son iguales\n"); 
           else if(a==b) 
               //printf("\n\nEl primero y el segundo son iguales %d\n",a<c ? c : a);
               a<c ? printf("\n\nEl primero \"%d\" y el segundo \"%d\" son iguales, y el tercero \"%d\" es el mayor\n",a,b,c) : printf("\n\nEl primero \"%d\" y el segundo \"%d\" son iguales, y el tercero \"%d\" es el menor\n",a,b,c);  
           else if(a==c) 
               //printf("\n\nEl primero y el tercero son iguales\n");
               a<b ? printf("\n\nEl primero \"%d\" y el tercero \"%d\" son iguales, y el segundo \"%d\" es el mayor\n",a,c,b) : printf("\n\nEl primero \"%d\" y el tercero \"%d\" son iguales, y el segundo \"%d\" es el menor\n",a,c,b);     
           else if(b==c) 
               //printf("\n\nEl segundo y el tercero son iguales\n");  
               b<a ? printf("\n\nEl segundo \"%d\" y el tercero \"%d\" son iguales, y el primero \"%d\" es el mayor\n",b,c,a) : printf("\n\nEl segundo \"%d\" y el tercero \"%d\" son iguales, y el primero \"%d\" es el menor\n",b,c,a);
           else{ 
                printf("\n\n\n\t\tEl numero mayor es ===> %d",may);
                printf("\n\t\tEl numero medio es ===> %d",med);
                printf("\n\t\tEl numero menor es ===> %d",men);  
                }
      
            
system("Pause");
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

