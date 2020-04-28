#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class PERSONA{
public:
    PERSONA(string _nombre, string _numeroCedula, string _numeroCelular);
    void presentar();
    void decir();
    void despedir();
    void preguntar();
    void Mascota();
    void hacerSaludarMascota(string frase);
    string nombre;
    string apellido;
    string _getnumeroCedula();
    string _getnumeroCelular();

private:
    void DecirNumeroCedula();
    string numeroCedula;
    string numeroCelular;
};
PERSONA::PERSONA(string _nombre, string _numeroCedula, string  _numeroCelular){
            this->nombre= _nombre;
            this->numeroCedula = _numeroCedula;
            this->numeroCelular = _numeroCelular;
}
string PERSONA::_getnumeroCedula(){

    return numeroCedula;
}
string PERSONA::_getnumeroCelular(){

    return numeroCelular;
}
void PERSONA::hacerSaludarMascota(string frase){
        string __nombre = this->nombre;
        string frase_completa = ''cowsay \" " +frase + __nombre+'"';
        char* sistema[100];
        strcpy(sistema[100],frase_completa);
        system(sistema[100]);
}

int main(){
PERSONA p("Juan","123456789","8294496461");
cout<<p.nombre<<endl;
cout<<p._getnumeroCedula()<<endl;
cout<<p._getnumeroCelular()<<endl;
p.hacerSaludarMascota("hola ");
return 0;
}
