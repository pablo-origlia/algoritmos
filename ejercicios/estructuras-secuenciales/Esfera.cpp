// Implementacion archivo Esfera.cpp
 
#include "Esfera.h"
#include <iostream>
#include <cmath>

using namespace std;
 
// Constructor
Esfera::Esfera(float r)
{
    radio = r;
}

// Set radio
void Esfera::setRadio(float r)
{
    if (r >= 0.0) 
      radio = r;
}

// Get radio
float Esfera::getRadio()
{
    return radio;
}

// Superficie de la esfera
float Esfera::superficie()
{
    return 4.0 * M_PI * pow(this->radio, 2);
}

// Volumen de la esfera
float Esfera::volumen()
{
    return 4.0 * M_PI * pow(this->radio, 3) / 3.0;
}
