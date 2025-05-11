# Strutture di Dati

## Definizione di _Strutture di Dati_
Le **strutture di dati** sono **strumenti per l'organizzazione dei dati**, per **aggregare dati di tipo omogeneo** (stesso tipo) o **eterogeneo** (di diverso tipo). 

I linguaggi di programmazione offrono:
* un insieme di **tipi di dati elementari**, esempio: `int`, `double`, `char`, `bool`  
* e un insieme di **strutture di dati** che sono *strumenti per costruire tipi di **dati aggregrati più complessi***. 

Esempi di strutture di dati: 
* **array**:
  * **vettori** (o array mono-dimensionali), es. vettore di interi
  * **matrici** (o array bi-dimensionali), es. vettore di vettori di interi
  * **array multi-dimensionali**, es. in 3 dimensioni: vettore di vettori di vettori di interi
* **record** (o strutture)
* ...

Nota: le strutture di dati possono inoltre distinguersi in:
* **statiche**
* e **dinamiche**

## Definizione di _Vettore_ o _Array mono-dimensionale_
Un **vettore** è una **struttura di dati (statica)** che contiene una **sequenza di elementi dello stesso tipo** identificati da uno **stesso nome** e che si possono accedere tramite un **indice**.

* il **tipo degli elementi** (o **celle**) si chiama **tipo base** 
  * le celle sono variabili tutte dello stesso tipo base
  * esempio: se il tipo base e' int, abbiamo un vettore di interi
* il numero di elementi, **dimensione** del vettore, deve essere dichiarato al momento della sua creazione
  * la sua dimensione resta fissa e non puo' essere variata dopo la creazione 
* gli elementi sono memorizzati in maniera contigua in memoria, uno si seguito all'altro
* **ogni elemento (o cella) può essere acceduto direttamente** tramite il **nome del vettore** e la sua **posizione** o **indice**,
  * un numero **intero tra `0` ed `N-1`**, con **`N`** uguale alla **dimensione del vettore**
  * il primo elemento alla posizione con indice 0
  * il secondo elemento alla posizione con indice 1
  * ...
  * l'ultimo elemento alla posizione con indice N-1

### Dichiarazione ed inizializzazione di un vettore in C++
```
tipo_base nome_vettore [dimensione];
```
esempi:
```
double temperatura_settimana [7];   // vettore di double di dimensione 7
int voti [5];   // vettore di interi di dimensione 5
```
esempio con inizializzazione:
```
int voti [5] = {72,98,100,99,45};
```
è possibile omettere la dimensione quando viene inizializzato al momento della dichiazione:
```
int voti [] = {72,98,100,99,45};   // vettori di dimensione 5
```

### Accesso agli elementi di un vettore in C++:
```
nome_vettore [indice_elemento]
```
esempio:
```
int voti [5] = {72,98,100,99,45};

cout << voti[0] << endl;   // stampa il valore 72, primo elemento del vettore
cout << voti[1] << endl;   // stampa il valore 98, secondo elemento del vettore
...
cout << voti[4] << endl;   // stampa il valore 45, ultimo elemento del vettore, (dimensione - 1) = (5 - 1) = 4
cout << voti[5] << endl;   // AATENZIONE: fuori range, potrebbe stampare un valore inaspettato o causare errore
```
nota:
```
cout << voti << endl;   // stampa l'indirizzo del primo elemento dell'array
```

* Esempio con utilizzo di un iterazione `for`:
```
#include <iostream>
using namespace std;

int main() {
   
   const int NUM_VOTI = 5;   // definizione della dimensione del vettore come costante
   
   int voti [NUM_VOTI] = {72,98,100,99,45};
   
   int i = 0;
   int somma = 0;
   double media = 0.0; 
   
   cout << "Voti: " << endl;
   for (i=0 ; i < NUM_VOTI ; ++i) {
       cout << voti[i] << endl;
   }
   
   cout << "-------------------------" << endl;
   
   for (i=0 ; i < NUM_VOTI ; ++i) {
       somma += voti[i];
       
   }
   
   media = somma / NUM_VOTI;
   
   cout << "Somma dei Voti: " << somma << endl;
   cout << "Media dei Voti: " << media << endl;
   
   return 0;
}
```
Output:
```
Voti: 
72
98
100
99
45
-------------------------
Somma dei Voti: 414
Media dei Voti: 82
```

