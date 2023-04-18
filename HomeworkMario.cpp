#include <iostream>
#include "GuessMyNumber.h"
#include "numeros_digitos_rangos.h"
#include "piedra_papel_tijeras.h"
using namespace std;
int main()
{
    int tarea;
    cout << "bienvenido a Homeworks de Mario Rivera\n";
    cout << "elige una de las tareas porfavor: \n1-GuessMyNumber\n2-numeros_digitos_rangos\n3-piedra_papel_tijeras\n4-tarea\n5-tarea\n";
    cin >> tarea;

    switch (tarea) {
    case 1:
        GuessMyNumber();
        break;

    case 2:
        numeros_digitos_rangos();
        break;

    case 3:
        piedra_papel_tijeras();
        break;

    case 4:
        cout << "sin informacion";
        break;

    case 5:
        cout << "sin informacion";
        break;
    }
}