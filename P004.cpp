/*P004 | Puntero a distintos tipos
Declara una variable de cada tipo: int, double, char, bool.
Para cada una crea un puntero del tipo correcto.
Imprime el valor y la dirección de cada variable usando
tanto la variable directamente como el puntero.

Verifica que *ptr siempre da el mismo valor que la variable.

Salida esperada:
  int   : valor=42      dir=0x[...]  *ptr=42
  double: valor=3.14    dir=0x[...]  *ptr=3.14
  char  : valor=A       dir=0x[...]  *ptr=A
  bool  : valor=1       dir=0x[...]  *ptr=1*/

#include <iostream>

int main() {
    int x = 42;
    double  d= 3.14;
    char c = 'A';
    bool b = true;

    int* ptr = &x;
    double* ptr1 = &d;
    char* ptr2 = &c;
    bool* ptr3 = &b;

    std::cout << "int   : valor=" << x << "     dir= " << &x << "   *ptr=" << *ptr << '\n';
    std::cout << "double: valor=" << d << "   dir= " << &d << "   *ptr=" << *ptr1 << '\n';
    std::cout << "char  : valor=" << c << "      dir= " << &c << "   *ptr=" << *ptr2 << '\n';
    std::cout << "bool  : valor=" << b << "      dir= " << &b << "   *ptr=" << *ptr3 << '\n';

    return 0;
}