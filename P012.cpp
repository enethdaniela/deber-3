/*P012 | Arreglo y puntero — equivalencia
Declara int arr[] = {3, 6, 9, 12, 15}.
Recorre el arreglo de TRES formas distintas:
  1. Con índice: arr[i]
  2. Con puntero y aritmética: *(arr+i)
  3. Con puntero que se incrementa: p++ en bucle

Verifica que las tres formas imprimen lo mismo.

Salida esperada:
  arr[i]  : 3 6 9 12 15
  *(arr+i): 3 6 9 12 15
  p++     : 3 6 9 12 15*/

#include <iostream>

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int* p = arr; 

    std::cout << "arr[i]  : ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "*(arr+i): ";
    for (int i = 0; i < 5; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    std::cout << "p++     : ";
    for (int i = 0; i < 5; i++) {
        std::cout << *p << " ";
        p++; 
    }
    std::cout << std::endl;

    return 0;
}
