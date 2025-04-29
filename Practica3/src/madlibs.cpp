/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   madlibs.cpp
 * Author: manriquemc
 * 
 * Created on 24 de abril de 2025, 16:15
 */

#include "madlibs.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

madlibs::madlibs() {
}

madlibs::madlibs(const madlibs& orig) {
}

madlibs::~madlibs() {
}

void madlibs::leerFichero(string fich){
    ifstream fichero;
    v = new int[];
    int num_palabras = 0;
    
    fichero.open("./data/" + fich){
        while(getline(fichero,v[num_palabras], ' ')){
            num_palabras++;
        }
    }
    fichero.close();
    tam = num_palabras;
}

string madlibs::extraerSoluciones(){
    vectorSoluciones = new string[];
    int new_tam = 0;
    for(int i=0; i<tam; i++){
        string palabra = v[i];
        for(int j=0; j< palabra.length(); j++){
            if(j=='X'){
                vectorSoluciones[new_tam] = palabra;
                new_tam++;
            }
        }
    }
    return vectorSoluciones;
}

string madlibs::crearTextoSinSoluciones(){
    for(int i=0; i<tam; i++){
        string palabra = v[i];
        for(int j=0; j< palabra.length(); j++){
            if(palabra[j]=='X'){
                j = '_';
                palabra.lenght() += -2;
            }
        }
    }
}

int numAciertos