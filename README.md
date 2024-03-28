# Vecini

Cerință:

Se citește de la tastatură o valoare N, reprezentând numărul de elemente alte unui vector V1, împreună cu cele N elemente constituente vectorului.

Se va citi de asemenea și o valoare K ce reprezintă numărul de vecini (se vor lua în considerare K vecini la stânga + K vecini la dreapta elementului respectiv).

Se cere să afișeze pentru fiecare element care poate avea vecinătatea K (și la stânga și la dreapta) cel mai apropiat vecin ca valoare (nu poziție) de acesta.

Dacă există printre vecini două valori la distanță egală de elementul curent, se va alege primul element din vector găsit (pornind de la stânga la dreapta).

Restricții și precizări:

0<N<104

0<K<102

INT_MIN < element_vector < INT_MAX

Se garantează: 2K < N

Date de intrare:

Pe prima linie N și N valori

Pe a doua linie K

Date de ieșire:

Pentru fiecare element care poate avea vecinătatea K cea mai apropiată valoare de acesta dintre vecini.

Exemplu:

Date de intrare:

10 2 7 -2 -3 -1 -9 7 -2 1 -3

2

Date de ieșire:

-3 -2 -2 -3 1 -3

Explicație: Primul element care are 2 vecini și în stânga și în dreapta este elementul -2 (de pe poziția 2). Vecinii sunt: 2, 7, -3 și -1. În acest caz valoarea -2 va avea 2 vecini aflați la aceași distanță: -3 și -1. Se va afișa prima valoare din vectorul citit, adică -3.

 

La următorul pas, elementul curent va fi -3. Vecinii sunt: 7, -2, -1 și -9. Se va afișa -2.

La următorul pas, elementul curent va fi -1. Vecinii sunt:  -2, 1, -9, 7. Se va afișa -2.

Se continuă procesul până la ultimul element care poate avea toți vecinii: -2 (de pe poziția 7).


