// Implementacion archivo Rectangulo.cpp
 
#include "Rectangulo.h"
#include <iostream>
#include <cmath>

using namespace std;
 
// Constructor
Rectangulo::Rectangulo(float b, float a)
{
    base = b;
    altura = a;
}

// Set base
void Rectangulo::setBase(float b)
{
    if (b >= 0.0) 
      base = b;
}

// Get base
float Rectangulo::getBase()
{
    return base;
}

// Set altura
void Rectangulo::setAltura(float a)
{
    if (a >= 0.0) 
      altura = a;
}

// Get altura
float Rectangulo::getAltura()
{
    return altura;
}

// Superficie del rectángulo
float Rectangulo::superficie()
{
    return this->base * this->altura;
}

// Perímetro del rectángulo
float Rectangulo::perimetro()
{
    return 2 * this->base + 2 * this->altura;
}
