#pragma once


#define _CRT_SECURE_NO_WARNINGS

#include <conio.h> // Para _kbhit y _getch
#include <windows.h> // Para Sleep y GetTickCount
#include <locale.h>
#include <iostream>
#include <cstdio> // Para printf
#include <intrin.h>
#include <array>

int esperaPulseTecla(int toutMs);
void LeeFabricanteCPU(char fabricante[], int tamfabricante);
void  LeeModeloCPU(char modelo[], int tamModelo);