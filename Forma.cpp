#include "pch.h"
#include "Forma.h"

Forma::Forma() {
	x = 30;
	alto = ancho = 30;
	Random r;
	dx = r.Next(4, 10);
	color = r.Next(5, 16);
	System::Threading::Thread::Sleep(10);
}
Forma::~Forma(){}
void Forma::posInicial() {
	x = 20;
	Random v;
	dx = v.Next(5, 16);
	System::Threading::Thread::Sleep(10);

}
void Forma::setX(int x) {
	this->x = x;
}

int Forma::getX() {
	return x;
}
void Forma::setY(int y) {
	this->y = y;
}
int Forma::getY() {
	return y;
}
void Forma::mover(int dx) {
	x += dx;
}

Brush^ Forma::asignarColor() {
	switch (color)
	{
	case 0: return Brushes::Red;		break;
	case 1: return Brushes::Orange;		break;
	case 2: return Brushes::Yellow;		break;
	case 3: return Brushes::Blue;		break;
	case 4: return Brushes::Green;		break;
	case 5: return Brushes::Violet;		break;
	default: return Brushes::Red;		break;

	}
}