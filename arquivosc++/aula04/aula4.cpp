#include <iostream>

using namespace std;

int main(){
	
	//TYPE NAME; Regra para variavel
	//TYPE NAME = VALUE;

	int life=0; //10, 20, 3, 4, 5;
	char word='b'; //'a', 'b', 'c', 'd', 'e';
	double real=5.2; //2.2, 4.5, -4.5, 8.9;
	float real2=5.2; //é do mesmo tipo do double, só que com menos precisão;
	bool live=true; //true or false;
	string name="Guilherme"; // "Oi, Eu sou o Goku!"
	
	cout << "Digite um numero de vidas: ";
	cin >> life;
	cout << "Digite uma letra: ";
	cin >> word;
	cout << "Digite um Valor real: ";
	cin >> real;
	
	cout << life << "\n" << word << "\n" << real << "\n" << live << "\n" << name << "\n";


	return 0;
}