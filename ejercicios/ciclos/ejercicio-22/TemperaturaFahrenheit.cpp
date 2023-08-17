#include "TemperaturaFahrenheit.h"
#include <iostream>

using namespace std;

// Constructor
TemperaturaFahrenheit::TemperaturaFahrenheit(float temp)
{
    valor = temp;
}

float TemperaturaFahrenheit::aCelsius() {
    return (5.0/9.0) * (this->valor - 32.0);
}

void TemperaturaFahrenheit::setValor(float temp) {
    valor = temp;
}

float TemperaturaFahrenheit::getValor() {
    return this->valor;
}