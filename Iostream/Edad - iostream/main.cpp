#include <iostream>

using namespace std;

int main() {
    int anioNacimiento;
    int anioActual = 2024;

    cout << "Introduce tu a�o de nacimiento: ";
    cin >> anioNacimiento;

    int edad = anioActual - anioNacimiento;
    cout << "Tu edad es: " << edad << " a�os" << endl;

    return 0;
}