### Passaggio di un array ad una funzione in C++
Poiche una variabile array in C++ contiene l'indirizzo del primo elemento (prima cella di memoria), quando viene passato ad una funzione, anche se in teoria viene passata una copia, l'effetto e' quello di un passaggio per riferimento, dato che la funzione e' in grado di modificare gli elementi al suo interno.
```
voti   ~   &voti[0] 
```



## Definizione di _Matrice_ o _Array bi-dimensionale_

Una **matrice NxM**, è una **tabella** (bi-dimensionale) di **N righe** ed **M colonne**, contenente **elementi omogenei** (tutti dello stesso tipo) che si possono accedere tramite **due indici**, uno che indica **la riga** e l'altro **la colonna** dove sono collocati.   

Una **matrice** è `simile ad un vettore`, quindi è una **struttura di dati (statica)** che contiene una sequenza di elementi dello stesso tipo, 
* ma mentre il vettore ha 1 sola dimensione e possiamo immaginarlo come una seguenza composta da 1 singola riga
* la matrice invece ha 2 dimensioni e si può immaginare composta da piu sequenze di elementi cioè da più righe.
* è comodo immaginare le righe in orizzontale e le colonne in verticale
* cosi un elemento della matrice si può identificare con la coppia (riga, colonna) come nel gioco della battaglia navale.
 
* anche per la matrice, il **tipo degli elementi** si chiama **tipo base** 
  * le celle nella tabella sono variabili tutte dello stesso tipo base
  * esempio: se il tipo base e' int, abbiamo una matrice di interi
* anche per la matrice, il numero di elementi, **dimensione** della matrice, deve essere dichiarato al momento della sua creazione
  * la sua dimensione resta fissa e non puo' essere variata dopo la creazione
  * e la dimensione è al prodotto **NxM**, **numero di righe x numero di colonne** 
* gli elementi sono memorizzati in maniera contigua in memoria, uno si seguito all'altro
* anche per la matrice, **ogni elemento (o cella) può essere acceduto direttamente** tramite il **nome della matrice** e la sua **posizione** che questa volta si specifica con **due indici**, il **numero di riga** ed il **numero di colonna**, dove:
  * il numero di riga è un **intero tra `0` ed `N-1`**, con **`N`** uguale al **numero totale di righe**
  * il numero di colonna è un **intero tra `0` ed `M-1`**, con **`M`** uguale al **numero totale di colonne**
  * il primo elemento della prima riga si trova alla posizione con indici (0,0), riga 0 e colonna 0
  * il secondo elemento della prima riga si trova alla posizione con indici (0,1), riga 0 e colonna 1 
  * ...
  * l'ultimo elemento della prima riga si trova alla posizione (0,M-1), riga 0 e colonna M-1
  * il primo elemento della seconda riga si trova alla posizione con indici (1,0), riga 1 e colonna 0
  * il secondo elemento della seconda riga si trova alla posizione con indici (1,1), riga 1 e colonna 1
  * ...
  * l'ultimo elemento della seconda riga si trova alla posizione (1,M-1), riga 1 e colonna M-1
  * ...
  * il primo elemento della ultima riga si trova alla posizione con indici (N-1,0), riga N-1 e colonna 0
  * il secondo elemento della seconda riga si trova alla posizione con indici (N-1,1), riga N-1 e colonna 1
  * ...
  * l'ultimo elemento della ultima riga si trova alla posizione (N-1,M-1), riga N-1 e colonna M-1

