#include "pch.h"
#include "Circulo.h"

Circulo::Circulo(int x, int y, int alto, int ancho, int color) {
	this->y = y;
	this->x = x;
	this->ancho = alto;
	this->alto = alto;

}

void Circulo::mostrar(Graphics^ panel) {
	Brush^ c;
	switch (color)
	{
	case 0: c = Brushes::Red;		break;
	case 1: c = Brushes::Orange;		break;
	case 2: c = Brushes::Yellow;		break;
	case 3: c = Brushes::Blue;		break;
	case 4: c = Brushes::Green;		break;
	case 5: c = Brushes::Violet;		break;
	default: c = Brushes::Red;		break;

	}
	panel->FillEllipse(c, x, y, ancho, alto);
}