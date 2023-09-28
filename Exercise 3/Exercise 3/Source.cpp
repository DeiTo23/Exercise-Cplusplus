#include <iostream>
#include <conio.h>
using namespace std;

int Datos() {
    int N;
    cout << "Ingrese el numero de pacientes: ";
    cin >> N;
    int sumaEdad = 0, hombresInfectados = 0, mujeresInfectadas = 0, pacientesLima = 0, pacientesFebrero = 0;
    for (int i = 1; i <= N; i++) {
        char sexo, departamento;
        int edad, mesRegistro;

        cout << "Paciente numero " << i << ":" << endl;
        cout << "Sexo (M: Masculino; F: Femenino): "; cin >> sexo;
        cout << "Edad (1-100): "; cin >> edad;
        cout << "Departamento (L: Lima; C: Callao; O: Provincias): "; cin >> departamento;
        cout << "Mes de registro (1-5): "; cin >> mesRegistro;
        sumaEdad += edad;
        if (sexo == 'M' || sexo == 'm') {
            hombresInfectados++;
        }
        else if (sexo == 'F' || sexo == 'f') {
            mujeresInfectadas++;
        }
        if (departamento == 'L' || departamento == 'l') {
            pacientesLima++;
        }
        if (mesRegistro == 2) {
            pacientesFebrero++;
        }
    }
    double promedioEdad = static_cast<double>(sumaEdad) / N;
    double promedioEdadLima = pacientesLima > 0 ? static_cast<double>(sumaEdad) / pacientesLima : 0.0;
    cout << "a) Promedio de edad de los pacientes: " << promedioEdad << endl;
    cout << "b) Hombres infectados: " << hombresInfectados << endl;
    cout << "   Mujeres infectadas: " << mujeresInfectadas << endl;
    cout << "c) Promedio de edad de los pacientes en Lima: " << promedioEdadLima << endl;
    cout << "d) Pacientes registrados en Febrero: " << pacientesFebrero << endl;
    return 0;
}

int main() {
    Datos();
    _getch();
}
