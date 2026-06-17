/*P014 | String estilo C con puntero
Declara char palabra[] = "programacion".
Usando SOLO un puntero char* (sin índices ni strlen):
  1. Calcula la longitud recorriendo hasta '\0'
  2. Imprime cada carácter en mayúscula usando toupper()
     (requiere #include <cctype>)
  3. Cuenta cuántas vocales tiene

NOTA sobre toupper(): recibe y retorna int, no char.
Eso es porque puede manejar valores EOF (-1) además de chars.
Úsalo así:
  cout << (char)toupper(*p);   // cast a char para imprimir
  // o equivalente:
  char mayus = static_cast<char>(toupper(*p));

Salida esperada:
  Longitud  : 12
  Mayusculas: PROGRAMACION
  Vocales   : 5*/

#include <iostream>
#include <cctype>

int main() {
    char palabra[] = "programacion";
    char* p = palabra;

    int longitud = 0;
    while (*p != '\0') {
        longitud++;
        p++;
    }
    std::cout << "Longitud  : " << longitud << std::endl;

    p = palabra;

    int vocales = 0;
    std::cout << "Mayusculas: ";
    while (*p != '\0') {
        char mayus = static_cast<char>(toupper(*p));
        std::cout << mayus;

        if (mayus == 'A' || mayus == 'E' || mayus == 'I' || mayus == 'O' || mayus == 'U') {
            vocales++;
        }
        p++;
    }
    std::cout << std::endl;

    std::cout << "Vocales   : " << vocales << '\n';

    return 0;
}