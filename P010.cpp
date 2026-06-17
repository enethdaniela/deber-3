/*P010 | Paso por puntero — modificar desde función
Escribe las siguientes funciones usando paso por puntero:
  void triplicar(int* n)     → multiplica *n por 3
  void elevarAlCuadrado(int* n) → eleva *n al cuadrado
  void resetear(int* n)      → asigna 0 a *n

En main declara int x = 4 y aplica las tres funciones
en secuencia. Imprime x después de cada llamada.

Salida esperada:
  x inicial    : 4
  tras triplicar: 12
  tras cuadrado : 144
  tras resetear : 0*/

#include <iostream>

void triplicar(int* n) {
    *n *= 3;
}

void elevarAlCuadrado(int* n) {
    *n *= *n;
}

void resetear(int* n) {
    *n = 0;
}

int main() {
    int x = 4;
    std::cout << "x inicial    : " << x << std::endl;

    triplicar(&x);
    std::cout << "tras triplicar: " << x << std::endl;

    elevarAlCuadrado(&x);
    std::cout << "tras cuadrado : " << x << std::endl;

    resetear(&x);
    std::cout << "tras resetear : " << x << std::endl;

    return 0;
}