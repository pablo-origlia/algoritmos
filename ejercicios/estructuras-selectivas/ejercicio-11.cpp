/*
 * 11. Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel
 * diciendo qué opción se eligió o si fue una opción incorrecta.
 */
#include <iostream>

using namespace std;

bool esOpcionValida(char op, char *opciones,int length) {
    int result = -1;
    
    for(int i = 0; i < length; i++) {
        if(op == opciones[i]) {
            result = i;
            break;
        }
    }
    return (result != -1);
}

int main()
{
    char operador;
    char operadores[] = {'+','-','*','/'};

    cout << "Seleccione una opción que puede ser\n+: suma\n–: resta\n*: multiplicación\n/: división." << endl;
    cin >> operador;
 
    cout << "La opción " << operador << (esOpcionValida(operador,operadores,4)? " es correcta." : " no es correcta.") << endl;

    return 0;
}