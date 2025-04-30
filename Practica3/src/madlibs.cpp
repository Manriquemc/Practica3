/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   si.cpp
 * Author: manriquemc
 * 
 * Created on 30 de abril de 2025, 16:47
 */

#include "madlibs.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

madlibs::madlibs() {
}

madlibs::madlibs(const madlibs& orig) {
    tam_soluciones = orig.tam_soluciones;
    tam = orig.tam;
    vectorSoluciones = new string[tam_soluciones];
    v = new string[tam];
}

madlibs::~madlibs() {
    delete[] vectorSoluciones;
    delete[] v;
}

void madlibs::leerFichero(string fich){
    ifstream fichero;
    int memoria_reservada = 100;
    v = new string[memoria_reservada];
    int num_palabras = 0;
    string palabra;
    
    fichero.open("./data/" + fich);
    if(fichero.is_open()){
        while(fichero >> palabra){
            if(num_palabras >= memoria_reservada){
                memoria_reservada *= 2;
                string *nuevo_v = new string[memoria_reservada];
                for(int i=0; i<num_palabras; i++){
                    nuevo_v[i] = v[i];
                }
                delete[] v;
                v = nuevo_v;
            }
            v[num_palabras] = palabra;
            num_palabras++;
        }
    }
    else{
        cout << "Error al abrir el archivo";
    }
    fichero.close();
    tam = num_palabras;
}

void madlibs::extraerSoluciones(){
    int memoria_reservada = 10;
    vectorSoluciones = new string[memoria_reservada];
    int new_tam = 0;
    for(int i=0; i<tam; i++){
        string palabra = v[i];
        for(int j=0; j< palabra.length(); j++){
            if(palabra[j]=='X'){
                vectorSoluciones[new_tam] = palabra;
                new_tam++;
            }
             if(new_tam >= memoria_reservada){
                memoria_reservada *= 2;
                string *nuevo_v = new string[memoria_reservada];
                for(int i=0; i<new_tam; i++){
                    nuevo_v[i] = v[i];
                }
                delete[] vectorSoluciones;
                vectorSoluciones = nuevo_v;
            }
        }
    }
    tam_soluciones = new_tam;
}

string madlibs::crearTextoSinSoluciones(){
    string Texto_final;
    for(int i=0; i<tam; i++){
        string palabra = v[i];
        for(int j=0; j<palabra.length(); j++){
            if(palabra[j] == 'X' && palabra[palabra.length()-1] == 'X'){
                string nueva_palabra(palabra.length()-2, '_');
                Texto_final += nueva_palabra + " ";
            }
            else{
                Texto_final += palabra +" ";
            }
        }
    }
    return Texto_final;
}

int madlibs::numAciertos(string *palabrasUsuario, int tam){
    int numaciertos = 0;
    for(int i=0; i<tam_soluciones && (i+1)< tam; i++){
        if(vectorSoluciones[i] == palabrasUsuario[i]){
            numaciertos++;
        }
    }
    return numaciertos;
}

void madlibs::play(){
    int memoriareservada = 10;
    int tam = 0;
    string* palabrasUsuario = new string[memoriareservada];
    cout << crearTextoSinSoluciones();
    cout << endl;
    cout << "Introduce en orden las palabras que faltan-> " << endl;
    for(int i=1; i< tam_soluciones; i++){
        if(tam >= memoriareservada){
            string *nuevoVector = new string[memoriareservada*2];
            for(int i=0; i<tam; i++){
                nuevoVector[i] = palabrasUsuario[i];
            }
            delete[] palabrasUsuario;
            palabrasUsuario = nuevoVector;
        }
        cout << "Palabra " << i << ": ";
        cin >> palabrasUsuario[i];
        tam++;
    }
    if(tam == tam_soluciones){
        if(numAciertos(palabrasUsuario, tam) == tam_soluciones+1){
            cout << "Has ganado!!!";
        }
        else{
            play();
        }
        
    }
    else{
        cout << "No coincide con el numero de soluciones";
    }
    
}