//Menu de los 27 prgramas para seleccionarlos
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ROJO 12
#define COLOR_DEF 15
#define AMARILLO 14
#define VERDE 10
#define ROSA 13
#define AZUL 41
#define ROJO_DARK 52
#define ABAJO 80
#define ARRIBA 72
#define ENTER 13
//**********************
//lista de funciones para el procesador
void gotoxy(int x,int y);
void linHZ();
void linVT();
void color(int x);
void opmenu(int x,int y);
//*************************
//funcion de los colores
void color(int x){
    HANDLE hcon;
    hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,x);
    }

//-------------------------------------------
void gotoxy(int x,int y){
     HANDLE hcon;
     hcon=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPOS;
     dwPOS.X=x;
     dwPOS.Y=y;
     SetConsoleCursorPosition(hcon,dwPOS);
     }
 //-----------opciones--------------------------------
 void opmenu(int x,int y){
     color(ROJO);
     gotoxy(x-20,y+1);  printf("1-Crear un programa que pida un número del 1 al 5 y diga si es primo");
     gotoxy(x-20,y+2);  printf("2-programa que pida un numero y diga si es par o impar");
     gotoxy(x-20,y+3);  printf("3-Realiza una aplicacion que pida un número del 1 al 7 y diga el día de la semana ");
	 gotoxy(x-20,y+4);  printf("4-Realiza una aplicacion que pida un número del 1 al 12 y diga el nombre del mes ");
     gotoxy(x-20,y+5);  printf("5-ealiza una aplicacion que pida 3 números y los muestre en pantalla de menor a mayor");
     gotoxy(x-20,y+6);  printf("6-3 numeros que muestre , el mayor, la mediana y el menor,  indicar cuales son iguales o diferent");
	 gotoxy(x-20,y+7);  printf("7-3 numeros y los muestre en pantalla de mayor a menor en lineas distintas. numeros iguales se IMPRIMA en la misma linea.");
     gotoxy(x-20,y+8);  printf("8-Crear un programa que pida un numero y diga si es positivo o negativo.");
	 gotoxy(x-20,y+9);  printf("9-Crear un programa que solo permita introducir los caracteres S y N.");
     gotoxy(x-20,y+10); printf("10-Crear un programa que pida un numero y diga si es mayor de 100.");
     gotoxy(x-20,y+11); printf("11-Crear un programa que pida una letra y detecte si es una vocal");
     gotoxy(x-20,y+12); printf("12-Realiza una aplicacion que pida tres numeros y detecte si se han introducido en orden ascendente.");
     gotoxy(x-20,y+13); printf("13-Realiza una aplicacion que pida 10 numeros y diga cual es el mayor y cual el menor.");
     gotoxy(x-20,y+14); printf("14-Realiza una aplicacion que pida tres numeros e indicar si el tercero es igual a la suma del primero y el segundo");
     gotoxy(x-20,y+15); printf("15-aplicacion que muestre un menu de Archivo Buscar y Salir y si de que no se introduzca una opcion correcta se notificara ");
     gotoxy(x-20,y+16); printf("16-Realiza una aplicación que pida tres numeros y detecte si se han introducido en orden descendente");
     gotoxy(x-20,y+17); printf("17-Crear una aplicacion que tome dos numeros del 1 al 5 y diga si ambos son primos.");
     gotoxy(x-20,y+18); printf("18-Realizar un programa que lea un numero introducido por teclado, e imprima la serie de los numero Fibonacci de dicho numero.");
     gotoxy(x-20,y+19); printf("19-Crear una aplicacion que imprima el factorial de un numero introducido por teclado.");
	 gotoxy(x-20,y+20); printf("20-Crear una aplicacion que tome dos numeros y diga si ambos son pares o impares");
     gotoxy(x-20,y+21); printf("21-Crear una aplicacion que tome tres numeros y diga si la multiplicacion de los dos primeros es igual al tercero");
     gotoxy(x-20,y+22); printf("22-Crear una aplicacion que tome tres numeros y diga si el tercero es el resto de la division de los dos primeros.");
     gotoxy(x-20,y+23); printf("23-menu donde las opciones sean Equilátero, Isósceles y Escaleno, pida una opcion y calcule el perímetro del triangulo seleccionado");
     gotoxy(x-20,y+24); printf("24-crear una aplicacion que pase de Kg a otra unidad de medida de masa, mostrar en pantalla un menú con las opciones posibles.");
     gotoxy(x-20,y+25); printf("25-uno lea un importe bruto y calcule su importe neto, mayor de 25,000 aplicar un 16% de impuestos, de contrario se aplica un 10%");
     gotoxy(x-20,y+26); printf("26-Realiza una aplicación que lea una hora en hora:minutos:segundos y diga la hora que es un segundo despues");
     gotoxy(x-20,y+27); printf("27-calcule el sueldo de trabajador que cobra 960,000 pesos anuales, esto debe realizar los calculos en funcion de: ");
	 gotoxy(x-15,y+29); printf("-Si lleva mas de 15 años en la empresa se le aplica un aumento del 20%.");
	 gotoxy(x-15,y+30); printf("-Si lleva menos de 11 años pero más que 5 se le aplica un aumento del 10%.");
	 gotoxy(x-15,y+31); printf("-Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 8%.");
	 gotoxy(x-20,y+32); printf("28-Exit");

	 
     }


