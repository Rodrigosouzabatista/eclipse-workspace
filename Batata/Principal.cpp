#include "lib/mat.h"
#include "lib/msg.h"

int main(int argc, char **argv) {

	double num1 = 30;
	double num2 = 3.5;
	double resultados = 0;

	resultados = soma(num1,num2);
    exibeMensagem(std::to_string(resultados));
}



