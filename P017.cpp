/*P017 | new y delete — entero dinámico
Reserva dinámicamente un int en el heap.
Asígnale el valor 73.
Imprímelo.
Libéralo correctamente y pon el puntero en nullptr.
Verifica que después de nullptr el puntero es seguro.

Salida esperada:
  Valor en heap: 73
  Memoria liberada.
  Puntero es null: SI*/

#include <iostream>

int main() {
    int* p = new int; 
    *p = 73; 

    std::cout << "Valor en heap: " << *p << '\n';

    delete p; 
    p = nullptr; 

    std::cout << "Memoria liberada." << '\n';
    std::cout << "Puntero es null: " << (p == nullptr ? "SI" : "NO") << '\n';

    return 0;
}