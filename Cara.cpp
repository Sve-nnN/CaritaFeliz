#include "pch.h"
#include "Cara.h"
using namespace System::Drawing;
Cara::Cara(int ancho, int alto){
	ojo1X = 25;
	ojo1Y = 30;
	ojo2X =75;
	ojo2Y = 30;
	bocaX = 50;
	bocaY = 75;
	Random r;

	//Boca
	formas.push_back(new Rectangulo(r.Next(1, ancho-1 ), r.Next(1, alto-1),50,25, 1));
	//Ojos
	formas.push_back(new Circulo(r.Next(1, ancho - 1), r.Next(1, alto - 1), 50, 50, 3));
	formas.push_back(new Circulo(r.Next(1, ancho - 1), r.Next(1, alto - 1), 50,50, 3));
	//Nariz
	formas.push_back(new Rectangulo(r.Next(1, ancho - 1), r.Next(1, alto - 1),25,50, 5));
	//Cara
	formas.push_back(new Circulo(10, 10, 200,200, 6));
}
Cara::~Cara(){
	for (int i = 0; i < formas.size(); i++){
		delete formas[i];
	}
}
void Cara::dibujarPosicionRandom(Graphics^ panel){
	panel->Clear(Color::White);

	for (int i = 0; i < formas.size(); i++){
		formas[i]->mostrar(panel);
	}
}
void Cara::moverC(int dx){
	for (int i = 0; i < formas.size(); i++){
		//Si la forma es un circulo, mover a la posicion del ojo
		//Circulo es tipo 1, rectangulo tipo 2
		if (formas[i]->getTipo() == 1){
			//Si no ha llegado a la posicion del ojo, mover
			if ((formas[i]->getX() != ojo1X && formas[i]->getY() != ojo1Y)|| (formas[i]->getX() != ojo2X && formas[i]->getY() != ojo2Y)) {
				formas[i]->setX(formas[i]->getX() + dx);
				formas[i]->setY(formas[i]->getY() + dx);
			}
		}
		//sI LA FORMA ES UN CUADRADO, MOVER A LA BOCA
else if (formas[i]->getTipo() == 2){
			if (formas[i]->getX() != bocaX && formas[i]->getY() != bocaY){
				formas[i]->setX(formas[i]->getX() + dx);
				formas[i]->setY(formas[i]->getY() + dx);
			}
		}

	}
}