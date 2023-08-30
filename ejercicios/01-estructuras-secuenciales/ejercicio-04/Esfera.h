// Header archivo Esfera.h
#ifndef ESFERA_H
#define ESFERA_H

class Esfera {
private:
    float radio;
 
public:
    // Constructor
    Esfera(float r);
    // Set radio
    void setRadio(float r);
    // Get radio
    float getRadio();
    // Superficie de la esfera
    float superficie();
    // Volumen de la esfera
    float volumen();
};
#endif
