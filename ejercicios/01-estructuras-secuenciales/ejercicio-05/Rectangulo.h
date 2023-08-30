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
    void setBase(float b);
    // Get base
    float getBase();
    // Set altura
    void setAltura(float a);
    // Get altura
    float getAltura();
    // Superficie del rectángulo
    float superficie();
    // Perímetro del rectángulo
    float perimetro();
};
#endif
