// Header archivo Rectangulo.h
#ifndef RECTANGULO_H
#define RECTANGULO_H
 
class Rectangulo {
private:
    float base;
    float altura;
 
public:
    // Constructor
    Rectangulo(float b, float a);
    // Set base
    void Rectangulo::setBase(float b);
    // Get base
    float Rectangulo::getBase();
    // Set altura
    void Rectangulo::setAltura(float a);
    // Get altura
    float Rectangulo::getAltura();
    // Superficie del rectángulo
    float Rectangulo::superficie();
    // Perímetro del rectángulo
    float Rectangulo::perimetro();
};
#endif
