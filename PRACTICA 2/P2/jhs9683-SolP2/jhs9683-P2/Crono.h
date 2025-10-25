#pragma once
#include <stdint.h>
#include <stdio.h>
#include <Windows.h>

int P2c();

// Declaraciones asociadas a una clase.
namespace ss {

	class Crono {	// Declaración de la clase Crono

	private:	//opcional. por defecto todo es privad
		int64_t _ticsAntes = 0, _ticsPorSegundoDelTimerDelPC = -1;
		static const int TAM_CADENA_DEPURACION = 100;
	public:
		Crono();  // Constructor (opcional)
		~Crono(); // Destructor (opcional)
		void metodo(int par) {

		}
		bool inicio();
		double lee();

	}; // fin clase
}