/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ClaseCarta.h
 * Author: manri
 *
 * Created on 12 de marzo de 2025, 10:30
 */

#ifndef CLASECARTA_H
#define CLASECARTA_H
#include <string>
using namespace std;

/**
  @file CLASECARTA_H
*/
/**
  @brief Define tipopalo, que representa los cuatro palos de la baraja española.
*/
enum tipopalo{copas, bastos, oros, espadas};
/**
  @class ClaseCarta.
*/
class ClaseCarta{
public:
    ClaseCarta();
    ClaseCarta(tipopalo nuevopalo, int nuevonum);
    ClaseCarta(const ClaseCarta& orig);
    ~ClaseCarta();
    string to_string();
    void modificaCarta(tipopalo nuevopalo, int nuevonum);
    int numero();
    string paloCartastring();
    tipopalo paloCarta();

private:
    /**
      @brief Declaración de variable palo.
      @brief Declaración de variabe num..
    */
    tipopalo palo;
    int num;
};

#endif /* CLASECARTA_H */