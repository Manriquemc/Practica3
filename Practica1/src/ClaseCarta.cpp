/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ClaseCarta.cpp
 * Author: manri
 * 
 * Created on 12 de marzo de 2025, 10:30
 */

#include "ClaseCarta.h"
#include <string>
using namespace std;
/**
  @file ClaseCartacpp.
  @class ClaseCarta.
  Esta clase representa una carta de la baraja española, almacenando su número
  y palo, con métodos para modificarla, obtener su número de palo, y convertirla
  en una cadena de texto. 
 */
/**
 @brief Constructor por defecto.
*/
ClaseCarta::ClaseCarta(){
}
/**
  @brief Constructor de copia.
 */
ClaseCarta::ClaseCarta(tipopalo nuevopalo, int nuevonum){
    num = nuevonum;
    palo = nuevopalo;
}
ClaseCarta::ClaseCarta(const ClaseCarta& orig){
}
ClaseCarta::~ClaseCarta(){
}
/**
  @brief Muestra por pantalla los atributos de una carta en texto.
  @param palocarta contiene una cadena de texto con el número y el palo de la carta.
  @pre La variable `num` debe ser un valor válido de número de carta.
  @return Devuelve palocarta, con la información de dicha variable.
 */
string ClaseCarta::to_string(){
    string palocarta;
    palocarta = std::to_string(num) + " de " +  paloCartastring();
    return palocarta;
}
/**
  @brief Modifica los valores de la carta.
  @pre nuevopalo y nuevonum deben ser valores válidos de `tipopalo` y `num`, respectivamente.
  @post palo y num se actualizan a los valores `nuevopalo` y `nuevonum`, respectivamente.
  @param nuevopalo.
  @param nuevonum.
 */
void ClaseCarta::modificaCarta(tipopalo nuevopalo, int nuevonum){
    palo = nuevopalo;
    num = nuevonum;
}
/**
  @brief Muestra el número de la carta
  @return Devuelve la variable número(número de la carta)
 */
int ClaseCarta::numero(){
    return num;
}
/**
  @brief Convierte el palo de la carta en un texto, siendo este diferente en función de su valor
  @pre El atributo palo debe ser un valor válido del tipo `tipopalo`
  @return El nombre del palo en forma de texto
 */
string ClaseCarta::paloCartastring(){
    string palocarta;
    if(palo == bastos)  palocarta = "bastos";
    if(palo == espadas) palocarta = "espadas";
    if(palo == oros) palocarta = "oros";
    if(palo == copas) palocarta = "copas";
    return palocarta;
}
/**
  @brief Muestra el valor de palo
  @return Devuelve la variable palo
 */
tipopalo ClaseCarta::paloCarta(){
    return palo;
}

