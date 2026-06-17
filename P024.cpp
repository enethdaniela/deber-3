/*P024 | Puntero a función — operaciones configurables
Implementa:
  int sumar(int a, int b)
  int restar(int a, int b)
  int multiplicar(int a, int b)
  int dividir(int a, int b)
    → si b != 0: retorna a/b
    → si b == 0: imprime "Error: division por cero" y retorna 0

Declara un arreglo de punteros a función:
  int (*operaciones[4])(int, int) = {sumar, restar,
                                     multiplicar, dividir};

Lee dos números y recorre el arreglo aplicando cada
operación e imprimiendo el resultado.

Entrada: 12 4
Salida esperada:
  Suma        : 16
  Resta       : 8
  Multiplicacion: 48
  Division    : 3*/

#include <iostream>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: division por cero" << std::endl;
        return 0;
    }
}

int main() {
    int (*operaciones[4])(int, int) = {sumar, restar, multiplicar, dividir};

    int num1, num2;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> num1 >> num2;

    std::cout << "Suma        : " << operaciones[0](num1, num2) << '\n';
    std::cout << "Resta       : " << operaciones[1](num1, num2) << '\n';
    std::cout << "Multiplicacion: " << operaciones[2](num1, num2) << '\n';
    std::cout << "Division    : " << operaciones[3](num1, num2) << '\n';

    return 0;
}