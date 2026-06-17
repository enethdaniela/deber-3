/*P005 | Puntero que cambia de objetivo
Un puntero puede dejar de apuntar a una variable y apuntar
a otra diferente.

  int x = 5, y = 10, z = 15;
  int* p = &x;

Haz que p apunte secuencialmente a x, luego a y, luego a z.
En cada paso modifica el valor a través del puntero y
verifica que la variable original cambió.

Salida esperada:
  p → x: *p=5  x=5
  Modificar *p=99: x=99
  p → y: *p=10  y=10
  Modificar *p=88: y=88
  p → z: *p=15  z=15
  Modificar *p=77: z=77*/

#include <iostream>

int main() {
    int x = 5,  y = 10, z = 15;
    int * p =&x;

    std::cout << "p -> x: *p=" << *p << "x= " << x << '\n';
     
}