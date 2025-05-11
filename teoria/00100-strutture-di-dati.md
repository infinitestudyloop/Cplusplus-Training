# Strutture di Dati

* [Definizione di _Strutture di Dati_](00100-strutture-di-dati.md#definizione-di-strutture-di-dati)
* [Definizione di _Vettore_ o _Array monodimensionale_](00100-strutture-di-dati.md#definizione-di-vettore-o-array-monodimensionale)

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
* ogni elemento (o cella) può essere acceduto direttamente tramite la sua **posizione** o **indice**,
  * un numero **intero tra `0` ed `N-1`**, con **`N`** uguale alla **dimensione del vettore**
  * il primo elemento alla posizione con indice 0
  * il secondo elemento alla posizione con indice 1
  * ...
  * l'ultimo elemento alla posizione con indice N-1


## Definizione di _Matrice_ o _Array bi-dimensionale_

Una **matrice NxM**, è una **tabella** (bi-dimensionale) di **N righe** ed **M colonne**, contenente **elementi omogenei** (tutti dello stesso tipo) che si possono accedere tramite **due indici**, uno che indica **la riga** e l'altro **la colonna** dove sono collocati.   

Una **matrice** è simile ad un vettore, quindi è una **struttura di dati (statica)** che contiene una sequenza di elementi dello stesso tipo, 
* ma mentre il vettore ha 1 sola dimensione e possiamo immaginarlo come una seguenza composta da 1 singola riga
* la matrice invece ha 2 dimensioni e si può immaginare composta da piu sequenze di elementi cioè più righe.
* è comodo immaginare le righe in orizzontale e le colonne in verticale
* cosi un elemento della matrice si può identificare con la coppia (riga, colonna) come nel gioco della battaglia navale.
 




