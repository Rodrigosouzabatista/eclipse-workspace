#include <iostream>

const int PIZZA = 10;
const int SANDUICHE = 2;
const int DOG = 3;

int main(int argc, char **argv) {
	int menu;
while(true){


	std::cout <<"------------------------------" << std::endl;
	std::cout << "RESTAURANTE BOM PRATO" << std::endl;
	std::cout <<"------------------------------" << std::endl;
	std::cout <<PIZZA<< " - Pizza" << std::endl;
	std::cout <<SANDUICHE<< " - Sanduiche" << std::endl;
	std::cout <<DOG <<" - Dog" << std::endl;
	std::cout << "ESCOLHA UM PRATO" << std::endl;
	std::cin >> menu;
	std::cout <<"------------------------------" << std::endl;

	switch (menu){
		case PIZZA:
			std::cout << "Pizza Escolhida" << std::endl;
		    break;

		case SANDUICHE:
			std::cout << "Sanduiche Escolhido" << std::endl;
		    break;

		case DOG:
			std::cout << "Dog Escolhido" << std::endl;
		    break;

		default:
			std::cout << "escolheu Nada" << std::endl;
			break;


	}

}
}
