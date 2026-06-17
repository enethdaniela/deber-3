/*P023 | Función que retorna puntero a heap
Escribe:
  double* crearNotas(int n)
    → reserva n doubles en heap, los inicializa en 0.0
    → retorna el puntero (el caller libera)

  void llenar(double* notas, int n)
    → lee n valores del teclado

  double promedio(const double* notas, int n)
    → calcula el promedio sin modificar el arreglo

En main usa las tres funciones y libera la memoria.

Entrada: 4   8.5 7.0 9.5 6.0
Salida esperada:
  Notas: 8.50 7.00 9.50 6.00
  Promedio: 7.75
  Memoria liberada.*/

#include <iostream>
#include <iomanip>

double* crearNotas(int n) {
    double* notas = new double[n]();
    return notas;
}

void llenar(double* notas, int n) {
    std::cout << "Ingrese " << n << " notas: ";
    for (int i = 0; i < n; i++) {
        std::cin >> notas[i];
    }
}

double promedio(const double* notas, int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

int main() {
    int n;
    std::cout << "Ingrese la cantidad de notas: ";
    std::cin >> n;

    double* notas = crearNotas(n);
    llenar(notas, n);

    std::cout << "Notas: ";
    for (int i = 0; i < n; i++) {
        std::cout << std::fixed << std::setprecision(2) << notas[i] << " ";
    }
    std::cout << std::endl;

    double prom = promedio(notas, n);
    std::cout << "Promedio: " << std::fixed << std::setprecision(2) << prom << '\n';

    delete[] notas;
    std::cout << "Memoria liberada." << '\n';

    return 0;
}