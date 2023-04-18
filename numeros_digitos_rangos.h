#pragma once
#include <iostream>

using namespace std;

void numeros_digitos_rangos()
{
    int a;
    int b;
    int c;
    int resultado = 0;
    char n[2];
    int m;
    int t;
    int s;
    int max;
    int min;
    int num;
    system("cls");
    //primera parte de la tarea
    cout << "escriba un numero" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "el numero es negativo" << endl;
    }
    else {
        if (a > 0)
        {
            cout << "el numero es positivo" << endl;
        }
        else
        {
            if (a == 0)
            {
                cout << "el numero es igual 0" << endl;
            }
        }
    }
    //segunda parte de la tarea
    cout << "escribe un numero de dos digitos" << endl;
    cin >> b;
    while (b != 0) {
        c = b % 10;//con esta operación obtenemos el último dígito de b.
        b /= 10; //esta operación es equivalente a decir b = b / 10 y divide el valor de b entre 10, el número resultante pierde su último dígito
        resultado += c;// esta operación es equivalente a decir resultado = resultado + c, suma el valor en la variableresultado con el valor en c y luego lo asigna de nuevo a la variable resultado.
    }
    cout << "La suma de los digitos es: " << resultado << endl;
    //tercera parte de la tarea
    cout << "escribe un numero de dos digitos" << endl;
    cin >> n;//lo convertimos en un arreglo
    if (((n[0] % 2) == 0))
    {
        cout << "el digito que es par es " << n[0] << endl;
    }
    else {
        if (((n[1] % 2) == 0))
        {
            cout << "el digito que es par es " << n[1] << endl;
        }
        else {
            if (((n[0] % 2) == 0) && ((n[1] % 2) == 0))
            {
                cout << "los dos digitos son par " << n[0] << n[1] << endl;
            }
            else {
                cout << "ninguno es par" << endl;
            }
        }
    }

    //cuarta parte de la tarea
    cout << "escribe tres numeros" << endl;
    cin >> m;
    cin >> t;
    cin >> s;
    if (m > t && m > s)
    {
        cout << "el numero mayor es " << m << endl;
    }
    else {
        if (t > m && t > s)
        {
            cout << "el numero mayor es " << t << endl;
        }
        else {
            cout << "el numero mayor es " << s << endl;
        }
    }
    //quinta parte de la tarea
    cout << "escribe el rango mayor y rango menor" << endl;
    cin >> max;
    cin >> min;
    for (num = min; num <= max; num++)

        if (num % 2 == 0)
            cout << "los numeros pares son " << num << endl;
    
}


