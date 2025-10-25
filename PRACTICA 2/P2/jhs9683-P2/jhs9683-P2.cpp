// jhs9683-P2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "jhs9683-P2.h"
#include "Crono.h"


int main(int argc, char* argv[], char* envp[])
{    
    setlocale(LC_ALL, "Spanish");

    // Un experimento con estructuras y uniones
    // 
    // Un struct en C agrupa varias variables bajo un mismo nombre, 
    // cada una con su propia zona de memoria.
   
    
    /* struct {
        int entero; // 4 bytes pero en struct
        char car; // 1 byte
    } vEstructura = { 256, 1 }, vEstructura2; // Define + inicializa la estructura
    // Un union en C comparte la misma zona de memoria para todos sus campos, 
    // ocupando el tamaño del mayor.
    union {
        int entero;
        char car;
        unsigned char matriz[4];
    } vUnion = { 256 }; // Define + inicializa la unión

    vUnion.car = 1;

    vUnion.entero = 0x89abcdef; // byte 0: 0xef, byte 1: 0xcd, byte 2: 0xab, byte 3: 0x89
    printf("vUnion.entero vale 0x%x\n", vUnion.entero);
    // EJERCICIO 2.8;
    printf("El valor del byte 2 de vUnion.entero es: 0x%x\n", vUnion.entero >> (2*8) & 0xff);  // sustituir ??? por la xpresión que calcula el byte 2 de vUnion.entero 
    printf("Estructura: %d Tam: %d\n", vEstructura.entero, sizeof(vEstructura));
    printf("Union: %d Tam: %d\n", vUnion.entero, sizeof(vUnion));


    // EJERCICIO 2.9
    printf("El valor del byte 2 de vUnion.entero es: 0x%x\n", vUnion.matriz[2]);
    */

    
    TestClase();


    printf("\nPor favor, pulse la tecla ENTRAR para terminar...\n");
    (void)getchar();
    return 0;
}

void TestClase() {
    ss::Crono crono, cronoFor;
    cronoFor.Inicio();
    for (int i = 0; i < 4; i++)
    {
        crono.Inicio();
        Sleep(1200);
        double segs = crono.Lee();
        printf("Han pasado %f segundos.\n", segs);
    }
    printf("\nEn el for de 4 iteraciones:%f\n ", cronoFor.Lee());
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
