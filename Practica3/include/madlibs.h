/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   si.h
 * Author: manriquemc
 *
 * Created on 30 de abril de 2025, 16:47
 */


#ifndef MADLIBS_H
#define MADLIBS_H
#include <string>
#include <fstream>
using namespace std;

class madlibs {
public:
    madlibs();
    madlibs(const madlibs& orig);
    virtual ~madlibs();
    void leerFichero(string fich);
    void extraerSoluciones();
    string crearTextoSinSoluciones();
    int numAciertos(string* palabrasUsuario, int argc);
    void play();
private:
    string *vectorSoluciones;
    int tam_soluciones;
    string *v;
    int tam;
};

#endif /* MADLIBS_H */



