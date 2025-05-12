# Domande su iterazioni

1. qual'è il risultato del codice seguente?
```cpp
int i=0;

for (i=0 ; i < 5 ; ++i) {
   cout << i << endl;    
}
```

2. qual'è il risultato del codice seguente?
```c++
int i=0;

for (i=0 ; i <= 5 ; ++i) {
   cout << i << endl;    
}
```

3. qual'è il risultato del codice seguente?
```c++
int i=0;

for (i=5 ; i >= 0  ; --i) {
   cout << i << endl;    
}
```

4. qual'è il risultato del codice seguente?
```c++
int i=0;

for (i=5 ; i > 2  ; --i) {
   cout << i << endl;    
}
```

5. qual'è il risultato del codice seguente?
```c++
int i=0;

for (i=1 ; i < 10  ; ++i) {
   cout << i*i << endl;    
}
```

6. qual'è il risultato del codice seguente?
```c++
int max = 10;
int k = 2;

while (k <= max) {
   cout << k << " , ";
}

cout << endl;
```

7. qual'è il risultato del codice seguente?
```c++
int max = 10;
int k = 1;
somma = 0;

while (k <= max) {
   somma = somma + k;
}

cout << "somma: " << somma << endl;
```

8. qual'è il risultato del codice seguente?
```c++
int max = 10;
int k = 1;
somma = 0;

do {
   somma = somma + k;
} while (k <= max);

cout << "somma: " << somma << endl;
```

9. qual'è il risultato del codice seguente?
```c++
int numero;

do {
   cout << "Inserisci un numero tra 1 e 10 : ";
   cin >> numero;
} while (numero < 0 || numero > 10);
```

10. qual'è il risultato del codice seguente?
```c++
int numero_da_indovinare = 5;
int n;

do {
   cout << "Indovina un numero tra 1 e 10";
   cin >> n;
} while (n != numero_da_indovinare);

cout << "Bravo, hai indovinato! Il numero da indovinare era: " << numero_da_indovinare;
```

11. qual'è il risultato del codice seguente?
```c++
int i=0;

while (i <= 10) {

   if( i % 2 == 0 )
      cout << i << endl;

   i++;
}
```


12. qual'è il risultato del codice seguente?
```c++
double voti [5] = {6.0, 9.0, 5.5, 7.2, 6.5};
int i=0;

for (i=0 ; i < 5 ; ++i) {
       cout << voti[i] << endl;
}
```

13. completa il sequente codice per stampare la somma dei voti
```c++
double voti [5] = {6.0, 9.0, 5.5, 7.2, 6.5};
int i=0;
int somma=0;

for (i=0 ; i < 5 ; ++i) {
       
}
```

14. completa il sequente codice per calcolare la media dei voti
```c++
double voti [5] = {6.0, 9.0, 5.5, 7.2, 6.5};
int i=0;
int somma=0;

for (i=0 ; i < 5 ; ++i) {
       
}
```

15. qual'è il risultato del codice seguente?
```c++
double voti [5] = {6.0, 9.0, 5.5, 7.2, 3.5};
int i=0;

while (i < 5) {

   if( voti[i] >= 6 )
      cout << voti[i] << " BENE ! " << endl;
   else
      cout << voti[i] << " DA MIGLIORARE ! " << endl;

   i++;
}
```

