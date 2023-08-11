/*
 * 11. Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel
 * diciendo qué opción se eligió o si fue una opción incorrecta.
 */
#include <iostream>

using namespace std;

int length(char *array) {
     return sizeof(array)/sizeof(array[0]);
}

bool esOpcionValida(char op, char *opciones) {
    int result = -1;

    for(int i = 0; i < length(opciones); i++)
    {
        if(opciones[i] == op)
        {
            result = i;
            break;
        }
    }
    return (result != -1);
}

int main()
{
    char operador = ' ';
    char operadores[] = {'+','-','*','/'};

    cout << "Seleccione una opción que puede ser +: suma, –: resta, *: multiplicación o /: división.";
    cin >> operador;
 
    cout << "La opción " << operador << (esOpcionValida(operador,operadores)? " es correcta." : " no es correcta.") << endl;

    return 0;
}