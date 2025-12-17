#include <iostream>
#include "circulo.h"
#include "quadrado.h"
#include "triangulo.h"  
 
int main() {
	//FormaBidimensional fd(2); // ERRO!!!!  

    //FormaBidimensional *p; // o ponteiro pode existir
	FormaBidimensional *formas[] = {
		new Quadrado{}, new Circulo{}, new Triangulo{}};

	for (int i = 0; i < 3; i++) {
		formas[i]->desenhar();
		delete formas[i];
	}

	return 0;
}