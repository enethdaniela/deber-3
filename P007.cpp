/*P007 | Aritmética de punteros básica
Declara int arr[] = {10, 20, 30, 40, 50}.
Declara int* p = arr.
Sin usar arr[i], accede a cada elemento usando *(p+i)
e imprímelos.
Luego recorre el arreglo incrementando p con p++ en un bucle.

ADVERTENCIA: después del primer bucle (con *(p+i)), p sigue
apuntando a arr[0] porque no lo moviste. Pero si usas p++
en el primer bucle, p queda apuntando fuera del arreglo —
reinicia p = arr antes del segundo bucle.

Salida esperada:
  Acceso con *(p+i):
  10 20 30 40 50
  Acceso con p++:
  10 20 30 40 50*/

#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr;

    std::cout << "Acceso con *(p+i):\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(p + i) << ' ';
    }
    std::cout << '\n';

    p = arr; 

    std::cout << "Acceso con p++:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << *p << ' ';
        p++;
    }
    std::cout << '\n';

    return 0;
}