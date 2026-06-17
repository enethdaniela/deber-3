/*P016 | TRAZA — arreglo como puntero
RESUELVE A MANO. Dibuja el estado del arreglo en memoria
y escribe qué imprime cada línea.

  int arr[] = {1, 2, 3, 4, 5};
  int* p = arr;

  cout << arr[2]    << endl;   // línea 1
  cout << *(arr+2)  << endl;   // línea 2
  cout << *(p+2)    << endl;   // línea 3
  p += 2;
  cout << *p        << endl;   // línea 4
  cout << p[1]      << endl;   // línea 5
  *p = 99;
  cout << arr[2]    << endl;   // línea 6

  NOTA para la línea 5: p[i] es siempre *(p+i), sin importar
  a qué elemento apunte p actualmente. Si p apunta a arr[2],
  entonces p[1] == arr[3], NO arr[1].

  Línea 1: 3  Línea 2: 3  Línea 3: 3
  Línea 4: 3  Línea 5: 4  Línea 6: 99

  ¿Por qué la línea 6 imprime 99 si solo modificaste *p?*/