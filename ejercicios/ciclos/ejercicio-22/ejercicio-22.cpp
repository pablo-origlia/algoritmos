/*
 * 22. La relación entre temperaturas Celsius y Fahrenheit está dada por: 
 *     C = 5/9 * (F – 32). Escribir un algoritmo que haga una tabla de valores 
 *     Celsius-Fahrenheit, para valores entre OºF y 200ºF, a intervalos de 10º.
 */
#include <iostream>
#include "TemperaturaFahrenheit.h"

using namespace std;

int main() {

    TemperaturaFahrenheit tempF(0.0);

    cout << "T [°F]\tT [°C]" << endl;
    for (int t=0; t<=200; t+=10) {
        tempF.setValor(t);
        cout << tempF.getValor() << "\t" << tempF.aCelsius() << endl;
    }

    return 0;
}