#pragma once
#include "Forma.h"
class Rectangulo: public Forma
{
public:
	Rectangulo(int x, int y, int ancho, int alto, int color);
~Rectangulo();
	void mostrar(Graphics^ panel);
	
		int getTipo() {
			return 2;
	}
};

