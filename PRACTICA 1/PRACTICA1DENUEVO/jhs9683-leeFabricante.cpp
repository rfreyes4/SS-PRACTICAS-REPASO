#include "jhs9683-P1.h"

void LeeFabricanteCPU(char fabricante[], int tamfabricante)
{
    int info[4];
    __cpuid(info, 0);

    int* puntero = (int*)fabricante;
    // 	memcpy(&fabricante[1 * 4], &info[3], 4);

    //  memcpy(modelo + i * sizeof(info), info, 16);
    puntero[0] = info[1];
    puntero[1] = info[3];
    puntero[2] = info[2];

    fabricante[tamfabricante - 1] = '\0';
}
