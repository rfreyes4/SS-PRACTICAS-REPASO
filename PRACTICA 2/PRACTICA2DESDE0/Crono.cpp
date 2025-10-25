#include "Crono.h"
int64_t _ticsAntes = 0, _ticsPorSegundoDelTimerDelPC = -1;





bool CronoInicio()
{
	bool res = false;

	// Paso 1: Obtiene la frecuencia del timer del PC en tics/segundo usando QueryPerformanceFrequency
	//   Esta frecuencia depende del hardware del PC y no cambia durante la ejecuci�n del programa
	if (_ticsPorSegundoDelTimerDelPC < 0){
		// No se ha calculado la frecuencia a�n. Se calcula ahora
		LARGE_INTEGER frequencia;
		char _cadDbg[200];

		if (QueryPerformanceFrequency(&frequencia))	{
			_ticsPorSegundoDelTimerDelPC = frequencia.QuadPart;
			snprintf(_cadDbg, sizeof(_cadDbg), "La frecuencia del contador del PC es %d Hz\n",
				_ticsPorSegundoDelTimerDelPC);
			OutputDebugStringA(_cadDbg);
		}
		else {
			OutputDebugStringA("Error al ejecutar QueryPerformanceCounter en " __FUNCTION__);
		}
	}
	if (_ticsPorSegundoDelTimerDelPC > 0){
		// Paso 2: guarda el valor actual del timer del PC en tics usando QueryPerformanceCounter 
		LARGE_INTEGER ticks;
		if (QueryPerformanceCounter(&ticks)) {
			_ticsAntes = ticks.QuadPart;
			res = true;
		}
		else {
			OutputDebugStringA("Error al ejecutar QueryPerformanceCounter en " __FUNCTION__);
		}
	}
	return res;
}

double CronoLee()
{
	double segundos= -1.0;
	// Paso 3: Obtiene el valor actual del timer del PC en tics usando QueryPerformanceCounter
	// y le resta el valor guardado en el paso 2 para obtener el n�mero de tics transcurridos.
	// Divide este n�mero por la frecuencia del timer del PC para obtener el n�mero de segundos transcurridos.
	int64_t ahora;
	LARGE_INTEGER ticks;
	if (QueryPerformanceCounter(&ticks)) {
		ahora = ticks.QuadPart;
		segundos = (double)(ahora - _ticsAntes) / _ticsPorSegundoDelTimerDelPC;
	}
	else {
		printf("Error al ejecutar QueryPerformanceCounter en " __FUNCTION__);
	}
	return segundos;
}