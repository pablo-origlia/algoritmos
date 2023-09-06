/*
 * 1. Dadas las primitivas de listas vistas en clase, se pide escribir el 
 *    método de instancia _void insertarProductos()_ que inserte entre cada 
 *    par de elementos de la lista, el producto de tales elementos.
 * 
 *    Por ejemplo:
 *    - Si la lista es [2,5,4,3], debería quedar como [2,10,5,20,4,12,3].
 *    - Si la lista es [3,3,3], la lista debería quedar como [3,9,3,9,3].
 *    - Si la lista es [], la lista debería quedar como [].
 *    - Si la lista es [4], la lista debería quedar como [4]. 
 */
#include "nodo.h"
#include "lista.h"
#include <iostream>

using namespace std;

int main()
{
    Lista *lista = new Lista();
/*
    lista->alta(2,1);
    lista->alta(5,2);
    lista->alta(4,3);
    lista->alta(3,4);

    lista->alta(4,1);
*/
/*
    lista->alta(3,1);
    lista->alta(3,2);
    lista->alta(3,3);
*/

    cout << "El largo de la lista : " << lista->obtener_largo() << endl;
    cout << "Esta vacia la lista : " << lista->vacia() << endl;
    cout << "Lista = ";
    lista->mostrar();
    
    lista->insertarProductos();
    
    cout << "Lista con Productos = ";
    lista->mostrar();

    return 0;
}