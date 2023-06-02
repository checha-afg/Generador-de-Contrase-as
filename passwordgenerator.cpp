#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^*_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum);

void generarContrasenas(int cantidad, int longitud) {
    srand(time(0));
    for (int j = 0; j < cantidad; j++) {
        cout << "Contraseña generada " << j + 1 << ": ";
        for (int i = 0; i < longitud; i++) {
            cout << alphanum[rand() % string_length];
        }
        cout << endl;
    }
}

int main() {
    int cantidad = 0;
    int longitud = 0;
    char opcion;

    do {
        cout << "Ingrese la cantidad de contraseñas a generar: ";
        cin >> cantidad;
        cout << "Ingrese la longitud de cada contraseña: ";
        cin >> longitud;
        generarContrasenas(cantidad, longitud);

        cout << "¿Desea generar más contraseñas? (S/N): ";
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}
