/*P001 | Primer puntero
Declara una variable int con valor 25.
Declara un puntero int* que apunte a ella.
Imprime:
  - El valor de la variable
  - La dirección de la variable (usando &)
  - La dirección guardada en el puntero
  - El valor al que apunta el puntero (usando *)

Verifica que la dirección de la variable y la dirección
guardada en el puntero son la misma.

Salida esperada:
  Valor     : 25
  Direccion : 0x[alguna dirección]
  ptr guarda: 0x[la misma dirección]
  *ptr      : 25*/

#include <iostream>

int main() {
    int n = 25;
    int* ptr = &n;


    std::cout << "Valor : " << n << '\n';
    std::cout << "Direccion: " << &n << '\n';
    std::cout << "ptr guardada: " << ptr << '\n';
    std::cout << "*ptr: " << *ptr << '\n';

    return 0;
}