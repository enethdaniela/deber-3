/*P020 | Redimensionar arreglo dinámico
Simula el crecimiento de un arreglo dinámico:
  1. Reserva un arreglo de 3 ints e inicialízalo con 1,2,3
  2. Crea uno nuevo de tamaño 6
  3. Copia los 3 elementos originales al nuevo
  4. Agrega 4, 5, 6 en las posiciones restantes
  5. Libera el arreglo original
  6. Imprime el nuevo arreglo
  7. Libera el nuevo arreglo

Esto simula cómo std::vector crece internamente.

Salida esperada:
  Original (3): 1 2 3
  Ampliado (6): 1 2 3 4 5 6
  Memoria liberada.*/

#include <iostream>

int main() {
    int* arr = new int[3]{1, 2, 3};

    std::cout << "Original (3): ";
    for (int i = 0; i < 3; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int* nuevoArr = new int[6];

    for (int i = 0; i < 3; i++) {
        nuevoArr[i] = arr[i];
    }

    for (int i = 3; i < 6; i++) {
        nuevoArr[i] = i + 1;
    }

    delete[] arr;

    std::cout << "Ampliado (6): ";
    for (int i = 0; i < 6; i++) {
        std::cout << nuevoArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] nuevoArr;
    std::cout << "Memoria liberada." << '\n';

    return 0;
}