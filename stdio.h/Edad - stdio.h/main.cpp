#include <stdio.h>

int main() {
    int anioNacimiento;
    int anioActual = 2024;

    printf("Introduce tu a�o de nacimiento: ");
    scanf("%d", &anioNacimiento);

    int edad = anioActual - anioNacimiento;
    printf("Tu edad es: %d a�os\n", edad);

    return 0;
}
