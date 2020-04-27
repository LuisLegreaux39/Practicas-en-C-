#include<stdio.h>
#include<iostream>
class FORMA{
public:
    FORMA(int levels);
    void triangulo();
    void linea();
    void cuadrado();
    void triangulo_invertido();
    void Piramide();
    int _levels;
};

FORMA::FORMA(int levels){
    this->_levels = levels;
}

void FORMA::triangulo(){
    int nivel = this->_levels;
    for(int i =0;i<=nivel;i++ ){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void FORMA::linea(){
    int nivel = this->_levels;
    for(int i=0;i<=nivel;i++){
        printf("*");
    }
    printf("\n");
}
void FORMA::cuadrado(){
    int nivel = this->_levels/2;
    for(int i = 0 ;i<nivel; i++){
        this->linea();
    }
    printf("\n");
}

void FORMA::Piramide(){

    int nivel = this->_levels;
    int i = 0;
    int j = 0;
    int y = 0;
    for(i=1;i<=nivel;i++){
        for(j=1;j<nivel-i;j++){
            printf(" ");
        }
        for(y=0;y<2*i-1;y++){
            printf("*");
        }
        printf("\n");
    }

}

void FORMA::triangulo_invertido(){
    int nivel = this->_levels;
    for( int i = nivel; i >=0;i--){
        for(int j = i*2;j>=i ; j-- ){
            printf("*");
        }
        printf(" \n");
    }
}
int main(){

FORMA form(20);
form.Piramide();

/*
form.triangulo();
printf("\n");
form.linea();
printf("\n");
form.cuadrado();
*/

}
