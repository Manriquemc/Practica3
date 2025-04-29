/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   madlibs.h
 * Author: manriquemc
 *
 * Created on 24 de abril de 2025, 16:15
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
    string leerFichero(string fich);
    string extraerSoluciones(string fich, int tam);
    int numAciertos()
private:
    string *vectorSoluciones;
    string *v;
    int tam;
};

#endif /* MADLIBS_H */

