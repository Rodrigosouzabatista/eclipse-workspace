#include <iostream>

// Exibe no terminal a msg "ol� Mundo"

float soma (float a, float b){
	return a + b;
}

/**
 * Fun��o principal
 * @return estado final do programa
 */

int main() {
	std::cout << "Ol� Mundo!" << std::endl; // prints !!!Hello World!!!
	std::cout << soma (10,5.6) << std::endl;
	return 0;
}
