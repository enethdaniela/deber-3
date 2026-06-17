/*P008 | Puntero a puntero
Declara int x = 42.
Declara int* p = &x.
Declara int** pp = &p.

Imprime:
  - El valor de x directamente
  - *p  (una desreferenciación)
  - **pp (dos desreferenciaciones)
  - La dirección de x usando &x, p, y *pp
  - La dirección de p usando &p y pp

Modifica x a 99 usando **pp y verifica que x cambió.

Salida esperada:
  x    = 42
  *p   = 42
  **pp = 42
  dir x via &x : 0x[...]
  dir x via p  : 0x[misma]
  dir x via *pp: 0x[misma]
  dir p via &p : 0x[...]
  dir p via pp : 0x[misma]
  x despues de **pp=99: 99*/

#include <iostream>

int main() {
    int x = 42;
    int* p = &x;
    int** pp = &p;

    std::cout << "x = " << x << '\n';
    std::cout << "*p = " << *p << '\n';
    std::cout << "**pp = " << **pp << '\n';
    std::cout << "dir x via &x: " << &x << '\n';
    std::cout << "dir x via p: " << p << '\n';
    std::cout << "dir x via *pp: " << *pp << '\n';
    std::cout << "dir p via &p: " << &p << '\n';
    std::cout << "dir p via pp: " << pp << '\n';

    **pp = 99;
    std::cout << "x despues de **pp=99: " << x << '\n';

    return 0;
}