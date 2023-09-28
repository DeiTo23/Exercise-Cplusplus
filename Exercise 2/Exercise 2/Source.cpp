#include <iostream>
#include <conio.h>
using namespace std;

double factorial(int n) {//Funcion para hallar el factorial
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
double calcularSuma() {//Funcion S
    double suma = 0;
    for (int n = 1; n <= 10; n++) {
        double numerador = 3 * pow(n, 2) + 2 * n + 6;
        double denominador = factorial(n + 2);
        double resultado = numerador / denominador;
        suma += resultado;
    }
    return suma;
}
void datos() {//recolectar datos
    int numero;
    cout << "Por favor, ingrese un número entre 10 y 20: ";
    cin >> numero;
    if (numero >= 10 && numero <= 20) {
        double suma = calcularSuma();
        cout << "La suma de los valores es: " << suma << endl;
    }
    else {
        cout << "El número ingresado no está en el rango entre 10 y 20." << endl;
    }
}
int main() {
    datos();
    _getch();
}