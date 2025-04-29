/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ClaseMano.h
 * Author: manri
 *
 * Created on 12 de marzo de 2025, 11:34
 */

#ifndef CLASEMANO_H
#define CLASEMANO_H
#include "ClaseCarta.h"
#include <string> 
using namespace std;
/**
  @file CLASEMANO_H
  @class ClaseMano
   
*/
class ClaseMano {
public:
    ClaseMano();
    ClaseMano(const ClaseMano& orig);
    virtual ~ClaseMano();
    void aniadeCarta(ClaseCarta & nuevacarta);
    void descartaCarta(int pos);
    void cambiaCarta(ClaseCarta & nuevacarta, int pos);
    string to_string();
    int  numeroCartas();
    ClaseCarta & carta(int i);
private:
    /**
      @param MAX indica el máximo de cartas que se puede tener en la mano
      @param cartas[MAX] es un vector de objetos de tipo `Carta` con un tamaño máximo de `MAX`
      @param numCartas es la variable que lleva el conteo de las cartas almacenadas
    */
    static const int MAX = 10;
    ClaseCarta cartas[MAX];
    int numCartas=0;
};
int cartasComunes(ClaseMano &mano1, ClaseMano &mano2);  
#endif /* CLASEMANO_H */

