```cpp
#include <iostream>
using namespace std;

#define RIGHE 3
#define COLONNE 4

void stampa (int [RIGHE][COLONNE], int, int);   // prototipo funzione stampa

int main() {
   
   int temperature[RIGHE][COLONNE] = { { 25, 33, 12, -3 },
                                       { 26, 29, 12,  0 },
                                       { 22, 30, 11, -3 } };
   
   cout << "Temperature a Rovigo, Roma, Oslo, Capo Nord negli ultimi 3 giorni ***" << endl;
   stampa(temperature, 3, 4);
   
   return 0;
}

void stampa(int matrice[RIGHE][COLONNE], int N, int M) {
   
   int i, j;
   
   for (i=0 ; i < N ; ++i) {
          
      for (j=0 ; j < M ; ++j)
          cout << matrice[i][j] << " ";
          
      cout << endl;
   }
}
```
