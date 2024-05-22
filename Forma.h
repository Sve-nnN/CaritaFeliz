#pragma once

using namespace System;
using namespace System::Drawing;
class Forma
{
protected:
	int x,y,ancho,alto,dx=5, color;

public:
Forma();

~Forma();
void setX(int x);
void setY(int y);
int getX();
int getY();
void posInicial();
void mover(int dx);
virtual int getTipo() { return 0; };
virtual void mostrar(Graphics^ panel){ };
Brush^ asignarColor();
//Rectangle getRectangle();
};