#include "pch.h"
#include "Rectangulo.h"

Rectangulo::Rectangulo(int x, int y, int ancho, int alto, int color) {
	this->y = y;
	this->x = x;
	this->ancho = ancho;
	this->alto = alto;
}
void Rectangulo::mostrar(Graphics^ panel) {
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
	panel->FillRectangle(asignarColor(), x, y, ancho, alto);
}