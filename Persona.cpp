#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;


class PERSONA{
public:
    /*Listo*/PERSONA(string _nombre, string _numeroCedula, string _numeroCelular);
    /*Listo*/void presentar();
    /*Listo*/void decir(string frase);
    /*Listo*/void despedir();
    void preguntar();
    /*Listo*/string Mascota();
    /*Listo*/string _getnumeroCedula();
    /*Listo*/string _getnumeroCelular();
    /*Listo*/void hacerSaludarMascota(string miNombre);
    /*Listo*/int iterar();
    string nombre;
    string apellido;
    string nombreMascota;

private:
    string numeroCedula;
    string numeroCelular;
    int iterador;
};
PERSONA::PERSONA(string _nombre, string _numeroCedula, string  _numeroCelular){
            this->nombre= _nombre;
            this->numeroCedula = _numeroCedula;
            this->numeroCelular = _numeroCelular;
            this->nombreMascota = "Murphy";
            this->iterador = 0;
}
string PERSONA::_getnumeroCedula(){

    return numeroCedula;
}
string PERSONA::_getnumeroCelular(){

    return numeroCelular;
}
int PERSONA::iterar(){
        return this->iterador + 1;
}

void PERSONA::decir(string frase = "Hola"){

        string linea;

        for(int i =0 ;i<frase.length() + 2 ;i++){ linea +="*"; }

        printf("  %s \n",linea.c_str());

        printf("  *%s*\n",frase.c_str());

        printf("  %s \n",linea.c_str());

        printf(" ** \n");

        printf(" * \n");


}
void PERSONA::hacerSaludarMascota(string miNombre=""){

        /*Esta funcion debe tener parametro opcionales*/

        string __nombre = this->nombre;

        int tamanio = miNombre.length();

        this->nombreMascota = ( tamanio > 1 and this->iterador < 2 ) ? miNombre : "Murphy" ;


        string frase_completa=" cowsay 'Hola "+__nombre+" mi nombre es "+this->nombreMascota+" ' ";

        system(frase_completa.c_str());
}
string PERSONA::Mascota(){

    string __nombreMasccota = this->nombreMascota;

    int centinela = this->iterar();

    this->iterador = centinela;

    string mensaje = (centinela < 2) ? "No nos hemos conocido antes verdad?" : "Hola me llamo "+ this->nombreMascota;

    return mensaje;
}

void PERSONA::presentar(){
        string _nombre = this->nombre;

        string fraseCompleta = "Hola me llamo "+ _nombre;

        this->decir(fraseCompleta.c_str());

        printf("  0  \n");
        printf(" l0l \n");
        printf("  ll \n");

}

void PERSONA::despedir(){

        string _nombre = this->nombre;

        string fraseCompleta = "Adios ";

        this->decir(fraseCompleta.c_str());

        printf("  0  \n");
        printf(" l0l \n");
        printf("  ll \n");
}

int main(){

PERSONA p("Juan","123456789","8294496461");

cout<<p.nombre<<endl;

cout<<p._getnumeroCedula()<<endl;

cout<<p._getnumeroCelular()<<endl;

p.hacerSaludarMascota("Pedro");

cout<<p.Mascota()<<endl;

p.presentar();




printf("\n");
return 0;
}
