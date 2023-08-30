#include <iostream>
#include "Media.h"

Media::Media() {
    acumulador = 0.0;
    contador = 0;
}
void Media::sumar(float numero) {
    this->acumulador += numero;
    this->contador++;
}
float Media::getMedia() {
    return (float) this->acumulador / this->contador;
}
