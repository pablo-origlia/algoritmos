// Header archivo TemperaturaFahrenheit.h
#ifndef TEMPERATURAFAHRENHEIT_H
#define TEMPERATURAFAHRENHEIT_H

class TemperaturaFahrenheit {
private:
    float valor;
public:
    TemperaturaFahrenheit(float temperatura);
    float aCelsius();
    void setValor(float temperatura);
    float getValor();
};
#endif
