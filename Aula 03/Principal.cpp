#include<cmath>
#include<iostream>

//recebe zero ou mais valores
//retorna um unico valor
double soma (double a, double b){
	return a + b;
}
double mult(double a,double b){
	return a * b;
}
double mult (double a, double b, double c){
	return a * b * c;
}



int main(int argc, char **argv) {

	double numeroA;
	double numeroB;

    std::cin >> numeroA;
    std::cin >> numeroB;

	std::cout << soma(numeroA, numeroB) << std::endl;
}


