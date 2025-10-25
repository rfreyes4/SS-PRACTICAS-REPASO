#pragma once
#include <stdint.h>
#include <stdio.h>
#include <Windows.h>

bool CronoInicio();
double CronoLee();


namespace ss {

	class Crono {	// Declaración de la clase Crono

	private:	//opcional. por defecto todo es privad
		int64_t _ticsAntes = 0, _ticsPorSegundoDelTimerDelPC = -1;
	public:
		Crono();  // Constructor (opcional)
		~Crono(); // Destructor (opcional)
		void Inicio();
		double Lee();
	}; // fin clase


} // fin namespace ss

// fin namespace ss