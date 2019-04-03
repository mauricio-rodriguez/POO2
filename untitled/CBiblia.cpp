//
// Created by mauricio.rodriguez on 2/04/2019.
//

#include "CBiblia.h"
#include "fstream"

using namespace std;
class Biblia{
private:
    string nombreArchivo;
    fstream *archivo;
public:
    Biblia(string nombreArchivo){ //constructor uwu
        this ->nombreArchivo= nombreArchivo;
        archivo= new fstream();
    }
int contarCaracteres(){
        char c;
        int i=0;
        archivo->open(nombreArchivo,ios::in);
        while (*archivo>>c)
            i++;
        archivo->close();
        return i;
    }
    ~Biblia(){};
};
