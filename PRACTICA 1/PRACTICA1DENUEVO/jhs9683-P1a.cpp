#include <conio.h> // Para _kbhit y _getch
#include <windows.h> // Para Sleep y GetTickCount
#include <locale.h>
#include <iostream>
#include <cstdio> // Para printf
#include <intrin.h>
#include <array>

// y esto a su archivo nusuario-P1a.cpp
int esperaPulseTecla(int toutMs)
{

	int res = 0;
	int antes = GetTickCount();
	int ahora;
	if (toutMs < 0) {
		printf("ERROR: esperaPulseTecla: el tiempo de espera no puede ser negativo\n");
		exit(EXIT_FAILURE);
	}
	do {
		if (_kbhit())
		{
			res = _getch();
			break;
		}
		if (toutMs > 0)
			Sleep(1);
		ahora = GetTickCount();
	} while (ahora - antes < toutMs);
	return res;
}