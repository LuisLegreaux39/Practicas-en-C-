#include<stdio.h>
#include <string>
#include <iostream>

class CALC{
public:
    CALC(int num1, int num2);
    int suma();
    int resta();
    int division();
    int multi();
    int _nume1;
    int _nume2;
};
CALC::CALC(int num1,int num2){
    _nume1 = num1;
    _nume2 = num2;
}
int CALC::suma(){
    int a = this->_nume1;
    int b = this->_nume2;
    int c = a+b;
    return c;
}
int CALC::division(){
    int a = this->_nume1;
    int b = this->_nume2;
    int c = a / b;
    return c;
}
int CALC::resta(){
    int a = this->_nume1;
    int b = this->_nume2;
    int c =  a - b;
    return c;
}
int CALC::multi(){
    int a = this->_nume1;
    int b = this->_nume2;
    int c = a * b;
    return c;

}

int main(){

CALC s(1,2);
std::cout<<"EL resultado de la suma de"<<s._nume1<<" y "<<s._nume2<<" es :" <<s.suma()<<std::endl;
std::cout<<"EL resultado de la resta de"<<s._nume1<<" y "<<s._nume2<<" es :" <<s.resta()<<std::endl;
std::cout<<"EL resultado de la division de"<<s._nume1<<" y "<<s._nume2<<" es :" <<s.division()<<std::endl;
std::cout<<"EL resultado de la multiplicacion de"<<s._nume1<<" y "<<s._nume2<<" es :" <<s.multi()<<std::endl;

}






