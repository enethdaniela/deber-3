/*P021 | Arreglo 2D dinámico

TEORÍA PREVIA — int** para matrices:
En el Bloque B, int** se usó para apuntar a un puntero simple.
Aquí int** tiene un uso distinto: un arreglo de punteros,
donde cada puntero apunta a una fila (otro arreglo).

  Diagrama de una matriz 3×4 dinámica:

  Stack:          Heap (filas):    Heap (columnas):
  ┌──────────┐   ┌────────────┐   ┌──────────────────────┐
  │ matriz   │──►│ matriz[0]  │──►│ [0][0][0][1][0][2][0][3] │
  │ (int**)  │   ├────────────┤   ├──────────────────────┤
  └──────────┘   │ matriz[1]  │──►│ [1][0][1][1][1][2][1][3] │
                 ├────────────┤   ├──────────────────────┤
                 │ matriz[2]  │──►│ [2][0][2][1][2][2][2][3] │
                 └────────────┘   └──────────────────────┘

  matriz      es int** → apunta al arreglo de punteros a filas
  matriz[i]   es int* → apunta a la fila i
  matriz[i][j] es int → el elemento en fila i, columna j

Reserva dinámicamente una matriz de filas × columnas:
  int** matriz = new int*[filas];
  for (int i = 0; i < filas; i++)
      matriz[i] = new int[columnas];

Llena la matriz con el producto i*columnas + j + 1.
Imprímela con formato.
Libera la memoria correctamente — primero las filas, luego
el arreglo de punteros:
  for (int i = 0; i < filas; i++) delete[] matriz[i];
  delete[] matriz;
  matriz = nullptr;

Entrada: 3 4 (filas columnas)
Salida esperada:
   1  2  3  4
   5  6  7  8
   9 10 11 12
  Memoria liberada.*/

#include <iostream>
#include <iomanip>

int main() {
    int filas, columnas;
    std::cout << "Ingrese filas y columnas: ";
    std::cin >> filas >> columnas;

    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = i * columnas + j + 1;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << std::setw(3) << matriz[i][j] << " ";
        }
        std::cout << '\n';
    }

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    matriz = nullptr;

    std::cout << "Memoria liberada." << '\n';

    return 0;
}