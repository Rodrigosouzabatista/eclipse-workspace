#include<cmath>
#include<iostream>

double soma(double a, double b){
	return a + b;
}
double subtracao(double a, double b){
	return a - b;
}
double divisao(double a, double b){
	return a / b;
}
double multiplicacao(double a, double b){
	return a * b;
}

int main(int argc, char **argv) {
	double a;
	double b;
	double result;
	char operacao;

	std::cout << "Escolha uma Operação ( + - / * )" << std:: endl;
	std::cin >> operacao;
	std::cout << "Digite o Primeiro Numero" << std::endl;
	std::cin >> a;
	std::cout << "Digite o Segundo Numero" << std::endl;
	std::cin >> b;

	switch (operacao){

	case '+':
		result = soma(a,b);
		break;

	case '-':
		result = subtracao(a,b);
		break;

	case '*':
			result = multiplicacao(a,b);
			break;

	case '/':
			result = divisao(a,b);
			break;
	}
	std::cout << "O resultado da operação é: " << std::endl;
	std::cout << result << std::endl;
}


