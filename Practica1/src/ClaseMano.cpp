/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ClaseMano.cpp
 * Author: manri
 * 
 * Created on 12 de marzo de 2025, 11:34
 */

#include "ClaseMano.h"
#include <string>
using namespace std;
/**
  @file ClaseMano.cpp.
  @class ClaseMano.
  @brief Esta clase gestiona un conjunto de cartas, permitiendo añadir, descartar y cambiar cartas,
  así como obtener su representación en cadena  y el número  de cartas actuales. Además, proporciona  
  acceso directo a las cartas individuales a través de su posición en la mano.
*/
/**
  @brief Constructor por defecto.
 */
ClaseMano::ClaseMano() {
}
/**
  @brief Constructor de copia.
*/
ClaseMano::ClaseMano(const ClaseMano& orig) {
}
ClaseMano::~ClaseMano() {
}
/**
  @brief Añade  una nueva carta a la mano.
  @pre `nuevacarta` debe ser una carta válida.
  @post La carta se añade a la mano y se incrementa el contador de cartas.
  @param nuevacarta La carta que se añade a la mano.
*/
void ClaseMano::aniadeCarta(ClaseCarta & nuevacarta){
     cartas[numCartas] = nuevacarta;
     numCartas++;
}
/**
  @brief Descarta una carta de la mano.
  @pre La carta que se quiere borrar debe ser una carta existente y por tanto válida.
  @post La carta se elimina de la mano y se resta una unidad al contador de cartas.
  @param pos La posición de la carta que se quiere borrar.
*/
void ClaseMano::descartaCarta(int pos){
    for(int i = pos; i < numCartas;i++){
            cartas[i] = cartas[i+1];
        }
         numCartas--;
}
/**
  @brief Cambia una carta por otra.
  @pre La carta seleccionada debe ser válida.
  @post Se cambia la carta seleccionada por `nuevacarta`.
  @param nuevacarta es la carta que reemplaza a la existente.
  @param pos es la posición de la carta que quiere cambiarse.
 */
void ClaseMano::cambiaCarta(ClaseCarta & nuevacarta, int pos){
    cartas[pos] = nuevacarta;
}
/**
  @brief Convierte las cartas de la mano en una representación de cadena de texto.
  @pre Las cartas deben haber sido añadidas anteriormente a la mano.
  @post Devuelve una cadena con la descripción de las cartas de la mano.
  @return  La representación en cadena de las cartas de la mano.
*/
string ClaseMano::to_string(){
    string cadcartas="";
        for(int i = 0; i < numCartas;i++){
            cadcartas = cadcartas + std::to_string(cartas[i].numero())+ " de "+
                    cartas[i].paloCartastring() + "\n";
        }
        return cadcartas; 
}
/**
  @brief Devuelve el número de cartas de la mano.
  @return El número de cartas de la mano.
*/
int ClaseMano::numeroCartas(){
    return numCartas;
}
/**
  @brief Devuelve la carta en la posición correspondiente.
  @pre i debe ser una posición válida en la baraja.
  @param i Indica la posición en la baraja.
  @return Devuelve la carta en la posición `i`.
*/
ClaseCarta & ClaseMano::carta(int i){
    return cartas[i];
}
/**
  @brief Devuelve el número de cartas comunes entre dos manos.
  @pre mano1 y mano2 deben ser objetos válidos en la clase ClaseMano
  @param mano1 es una de las manos que se va a comparar.
  @param mano2 es la otra mano que se va a comparar
  @return El número de cartas comunes.
  @post `numrepetidas` recoge el valor del numero de cartas comunes.
 */
int cartasComunes(ClaseMano & mano1, ClaseMano & mano2){
        int numrepetidas=0;
        for(int i = 0; i < mano1.numeroCartas();i++){
            for(int j = 0; j < mano2.numeroCartas();j++){             
                if(mano1.carta(i).numero() == mano2.carta(j).numero() &&
                        mano1.carta(i).paloCarta() == mano2.carta(j).paloCarta()){
                    numrepetidas++;
                }
            }
        }
        return numrepetidas;
    }
