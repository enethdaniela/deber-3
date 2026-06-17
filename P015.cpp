/*P015 | Puntero a struct con ->
Define el struct:
  struct Estudiante {
      string nombre;
      double nota;
      int edad;
  };

Escribe las funciones:
  void imprimir(const Estudiante* e)
    → usa -> para acceder a los campos
  void actualizarNota(Estudiante* e, double nuevaNota)
    → actualiza e->nota si nuevaNota está entre 0 y 100
  bool aprobo(const Estudiante* e)
    → retorna true si e->nota >= 60

En main crea un Estudiante, pásalo por puntero a las tres
funciones.

Salida esperada:
  Nombre: Ana | Nota: 75.00 | Edad: 20
  Nota actualizada: 85.00
  Estado: APROBADO*/

#include <iostream>
#include <string>
#include <iomanip>


struct Estudiante {
    std::string nombre;
    double nota;
    int edad;
};

void imprimir(const Estudiante* e) {
    std::cout << "Nombre: " << e->nombre
              << " | Nota: " << std::fixed << std::setprecision(2) << e->nota
              << " | Edad: " << e->edad << std::endl;
}

void actualizarNota(Estudiante* e, double nuevaNota) {
    if (nuevaNota >= 0 && nuevaNota <= 100) {
        e->nota = nuevaNota;
    }
}

bool aprobo(const Estudiante* e) {
    return e->nota >= 60;
}

int main() {
    Estudiante ana = {"Ana", 75.0, 20};

    imprimir(&ana);

    actualizarNota(&ana, 85.0);
    std::cout << "Nota actualizada: " << std::fixed << std::setprecision(2) << ana.nota << '\n';

    std::cout << "Estado: " << (aprobo(&ana) ? "APROBADO" : "REPROBADO") << '\n';

    return 0;
}