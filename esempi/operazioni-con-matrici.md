# OPERAZIONI CON MATRICI

## `VISUALIZIONE` DI UNA MATRICE

Visualizziamo una matrice con 2 iterazioni `for` annidate:
```cpp
#include <iostream>
using namespace std;

#define RIGHE 3
#define COLONNE 4

int main() {
   
   int temperature[RIGHE][COLONNE] = { { 25, 33, 12, -3 },
                                       { 26, 29, 12,  0 },
                                       { 22, 30, 11, -3 } };
   
   int i, j; 
   
   cout << "Temperature a Rovigo, Roma, Oslo, Capo Nord negli ultimi 3 giorni ***" << endl;
   for (i=0 ; i < RIGHE ; ++i) {
       
       cout << "Giorno " << i << ": ";
       
       for (j=0 ; j < COLONNE ; ++j)
          cout << temperature[i][j] << " ";
          
       cout << endl;
   }
   
   return 0;
}
```
Output:
```
Temperature a Rovigo, Roma, Oslo, Capo Nord negli ultimi 3 giorni ***
Giorno 0: 25 33 12 -3 
Giorno 1: 26 29 12 0 
Giorno 2: 22 30 11 -3
```

Un altra versione dello stesso programma **definendo una `funzione stampa()`**:
```cpp
#include <iostream>
using namespace std;

#define RIGHE 3
#define COLONNE 4

void stampa (int [RIGHE][COLONNE], int, int);   // prototipo della funzione stampa

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
Output:
```
Temperature a Rovigo, Roma, Oslo, Capo Nord negli ultimi 3 giorni ***
25 33 12 -3 
26 29 12 0 
22 30 11 -3
```
