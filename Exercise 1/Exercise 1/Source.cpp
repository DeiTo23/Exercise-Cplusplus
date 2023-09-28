#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

int Edad() {// Recolectar valores
    int n;
    do {
        cout << "Digite un número entero n: "; cin >> n;
    } while (n <= 0);
    return n;
}

double valores() {//Hallar el valor de a
    double a;
    int opcion;
    cout << "Tiene alguna enfermedad relevante? Si(1) o No(2): ";
    cin >> opcion;
    if (opcion == 1) {
        a = 45.23;
    }
    else if (opcion == 2) {
        a = 56.22;
    }
    else {
        cout << "Opción no válida. Se asumirá que no tiene enfermedad relevante." << endl;
    }
    return a;
}

double factorial(int n) {//funcion para factorial(denominador)
    double factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
double numerador(int n, double a) {//funcion parte del numerador
    double num = 1;
    for (int i = 1; i <= n; i++) {
        num = a * i;
    }
    return num;

}

double formula(int n, double a) {
    double F = 0, F1 = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {//evaluar si es par o impar por residuo
            F -= (numerador(i, a) / factorial(i));//pares
        }
        else {
            F1 += (numerador(i, a) / factorial(i));//impares
        }
    }
    return F + F1;
}

int main() {
    int n = Edad();
    double a = valores();
    double resultado = formula(n, a);
    cout << "El resultado de la fórmula es: " << resultado << endl;
    _getch();

}