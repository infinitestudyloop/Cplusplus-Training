/*
  Generare una matrice di 10 righe e 10 colonne 
  con numeri casuali interi compresi tra 0 e 30.
  Visualizzare la matrice per righe e colonne.
*/

#include <iostream>
#include <cstdlib>      // including rand()
#include <ctime>        // including time()
using namespace std;

int main()
{   
    int numero_casuale = 0;
    
    // generatore di numeri casuali
    srand(time(0));

    // esempio di generazione numero casuale
    numero_casuale = rand() % 10; // tra 0 e 9
    cout << "Esempio di numero casuale: " << numero_casuale << endl;
    

  
    // scrivi qui il tuo codice
    
    return 0;
}
