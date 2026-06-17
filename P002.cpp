/*P002 | Modificar a través del puntero
Declara int x = 10.
Declara int* p = &x.
Sin tocar x directamente, usa *p para cambiar su valor a 50.
Imprime x antes y después del cambio.
Luego usa *p para cambiar a 200 e imprime nuevamente.

Salida esperada:
  x antes   : 10
  x despues : 50
  x final   : 200*/

#include <iostream>

int main() {
    int x = 10;
    int* p = &x;

    std::cout << "x antes: " << *p << '\n';

    *p = 50;
    std::cout << "x depues: " << *p << '\n';

    *p = 200;
    std::cout << "x final: " << *p << '\n';

    return 0;
}