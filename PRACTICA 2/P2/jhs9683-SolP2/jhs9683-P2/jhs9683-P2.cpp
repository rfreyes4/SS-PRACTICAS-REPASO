// jhs9683-P2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "jhs9683-P2.h"
#include "Crono.h"
#pragma pack(1)

typedef int entero_t;

/*typedef  struct tipoEstructura {
	int entero;
	char car;
} tipoEstructura_t;

struct tipoEstructura2 {
	int entero;
	char car;
};

typedef struct{
	int entero;
	char car;
} tipoEstructura_2;


entero_t var1, var2, var3;
tipoEstructura_t es1;
tipoEstructura es2;
*/

static void TestClase() {
	ss::Crono crono;
	crono.inicio();
	Sleep(1200);
	double segs = crono.lee();
	printf("Han pasado %f segundos.\n", segs);
}
int main()
{
	setlocale(LC_ALL, "Spanish");
    /*struct {
	int entero;
	char car;
	// SI aumentas el tamñano de variables, el tamaño de la estructura aumenta debido al alineamiento;


	} vEstructura = { 256, 1 }, *pEstructura; // Define + inicializa la estructura
	union {
		int entero;
		char car;
		char matriz[4]; // Agregando esto se hace el ejercicio 2.9
	}  vUnion = { 256 }, *pUnion; // Define + inicializa la unión
	
	pEstructura = &vEstructura;
	vEstructura.entero++;
	pEstructura->entero;

	int a, * p, matriz[10];
	p = &a;
	p =&(vEstructura.entero);
	p = &(vUnion.entero);

	vEstructura.entero = 0x89abcdef;
	vUnion.entero = 0x89abcdef; // byte 0: 0xef, byte 1: 0xcd, byte 2: 0xab, byte 3: 0x89
	printf("Estructura car: 0x%02x Tam %d\n", vEstructura.car , sizeof(vEstructura));
	printf("Union car: 0x%02x Tam %d\n", vUnion.car, sizeof(vUnion));
	printf("vUnion.entero vale 0x%x\n", vUnion.entero);
	printf("El valor del byte 2 de vUnion.entero es: 0x%x\n",
		(vUnion.entero >> 8*2)& 0xff ); // calcular el byte 2
	printf("El valor del byte 2 de vUnion.entero es: 0x%x\n",
		vUnion.matriz[2]); // 2.9
	*/


//P2c();
	
	//TestClase();

	struct {
		int entero;
		unsigned char car;
	} vEstructura = { 256, 1 }; // Define + inicializa la estructura
	union {
		int entero;
		unsigned char car;
	}  vUnion = { 256 }; // Define + inicializa la unión

	vEstructura.entero = 0x89abcdef;
	vUnion.entero = 0x89abcdef; // byte 0: 0xef, byte 1: 0xcd, byte 2: 0xab, byte 3: 0x89
	printf("vEstructura: car:  0x%02x Tam: %d\n", vEstructura.car, sizeof(vEstructura));
	printf("Union: car: 0x%02x Tam: %d\n", vUnion.car, sizeof(vUnion));


	printf("\nPor favor, pulse una tecla ENTRAR para terminar ...\n");
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