//-------------------------------------------
 //lineas del menu
void linVT(){
     color(ROJO_DARK);
for(int i=3;i<44;i++){
    gotoxy(3,i);printf("%c",186);
    gotoxy(140,i);printf("%c",186);
}
 }
void linHZ(){
     color(ROSA);
 for(int i=23;i<55;i++){
    gotoxy(i,2);printf("%c",205);
    gotoxy(i,24);printf("%c",205);
}
     }
//------------
//------------titulo
class TITULO{
      int x,y;
public:
       TITULO(int  _X,int _Y):x(_X),y(_Y){};
       void letras();

      };
void TITULO::letras(){
     color(AMARILLO);
     gotoxy(x,y);  printf("  #####               ");
     gotoxy(x,y+1);printf("##     ##   ##     ##    ");
     gotoxy(x,y+2);printf("##          ##     ##   ");
     gotoxy(x,y+3);printf("##        ###### ###### ");
	 gotoxy(x,y+4);printf("##          ##     ##   ");
	 gotoxy(x,y+5);printf("##    ##    ##     ##   ");
	 gotoxy(x,y+6);printf("  #####                ");
	 
	 

     }
//------------
//------------nombre
class NOMBRE{
      int x,y;
public:
       NOMBRE(int  _X,int _Y):x(_X),y(_Y){};
       void letras();

      };
void NOMBRE::letras(){
     color(VERDE);
     gotoxy(x,y);  printf(" Luis Ricardo legreaux medina ");
     gotoxy(x,y+1);printf("     2015-0141  ");
 
	 
	 

     }
//------------
//------opciones------PRESENTAR OPCIONES-----
class MENU{
      int x,y;
public:
       MENU(int  _X,int _Y):x(_X),y(_Y){};
       void puntero();
       void seleccion();
       void borrar();
      void accion();
      };
void MENU::borrar(){
     gotoxy(x,y);printf(" ");
     }
void MENU::puntero(){
           gotoxy(x,y);printf("%c",62);
           }

void MENU::seleccion(){
     if( kbhit() ){
                 char tecla=getch();
                   gotoxy(x,y);
                    borrar();
                  
    if(tecla==ARRIBA and y==43)y-=6;
    if(tecla==ABAJO and y==36)y+=5;
  	if(tecla==ENTER and y==10)system("start 1.exe");
  	if(tecla==ENTER and y==11)system("start 2.exe");
  	if(tecla==ENTER and y==12)system("start 3.exe");
  	if(tecla==ENTER and y==13)system("start 4.exe");
  	if(tecla==ENTER and y==14)system("start 5.exe");
  	if(tecla==ENTER and y==15)system("start 6.exe");
  	if(tecla==ENTER and y==16)system("start 7.exe");
  	if(tecla==ENTER and y==17)system("start 8.exe");
  	if(tecla==ENTER and y==18)system("start 9.exe");
  	if(tecla==ENTER and y==19)system("start 10.exe");
  	if(tecla==ENTER and y==20)system("start 11.exe");
  	if(tecla==ENTER and y==21)system("start 12.exe");
  	if(tecla==ENTER and y==22)system("start 13.exe");
  	if(tecla==ENTER and y==23)system("start 14.exe");
  	if(tecla==ENTER and y==24)system("start 15.exe");
  	if(tecla==ENTER and y==25)system("start 16.exe");
  	if(tecla==ENTER and y==26)system("start 17.exe");
  	if(tecla==ENTER and y==27)system("start 18.exe");
  	if(tecla==ENTER and y==28)system("start 19.exe");
  	if(tecla==ENTER and y==29)system("start 20.exe");
  	if(tecla==ENTER and y==30)system("start 21.exe");
  	if(tecla==ENTER and y==31)system("start 22.exe");
  	if(tecla==ENTER and y==32)system("start 23.exe");
  	if(tecla==ENTER and y==33)system("start 24.exe");
  	if(tecla==ENTER and y==34)system("start 25.exe");
  	if(tecla==ENTER and y==35)system("start 26.exe");
  	if(tecla==ENTER and y==36)system("start 27.exe");
  
    
    if(tecla==ENTER and y==41)exit(0);
    //----------------
    if(tecla==ARRIBA and y>10)y-=1;
    if(tecla==ABAJO and y<36)y+=1;
    /*
     if(tecla==ENTER and y==10 )
     if(tecla==ENTER and y==12)
          if(tecla==ENTER and y==14){
system("cls");exit(0);}

          }*/}

     }
//------

using namespace std;
int main(){
	system("mode con: cols=143 lines=50");
	TITULO pan(45,2);
    MENU cursor(7,10);
    NOMBRE Luis(75,4);
	
bool gameover=false;
    while(!gameover){
//linHZ();
linVT();
//***************

pan.letras();
Luis.letras();
//***************

cursor.puntero();
cursor.seleccion();
//*****************

opmenu(28,9);

//***************
Sleep(90);
}

	getch();
}
