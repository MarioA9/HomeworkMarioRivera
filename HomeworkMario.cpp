#include <iostream>
#include "GuessMyNumber.h"
using namespace std;
int main()
{
    int tarea;
    cout << "bienvenido a Homeworks de Mario Rivera\n";
    cout << "elige una de las tareas porfavor: \n1-GuessMyNumber\n2-tarea\n3-tarea\n4-tarea\n5-tarea\n";
    cin >> tarea;

    switch (tarea) {
    case 1:
        GuessMyNumber();
        break;

    case 2:
        cout << "sin informacion";
        break;

    case 3:
        cout << "sin informacion";
        break;

    case 4:
        cout << "sin informacion";
        break;

    case 5:
        cout << "sin informacion";
    }
}