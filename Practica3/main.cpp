/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: manriquemc
 *
 * Created on 4 de abril de 2025, 16:25
 */

#include "madlibs.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    madlibs Ejemplo;
    Ejemplo.leerFichero("texto.txt");
    Ejemplo.play();
}

