// PRACTICA2DESDE0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cabecera.h"
#include "Crono.h"
#include <mmsystem.h>   // 📦 Cabecera donde se define MMTIME
#pragma comment(lib, "winmm.lib") // Necesario para las funciones multimedia

int main()
{
	setlocale(LC_ALL, "Spanish");

	/* struct {
		int entero;
		char car;
	} vEstructura = { 256, 1 }; // Define + inicializa la estructura
	union {
		int entero;
		char car;
		unsigned char matriz[4];

	}  vUnion = { 256 }; // Define + inicializa la unión

	vUnion.entero = 0x89abcdef; // byte 0: 0xef, byte 1: 0xcd, byte 2: 0xab, byte 3: 0x89
	printf("vUnion.entero vale 0x%x\n", vUnion.entero);
	printf("El valor del byte 2 de vUnion.entero es: 0x%x\n", 
		vUnion.matriz[2]);  // sustituir ??? por la xpresión que calcula el byte 2 de vUnion.entero 
		*/

	CronoInicio();
	Sleep(1200);
	double segs = CronoLee();

	MMTIME tiempo;

	printf("Han pasado %f segundos.\n", segs);
	printf("\nPor favor, pulse la tecla ENTRAR para terminar...\n");
	(void)getchar();
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
