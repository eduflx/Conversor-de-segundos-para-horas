#include <iostream>
using namespace std;

int main() {

	int totalSeg;

	cout << "Digite o tempo em segundos: ";
	cin >> totalSeg;

	//Calculo em horas
	int horas = totalSeg / 3600;
	int resto = totalSeg % 3600;

	//Minutos restantes
	int minutos = resto / 60;

	//Segundos restantes
	int segundos = resto % 60;

	cout << "Tempo convertido: "
	     << horas << "h, "
	     << minutos << "min e "
	     << segundos << "seg" << endl;

	return 0;
}