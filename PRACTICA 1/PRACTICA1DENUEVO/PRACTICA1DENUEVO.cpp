// PRACTICA1DENUEVO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "jhs9683-P1.h"

int main()
{
	setlocale(LC_ALL, "Spanish");
	
	/* printf("Pulsa una tecla para salir \n");
	short int contador = 0;
	int tecla = 0;
	printf("Tam. contador: %d bytes\n", sizeof(contador));
	while (tecla == 0)
	{
		printf("\r%d        ", ++contador);
		tecla = esperaPulseTecla(0);
	}
	*/

	/* char fab[13];
	int tam = sizeof(fab);
	int nroDeElementos = sizeof(fab) / sizeof(fab[0]);
	LeeFabricanteCPU(fab, nroDeElementos);
	printf("El fabricante de la CPU es: %s\n", fab);
	*/

	//char modelo[64];  // espacio suficiente para la cadena del modelo
	char modelo[64];

	LeeModeloCPU(modelo, sizeof(modelo));  // llamada a la función

	printf("Modelo de la CPU: %s\n", modelo);

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
