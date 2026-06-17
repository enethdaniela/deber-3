/*P022 | Integración D — gestión completa de memoria
Implementa un mini sistema de registro de notas:
  - Lee N (cantidad de estudiantes)
  - Reserva dinámicamente: string* nombres, double* notas
  - Lee los datos (asume que cada nombre es una sola palabra
    sin espacios — léelos con cin >>)
  - Calcula: promedio, nota máxima, nota mínima
  - Imprime reporte completo
  - Libera toda la memoria en el orden correcto

NOTA: new string[n] inicializa cada string como cadena vacía
automáticamente (string tiene constructor). A diferencia de
new int[n] que deja valores sin inicializar, no necesitas
asignar "" explícitamente a cada posición.

Entrada:
  3
  Ana 88.5
  Luis 72.0
  Carla 95.5
Salida esperada:
  === Reporte ===
  Ana   : 88.50
  Luis  : 72.00
  Carla : 95.50
  Promedio: 85.33
  Maxima : 95.50 (Carla)
  Minima : 72.00 (Luis)
  Memoria liberada.*/

#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> N;

    std::string* nombres = new std::string[N];
    double* notas = new double[N];

    for (int i = 0; i < N; i++) {
        std::cout << "Ingrese nombre y nota del estudiante " << (i + 1) << ": ";
        std::cin >> nombres[i] >> notas[i];
    }

    double suma = 0.0;
    double maxNota = notas[0];
    double minNota = notas[0];
    int idxMax = 0;
    int idxMin = 0;

    for (int i = 0; i < N; i++) {
        suma += notas[i];
        if (notas[i] > maxNota) {
            maxNota = notas[i];
            idxMax = i;
        }
        if (notas[i] < minNota) {
            minNota = notas[i];
            idxMin = i;
        }
    }

    double promedio = suma / N;

    std::cout << "=== Reporte ===\n";
    for (int i = 0; i < N; i++) {
        std::cout << std::left << std::setw(7) << nombres[i] << ": "
                  << std::fixed << std::setprecision(2) << notas[i] << '\n';
    }
    std::cout << "Promedio: " << std::fixed << std::setprecision(2) << promedio << '\n';
    std::cout << "Maxima : " << std::fixed << std::setprecision(2) << maxNota
              << " (" << nombres[idxMax] << ")" << '\n';
    std::cout << "Minima : " << std::fixed << std::setprecision(2) << minNota
              << " (" << nombres[idxMin] << ")" << '\n';

    delete[] nombres;
    delete[] notas;
    std::cout << "Memoria liberada." << '\n';

    return 0;
}