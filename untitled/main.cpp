
#include <iostream>
#include <fstream>
#include <string>
#include "CBiblia.cpp"
using namespace std;

int main() {
    Biblia* biblia = new Biblia("biblia.txt");
    cout<<"Estadisticas de la biblia"<<endl;
    cout<<"Numero de caracteres: "<<biblia->contarCaracteres()<<endl;
    delete biblia;
    return 0;


}
