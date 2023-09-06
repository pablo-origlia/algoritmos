/*
 * 2. Dadas las primitivas de listas vistas en clase, decimos que un par de 
 *    números (a, b) son contiguos divisibles en la lista si a aparece justo 
 *    antes que b y a es divisible por b.
 * 
 * De acuerdo a esta definición, se pide escribir el método de instancia void
 * separarContiguosDivisibles() que por cada par (a, b) de contiguos divisibles 
 * de la lista, se agrega entre ellos el número a/b.
 * 
 * Por ejemplo:
 * 
 * - Si la lista es [20, 10, 6, 3], los pares de contiguos divisibles son 
 *   (20,10) y (6,3), y por lo tanto la lista debería quedar como 
 *   [20, 2, 10, 6, 2, 3].
 * 
 * - Si la lista es [20, 10, 2, 3], los pares de contiguos divisibles son 
 *   (20,10) y (10,2), y por lo tanto la lista debería quedar como 
 *   [20, 2, 10, 5, 2, 3].
 * 
 * - Si la lista es [7, 6, 2, 7, 6], el único par de contiguos divisibles es 
 *   (6,2) con lo cual la lista debería quedar como [7, 6, 3, 2, 7, 6].
 * 
 * - Si la lista es [1, 1], el par (1,1) es de contiguos divisibles y por lo 
 *   tanto la lista debería quedar como [1, 1, 1].
 * 
 * - Si la lista es [50, 5], el par (50,5) es de contiguos divisibles y por lo 
 *   tanto la lista debería quedar como [50, 10, 5].
 * 
 * Notar que la nueva lista contiene el par de contiguos consecutivos (10,5), 
 * sin embargo, este par no se separa por no ser parte de la lista original.
 */
#include "nodo.h"
#include "lista.h"
#include <iostream>

using namespace std;

int main()
{
    Lista *lista = new Lista();
/*   
    lista->alta(20,1);
    lista->alta(10,2);
    lista->alta(6,3);
    lista->alta(3,4);
*/
/*

    lista->alta(20,1);
    lista->alta(10,2);
    lista->alta(2,3);
    lista->alta(3,4);
    
    lista->alta(7,1);
    lista->alta(6,2);
    lista->alta(2,3);
    lista->alta(7,4);
    lista->alta(6,5);

    lista->alta(1,1);
    lista->alta(1,2);

    lista->alta(50,1);
    lista->alta(5,2);
*/

    cout << "El largo de la lista : " << lista->obtener_largo() << endl;
    cout << "Esta vacia la lista : " << lista->vacia() << endl;
    cout << "Lista = ";
    lista->mostrar();
    
    lista->separarContiguosDivisibles();
    
    cout << "Lista con Contiguos Divisibles = ";
    lista->mostrar();

    return 0;
}