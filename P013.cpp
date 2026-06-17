/*P013 | Función que modifica arreglo via puntero

NOTA SOBRE const int*:
  const int* arr significa que NO puedes modificar los valores
  apuntados a través de arr, aunque sí puedes mover el puntero.
  Es diferente de int* const arr (el puntero no puede moverse).

  const int* p → protege el VALOR: *p = 5 da error de compilación
  int* const p → protege el PUNTERO: p++ da error de compilación

  Usa const int* cuando una función solo debe LEER el arreglo,
  como una garantía para quien lea el código.

Escribe:
  void doblarElementos(int* arr, int n)
    → multiplica cada elemento por 2 modificando el original

  void imprimirArreglo(const int* arr, int n)
    → imprime sin modificar (const int* garantiza que no cambia nada)

En main crea un arreglo de 5 enteros, imprímelo,
llama doblarElementos, imprímelo de nuevo.

Salida esperada:
  Original : 1 2 3 4 5
  Doblado  : 2 4 6 8 10*/

#include <iostream>

void doblarElementos(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

void imprimirArreglo(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Original : ";
    imprimirArreglo(arr, 5);

    doblarElementos(arr, 5);
    std::cout << "Doblado  : ";
    imprimirArreglo(arr, 5);

    return 0;
}