/* 
 * File:   main.cpp
 * Author: rtbsukibo39
 *
 * Created on April 30, 2020, 10:40 PM
 */
#include <iostream>
#include <cstdlib>
#include <mysql/mysql.h>
#include <mysql/mysqld_error.h>
#include <stdio.h>
#include <exception>
#include <string>
std::string SERVER = "127.0.0.1";
std::string USER = "root";
std::string PASSWORD = "root";
std::string BASEDEDATOS = "CLIENTE";

class BASEDATOS{
    public:
        BASEDATOS(std::string _SERVER, std::string _USER, std::string _PASSWORD,std::string _BASEDADATOS);
        std::string server;
        std::string user;
        std::string password;
        std::string basededatos;
    private:
        
        bool validarConeccionBd();
};
BASEDATOS::BASEDATOS(std::string _SERVER, std::string _USER, std::string _PASSWORD, std::string _BASEDADATOS){
    this->server = _SERVER;
    this->user = _USER;
    this->password = _PASSWORD;
    this->basededatos = _BASEDADATOS;
}
bool BASEDATOS::validarConeccionBd(){
    
    return true;
}

int main(int argc, char** argv) {
    MYSQL *Conn;
    MYSQL_ROW row;
    unsigned int rowNumber;
    unsigned int i = 0;
    std::string nombreUsuario;
    std::string contrasenaUsuario;
    std::string query_completo;
    Conn = mysql_init(0);

    if(!mysql_real_connect(Conn,SERVER.c_str(),USER.c_str(),PASSWORD.c_str(),BASEDEDATOS.c_str(),0,NULL,0)){
        fprintf(stderr," No se pudo conectar la base de datos %s \n",mysql_error(Conn));
        exit(1);
    }
    printf("Coneccion exitosa \n");
    printf("Por favor Introducir su: \n");
    printf("Nombre de usuario : ");
    std::cin>>nombreUsuario;
    printf("Clave del nuevo usuario :");
    std::cin>>contrasenaUsuario;
    query_completo = "INSERT INTO CLIENTE.USUARIO(userName,userPassword) value('"+nombreUsuario+"','"+contrasenaUsuario+"')";
    mysql_query(Conn,query_completo.c_str());
    mysql_close(Conn);
    return 0;
}






