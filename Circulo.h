#pragma once
#include "Forma.h"
class Circulo:public Forma
{
public: 
	Circulo(int x, int y, int ancho, int alto, int color);
	void mostrar(Graphics^ panel);
	int getTipo() {
		return 1;
	}
};