## Definizione di _Stringa_
Una **stringa** è un **vettore di caratteri**, cioè una sequenza di caratteri. Quindi non è un tipo elementare ma una struttura di dati.

Nel C++ moderno, il **tipo di dato string** è definito dalla **classe string** nella **libreria standard**. 

Una variabile di tipo **string** in C++ possiamo immaginarla come:
* una sequenze di caratteri memorizzate in celle contigue di memoria, come un vettore classico
* ma mentre i vettori classici hanno dimensione statica, definita al momento della creazione
* un oggetto string ha invece una dimensione (lunghezza) dinamica che può variare nel corso del programma

Quindi per utilizzare il tipo string:
* includere il file `<string>` della libreria standard
* per comodità, dichiarare l'uso del namespace `std` per non doverlo specificare ogni volta

L'utilizzo di string è molto intuitivo perchè si possono applicare ad esso gli stessi operatori utilizzati per alcuni tipi elementari già noti:
* operatore di assegnamento `=`
* operatore di concatenazione `+`
* operatori di confronto `==`, `!=`, `<`, `>`, `<=`, `>=`

Esempio dell'uso di **operatore di assegnazione `=`**, di **concatenazione `+`** e degli **operatori di confronto**:
```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string materia1, materia2, materia3;
   string nomeInsegnante1, nomeInsegnante2, nomeInsegnante3;
   string s1, s2, messaggio1, messaggio2, messaggio3;

   materia1 = "informatica ";
   materia2 = "letteratura ";
   materia3 = "filosofia";

   nomeInsegnante1 = "Rodolfo";
   nomeInsegnante2 = "Isabella";
   nomeInsegnante3 = nomeInsegnante1;

   s1 = "Ciao, mi chiamo ";
   s2 = ", e sono il tuo insegnante di ";

   messaggio1 = s1 + nomeInsegnante1 + s2 + materia1; 
   cout << messaggio1 << endl;
   messaggio2 = s1 + nomeInsegnante2 + s2 + materia2;
   cout << messaggio2 << endl;
   messaggio3 = s1 + nomeInsegnante3 + s2 + materia3;
   cout << messaggio3 << endl;

   if (nomeInsegnante1 == nomeInsegnante2) 
      cout << "Gli insegnanti di " << materia1 << " e " << materia2 << " hanno lo stesso nome." << endl;
   else 
      cout << "Gli insegnanti di " << materia1 << " e " << materia2 << " hanno nomi diversi." << endl;

   if (nomeInsegnante1 == nomeInsegnante3) 
      cout << "Gli insegnanti di " << materia1 << " e " << materia3 << " hanno lo stesso nome." << endl;
   else 
      cout << "Gli insegnanti di " << materia1 << " e " << materia3 << " hanno nomi diversi." << endl;

   if (nomeInsegnante1 < nomeInsegnante2)
      cout << "I nomi in ordine alfabetico sono: " << nomeInsegnante1 << " , " << nomeInsegnante2 << endl;
   else
      cout << "I nomi in ordine alfabetico sono: " << nomeInsegnante2 << " , " << nomeInsegnante1 << endl;

   return 0;
}


Output:
Ciao, mi chiamo Rodolfo, e sono il tuo insegnante di informatica 
Ciao, mi chiamo Isabella, e sono il tuo insegnante di letteratura 
Ciao, mi chiamo Rodolfo, e sono il tuo insegnante di filosofia
Gli insegnanti di informatica  e letteratura  hanno nomi diversi.
Gli insegnanti di informatica  e filosofia hanno lo stesso nome.
I nomi in ordine alfabetico sono: Isabella , Rodolfo
```

