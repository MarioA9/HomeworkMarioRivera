#pragma once
#include <iostream>
#include <ctime>

using namespace std;

void piedra_papel_tijeras()
{
	int jug, maq;
	int winJ=0;
	int winM=0;
	int ans;
	system("cls");
	cout << "Vamos a jugar piedra, papel o tijeras" << endl;
	while (1)
	{
		cout << "elige una opcion: \n1.piedra \n2.papel \n3.tijeras" << endl;
		cin >> jug;
		if (jug == 4 || jug > 4)
		{
			cout << "opcion no valida, elige una opcion entre 1 a 3" << endl;
			return piedra_papel_tijeras();
		}
		if (jug == 1)
		{
			cout << "jugador: piedra" << endl;
		}
		else {
			if (jug == 2)
			{
				cout << "jugador: papel" << endl;
			}
			else {
				if (jug == 3)
				{
					cout << "jugador: tijeras" << endl;
				}
			}
		}
		srand(time(NULL));
		maq = (rand() % 3) + 1;
		if (maq == 1)
		{
			cout << "maquina: piedra" << endl;
		}
		if (maq == 2)
		{
			cout << "maquina: papel" << endl;
		}
		if (maq == 3)
		{
			cout << "maquina: tijeras" << endl;
		}
		//se hace la comparacion
		if (jug == 1 && maq == 3 || jug == 2 && maq == 1 || jug == 3 && maq == 2)
		{
			cout << "Gana el jugador!!" << endl;
			winJ++;
			cout << "jugador: " << winJ << " maquina: " << winM << endl;
		}
		else {
			if (jug == 3 && maq == 1 || jug == 1 && maq == 2 || jug == 2 && maq == 3)
			{
				cout << "Gana la maquina!!" << endl;
				winM++;
				cout << "jugador: " << winJ << " maquina: " << winM << endl;
			}
			else {
				if (jug == 1 && maq == 1 || jug == 2 && maq == 2 || jug == 3 && maq == 3)
				{
					cout << "es un empate!!" << endl;					
				}
			}
		}
		//verifica los resultados
		if (winJ == 2)
		{
			cout << "Ganaste!!! gracias por jugar. \n quieres jugar otra vez? \n1.si \n2.no" << endl;
			cin >> ans;
			if (ans == 1)
			{
				return piedra_papel_tijeras();
			}
			else {
				if (ans == 2)
				{
					return;
				}
				else {
					if (ans = !1, 2) {
						cout << "opcion invalida, cerrando juego" << endl;
						return;
					}
				}
			}
		}
		else {
			if (winM == 2)
			{
				cout << "Perdiste!!! gracias por jugar. \n quieres jugar otra vez? \n1.si \n2.no" << endl;
				cin >> ans;
				if (ans == 1)
				{
					return piedra_papel_tijeras();
				}
				else {
					if (ans == 2)
					{
						return;
					}
					else {
						if (ans = !1, 2) {
							cout << "opcion invalida, cerrando juego" << endl;
							return;
						}
					}
				}
			}
		}

	}
}
