/*
 * 3. Dadas las primitivas de listas vistas en clase se pide escribir el método
 *    de instancia Lista* EliminarYRetornarImpares() que elimine de la lista 
 *    original todos los elementos que se encuentren en posiciones impares y 
 *    los retorne en una nueva lista manteniendo el orden entre los elementos.
 * 
 * Por ejemplo:
 * 
 * - Si la lista es [2,5,4,3], la lista deber a quedar como [2,4] y debe 
 *   devolver [5,3]
 * 
 * - Si la lista es [3,8,3], la lista deber a quedar como [3,3] y debe 
 *   devolver [8]
 * 
 * - Si la lista es [], la lista deber a quedar como [] y debe devolver []
 * 
 * - Si la lista es [4], la lista deber a quedar como [4] y debe devolver []
 */
#include "nodo.h"
#include "lista.h"
#include <iostream>

using namespace std;

int main()
{
    Lista *lista = new Lista();
/*  
*/
    lista->alta(2,1);
    lista->alta(5,2);
    lista->alta(4,3);
    lista->alta(3,4);
/*
    lista->alta(3,1);
    lista->alta(8,2);
    lista->alta(3,3);
    
    lista->alta(4,1);
*/

    cout << "El largo de la lista : " << lista->obtener_largo() << endl;
    cout << "Esta vacia la lista : " << lista->vacia() << endl;
    cout << "Lista = ";
    lista->mostrar();
    
    cout << "Lista con los impares = ";
    
    Lista *listaImpares;

    listaImpares = lista->eliminarYRetornarImpares();
    listaImpares->mostrar();
    cout << "Lista = ";
    lista->mostrar();

    return 0;
}