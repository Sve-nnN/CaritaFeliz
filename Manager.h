#pragma once
#include "Circulo.h"
#include "Rectangulo.h"
//incluimos el vector
#include <vector>
using namespace std;
class Manager
{
private:
	Forma* cuadrado;
	Forma* circulo;

	//vector de formas
	vector<Forma*> formas;
public:
	Manager();
	~Manager();
	void dibujarFormas();
	//para hacer la cara
	void moverFormas();
	//para duplicar la cara 3 veces
	void replicarCara();

};

