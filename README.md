# Tema 1 POO
144 - Dumea Alexandru Gabriel

## Cerinte
Se considera 
```
Class Nod { 
    int info;
    Nod* prev, next;
}
```
* constructori de inițializare și parametrizati pentru clasa Nod;
* destructor pentru clasa Nod;

#### Clasa ```ListaDubluInlantuita``` are:
* doi membri privati „Nod*” reprezentând primul și ultimul element;
* metoda publica de adaugare a unui element pe o poziție;
* supraincarcare a operatorului >>, realizata prin utilizarea succesiva a metodei decarata anterior;
* supraincarcare a operatorului << pentru afisarea listei in ambele sensuri, in aceeasi funcție;
* metoda publica de stergere a unui element de pe o poziție;
* supraincarcarea operatorului +, care sa efectueze concatenarea a doua liste dublu inlantuite, rezultand într-o noua lista dublu inlantuita.
