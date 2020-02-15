#include<iostream>

using namespace std;

string s;

bool isOk(string x) {

    while(s.size() > 1 && x[0] == ' ')
        x.erase(x.begin());

    int ini = x[0] == '-';

    for(int i=ini;i<x.size();i++)
        if('0' <= x[i] && x[i] <= '9')
            continue;
        else
            return false;

    return true;

}

int toNumber(string x) {

    while(s.size() > 1 && x[0] == ' ')
        x.erase(x.begin());

    int ini = x[0] == '-', res = 0;

    for(int i=ini;i<x.size();i++) {
        res *= 10;
        res += x[i] - '0';
    }

    return ini?-res:res;

}

int main() {

    cin >> s;

    if(isOk(s))
        cout << "El numero leido es " << toNumber(s) << endl;
    else
        cout << "Formato no valido" << endl;

    return 0;
}