Inoltre alle variabili di tipo string si possono applicare molte funzioni ed altri operatori.
* Esempio: date le variabili stringa di nome `s1` ed `s2` ed gli interi `i` ed `n`:
  * `s1.at(i)` ritorna il carattere (tipo `char`) alla posizione `i` della stringa
  * `s1[i]` anche ritorna il carattere (tipo `char`) alla posizione `i` della stringa
  * `s1.substr(i, n)` ritorna la sottostringa di `s1` a partire dal carattere in posizione `i` e di lunghezza `n` caratteri
  * `s1.insert(i, s2)` modifica la stringa `s1` inserendo in essa la stringa `s2` in posizione `i`
  * `s1.find(s2, i)` a partire dalla posizione `i` di `s1` cerca la sottostringa s2 e ritorna la posizione in cui la trova, altrimenti `string::npos`.
  * o semplicemente `s1.find(s2)` per cercare dall'inizio.

## Definizione di _Record_ e _Struttura_ (struct)
Un **record** è una **struttura di dati statica** composta da **elementi eterogenei** (che possono quindi essere di tipo diverso tra loro) detti **campi** o **attributi**, ciascuno identificato da un **nome** ed un **tipo**.

La **struttura di un record** definisce i campi che lo compongono.

* Un **record ha un `nome`** (identificatore) 
* e i suoi **campi hanno ognuno di essi un `nome` ed un `tipo`**, e possono contenere un valore del tipo definito

I **record** sono utili a **descrivere una categoria di oggetti** con **caratteristiche (o attributi) comuni**.

Esempio, per descrivere un insieme di oggetti della categoria **motocicletta** potremmo definire un
* **record** con **nome** `Motocicletta`
* con i seguenti **campi** ciascuno con un **nome** ed un **tipo**:
  * nome: `produttore` tipo: `string`
  * nome: `modello` tipo: `string`
  * nome: `cilindrata` tipo: `int`
  * nome: `kmPerLitro` tipo `float`

### Dichiarazione di un tipo struttura (record) in C++

Dichiarare un tipo struttura significa definire un tipo di dato che possiamo assegnare ad una nostra variabile.
```cpp 
struct nome_struttura {
   tipo_campo1 nome_campo1;
   tipo_campo2 nome_campo2;
   ...
   tipo_campoN nome_campoN;
};
```
Nota il `;` alla fine della definizione di struttura 

Una volta dichiarata la struttura possiamo dichiarare variabili di quel tipo.

Esempio:
* definiamo il tipo di struttura di nome `motocicletta`
* **dichiariamo variabili** di tipo Motocicletta, con o senza inizializzazione
* **assegniamo valori ai campi**
* e **stampiamo il valori contenuti nei campi**:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    
   struct Motocicletta {
      string produttore;
      string modello;
      int cilindrata;
      float kmPerLitro;
   };

   struct Motocicletta moto1, moto2;
   
   moto1.produttore = "Kawasubi";
   moto1.modello = "XT900";
   moto1.cilindrata = 900;
   moto1.kmPerLitro = 15.4;

   moto2.produttore = "Hondin";
   moto2.modello = "CGL3P";
   moto2.cilindrata = 600;
   moto2.kmPerLitro = 16.0;
   
   struct Motocicletta moto3 = { "Yammusi", "SuperYT", 1000, 12.5 };

   cout << "Moto vendute: " << endl;
   cout << "1. " << moto1.produttore << " " << moto1.modello  << " consumo:" << moto1.kmPerLitro << "km con 1 litro" << endl;
   cout << "2. " << moto2.produttore << " " << moto2.modello  << " consumo:" << moto2.kmPerLitro << "km con 1 litro" << endl;
   cout << "3. " << moto3.produttore << " " << moto3.modello  << " consumo:" << moto3.kmPerLitro << "km con 1 litro" << endl;

   return 0;
}

Output:
Moto vendute: 
1. Kawasubi XT900 consumo:15.4km con 1 litro
2. Hondin CGL3P consumo:16km con 1 litro
3. Yammusi SuperYT consumo:12.5km con 1 litro
```




