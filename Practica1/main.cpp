#include <iostream>
#include "ClaseCarta.h"
#include "ClaseMano.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {
 //pruebas de la clase carta
    tipopalo palo = bastos;
    ClaseCarta una(palo,3);
    cout << una.to_string() << endl;
    palo = oros;
    una.modificaCarta(palo,1);
    cout << una.to_string() << endl;
    cout << una.numero() << " de " << una.paloCartastring() << endl;
    cout << endl << endl;
    
     //pruebas de la clase Mano
    ClaseMano jugador1;
    ClaseMano jugador2;
    
    ClaseCarta orossota(oros,8);
    ClaseCarta bastos3(bastos,3);
    ClaseCarta espadas4(espadas,4);
    ClaseCarta oros2(oros,2);
    
    jugador1.aniadeCarta(orossota);
    jugador1.aniadeCarta(espadas4);
    jugador1.aniadeCarta(oros2);
    
    jugador2.aniadeCarta(bastos3);
    jugador2.aniadeCarta(oros2);
    jugador2.aniadeCarta(espadas4);

    cout << "Baraja jugador 1: " << endl << jugador1.to_string() << endl;
    cout << "Baraja jugador 2: " << endl << jugador2.to_string() << endl;
    cout << "Cartas en común: " << cartasComunes(jugador1,jugador2) << endl << endl << endl;
    
    jugador2.descartaCarta(0);
    cout << "Baraja jugador 2: " << endl << jugador2.to_string() << endl;
    
    jugador1.cambiaCarta(bastos3,1);
    cout << "Baraja jugador 1: " << endl << jugador1.to_string() << endl;
    cout << "Cartas en común: " << cartasComunes(jugador1,jugador2) << endl;
    return 0;
   
}