/*P009 | nullptr — uso seguro
Escribe una función:
  void imprimirValor(int* p)
  → si p es nullptr: imprime "Puntero nulo — sin valor"
  → si no: imprime el valor al que apunta

En main llama la función con:
  - Un puntero válido apuntando a int x = 55
  - Un puntero nullptr

Salida esperada:
  Valor: 55
  Puntero nulo — sin valor*/

#include <iostream>

void imprimirValor(int* p) {
    if (p == nullptr) {
        std::cout << "Puntero nulo - sin valor\n";
    } else {
        std::cout << "Valor: " << *p << '\n';
    }
}

int main() {
    int x = 55;
    int* p1 = &x;
    int* p2 = nullptr;

    imprimirValor(p1);
    imprimirValor(p2);

    return 0;
}