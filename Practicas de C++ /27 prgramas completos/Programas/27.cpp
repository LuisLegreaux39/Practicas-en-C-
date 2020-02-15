//Realiza una aplicación que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 960,000pesos anuales, 
//el programa debe realizar los cálculos en función de los siguientes criterios:
//	Si lleva más de 15 años en la empresa se le aplica un aumento del 20%.
//	Si lleva menos de 11 años pero más que 5 se le aplica un aumento del 10%.
//	Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 8%.
//	Si lleva menos de 3 años se le aplica un aumento del 5%
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int tomarint();
bool validar(string);
//----------------------------
/**
Funciones para evaluar
Funcion de exception y repeticion para que el programa no se colapse
*/

int tomarint(){
string numero;
bool esValido=false;
while(!esValido){
    try{
    getline(cin,numero);
    esValido=validar(numero);
    if(! esValido) throw numero;
    }catch(string e){
    MessageBox(NULL,"El numero no es valido","Fatal error on:Numero",MB_OK);
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

//---------------------------------------------
int main(){
	double a;
	int b,c,monto=960000;
	
	do {
		cout<<"Ingresa los años que tiene el empleado trabajando"<<endl;
		a=tomarint();
	} while (a<0);
	
	if (a<=3){
		b=monto*0.05;
		c=monto+b;
		cout<<"Los años de trabajo son: "<<a<<endl;
		cout<<"El monto que cobra es: "<<monto<<endl;
		cout<<"El total porcentaje a aumentar es: "<<b<<endl;
		cout<<"El total a cobrar es: "<<c<<endl;
	} else {
		if (a>3 && a<=5) {
			b=monto*0.08;
			c=monto+b;
			cout<<"Los años de trabajo son: "<<a<<endl;
			cout<<"El monto que cobra es: "<<monto<<endl;
			cout<<"El total porcentaje a aumentar es: "<<b<<endl;
			cout<<"El total a cobrar es: "<<c<<endl;
		} else {
			if (a>5 && a<=11) {
				b=monto*0.1;
				c=monto+b;
				cout<<"Los años de trabajo son: "<<a<<endl;
				cout<<"El monto que cobra es: "<<monto<<endl;
				cout<<"El total porcentaje a aumentar es: "<<b<<endl;
				cout<<"El total a cobrar es: "<<c<<endl;
			} else {
				if (a>11) {
					b=monto*0.2;
					c=monto+b;
					cout<<"Los años de trabajo son: "<<a<<endl;
					cout<<"El monto que cobra es: "<<monto<<endl;
					cout<<"El total porcentaje a aumentar es: "<<b<<endl;
					cout<<"El total a cobrar es: "<<c<<endl;
				}
			}
		}
	}
	system("Pause");
}
