/*
 * 12. Pasar un período expresado en segundos a un período expresado en días, 
 * horas, minutos y segundos.
 */
#include <iostream>
#include <string>

using namespace std;

// 1d -> 24h -> 86400s
// 1h -> 60m -> 3600s
// 1m -> 60s 

string toDhms(int segundos)
{
    int dias, restoDias, horas, restoHoras, minutos, restoSegundos;
    string result;
    
    dias = segundos / 86400;
    restoDias = segundos % 86400;
    horas = restoDias / 3600;
    restoHoras = restoDias % 3600;
    minutos = restoHoras / 60;
    restoSegundos = restoHoras % 60;
    
    return to_string(dias) + "d " + to_string(horas) + "h "+ to_string(minutos) + "m "+ to_string(restoSegundos) + "s";
}

int main()
{
    int segundos;

    cout << "Ingrese un periodo en segundos: ";
    cin >> segundos;
 
    cout << "Es equivalente a " << toDhms(segundos) << endl;

    return 0;
}