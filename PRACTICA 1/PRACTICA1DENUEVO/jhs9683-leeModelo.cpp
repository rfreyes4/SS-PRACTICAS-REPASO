#include "jhs9683-P1.h"

void  LeeModeloCPU(char modelo[], int tamModelo)
{
	int info[4];
	__cpuid(info, 0x80000000);	// Comprueba que el procesador soporta las caracteristicas extendidas de EAX
	if (info[0] < 0x80000000)
	{
		strncpy(modelo,
			"La CPU no soporta caracteristicas extendidas de CPUID\n",
			tamModelo - 1);
	}
    else
    {
        // Copia los bloques de 16 bytes devueltos por cada llamada
        for (int i = 0; i < 3; i++) {
            __cpuid(info, 0x80000002 + i);
            memcpy(&modelo[i * 16], info, 16);
          //  memcpy(modelo + i * sizeof(info), info, 16);
        }

        modelo[tamModelo - 1] = '\0'; // terminador nulo por seguridad
    }
}