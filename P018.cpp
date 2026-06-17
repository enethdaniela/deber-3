/*P018 | new[] y delete[] — arreglo dinámico
Lee N del teclado (N entre 1 y 20).
Reserva un arreglo de N doubles en el heap.
Lee N valores del teclado.
Calcula e imprime el promedio con 2 decimales.
Libera el arreglo correctamente.

Entrada: 4   3.5 7.0 2.5 5.0
Salida esperada:
  Valores: 3.50 7.00 2.50 5.00
  Promedio: 4.50
  Memoria liberada.*/

#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cout << "Ingrese la cantidad de valores (1-20): ";
    std::cin >> N;

    if (N < 1 || N > 20) {
        std::cerr << "Error: N debe estar entre 1 y 20." << '\n';
        return 1;
    }

    double* valores = new double[N];

    std::cout << "Ingrese " << N << " valores: ";
    for (int i = 0; i < N; i++) {
        std::cin >> valores[i];
    }

    double suma = 0.0;
    std::cout << "Valores: ";
    for (int i = 0; i < N; i++) {
        std::cout << std::fixed << std::setprecision(2) << valores[i] << " ";
        suma += valores[i];
    }
    std::cout << std::endl;

    double promedio = suma / N;
    std::cout << "Promedio: " << std::fixed << std::setprecision(2) << promedio << '\n';

    delete[] valores;
    std::cout << "Memoria liberada." << '\n';

    return 0;
}