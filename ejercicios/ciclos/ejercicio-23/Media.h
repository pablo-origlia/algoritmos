// Header archivo Media.h
#ifndef MEDIA_H
#define MEDIA_H

class Media {
private:
    float acumulador;
    int contador;
public:
    Media();
    void sumar(float numero);
    float getMedia(); 
};
#endif