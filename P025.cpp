/*P025 | Integración final — pipeline con punteros
Implementa un pipeline de transformaciones sobre un
arreglo dinámico usando punteros a función:

  int* crearArreglo(int n)   → new int[n], llena con 1..n
  void aplicar(int* arr, int n, int (*f)(int))
    → aplica f a cada elemento in-place
  void imprimir(const int* arr, int n)

Transformaciones:
  int duplicar(int x)  → x * 2
  int cuadrado(int x)  → x * x
  int sumarDiez(int x) → x + 10

En main:
  1. Crea arreglo de 5 elementos
  2. Imprime original
  3. Aplica duplicar → imprime
  4. Aplica cuadrado → imprime
  5. Aplica sumarDiez → imprime
  6. Libera memoria

Entrada: (ninguna — hardcodeado n=5)
Salida esperada:
  Original  : 1 2 3 4 5
  Duplicado : 2 4 6 8 10
  Cuadrado  : 4 16 36 64 100
  +10       : 14 26 46 74 110
  Memoria liberada.*/

#include <iostream>

int* crearArreglo(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

void aplicar(int* arr, int n, int (*f)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = f(arr[i]);
    }
}

void imprimir(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

int duplicar(int x) {
    return x * 2;
}

int cuadrado(int x) {
    return x * x;
}

int sumarDiez(int x) {
    return x + 10;
}

int main() {
    int n = 5;
    int* arr = crearArreglo(n);

    std::cout << "Original  : ";
    imprimir(arr, n);

    aplicar(arr, n, duplicar);
    std::cout << "Duplicado : ";
    imprimir(arr, n);

    aplicar(arr, n, cuadrado);
    std::cout << "Cuadrado  : ";
    imprimir(arr, n);

    aplicar(arr, n, sumarDiez);
    std::cout << "+10       : ";
    imprimir(arr, n);

    delete[] arr;
    std::cout << "Memoria liberada." << '\n';

    return 0;
}