#pragma once
#include "Circulo.h"
#include "Rectangulo.h"
#include "Forma.h"
//incluimos el vector
#include <vector>
using namespace std;
class Cara:public Forma
{
private:
	int ojo1X, ojo1Y, ojo2X, ojo2Y, bocaX, bocaY;
	Forma* cuadrado;
	Forma* circulo;

	//vector de formas
	vector<Forma*> formas;
public:
	Cara(int ancho, int alto);
	~Cara();
	//Pinta las formas en cualquier posicion
	void dibujarPosicionRandom(Graphics^ panel);
	//para hacer la cara
	void moverFormas();
	//para duplicar la cara 3 veces
	void replicarCara();
	void moverC(int dx);

};

