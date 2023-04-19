#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^*_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum);

int main(){
	int length = 0;
	cout << "Ingrese la cantidad de caracteres de la contrasena: ";
	cin >> length;
	srand(time(0));
	cout << "Contrasena generada: ";
	for (int i = 0;i < length;i++){
		cout << alphanum[rand() % string_length];
	}
	return 0;
	system("pause");
}
