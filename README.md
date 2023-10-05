# Project Description

Il progetto richiedeva di creare un algoritmo per l'ordinamento di un array di numeri, in un range di mosse massimo, utilizzando 2 stack.
Ci sono state fornite le indicazioni sulle mosse possibili che sono le seguenti:


- **sa**: Scambia i primi 2 elementi in cima alla pila a. Non fare nulla se c'è solo un elemento o nessun elemento.
- **sb**: Scambia i primi 2 elementi in cima alla pila b. Non fare nulla se c'è solo un elemento o nessun elemento.
- **ss** : Esegue sa e sb contemporaneamente.
- **pa**: Prende il primo elemento in cima alla pila b e lo mette in cima alla pila a. Non fare nulla se la pila b è vuota.
- **pb**: Prende il primo elemento in cima alla pila a e lo mette in cima alla pila b. Non fare nulla se la pila a è vuota.
- **ra**: Sposta tutti gli elementi della pila a in alto di 1 posizione. Il primo elemento diventa l'ultimo.
- **rb**: Sposta tutti gli elementi della pila b in alto di 1 posizione. Il primo elemento diventa l'ultimo.
- **rr**: Esegue ra e rb contemporaneamente.
- **rra**: Sposta tutti gli elementi della pila a in basso di 1 posizione. L'ultimo elemento diventa il primo.
- **rrb**: Sposta tutti gli elementi della pila b in basso di 1 posizione. L'ultimo elemento diventa il primo.
- **rrr**: Esegue rra e rrb contemporaneamente.

In seguito allo studio del problema, ho valutato di utillizare come algoritmo di ordinamento il Quicksort, che è un algoritmo ricorsivo in place non stabile.
La mia scelta è ricaduta su questo algoritmo in quanto l'ho trovato semplice da implementare e perfetto per il numero di mosse massime eseguibili dal programma per rispettare la consegna.

## ENG

The project required creating an algorithm for sorting an array of numbers within a maximum move limit, using 2 stacks. We were provided with instructions on the possible moves, which are as follows:

- **sa**: Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **sb**: Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **ss**: Execute both sa and sb simultaneously.
- **pa**: Push the first element at the top of stack b onto stack a. Do nothing if stack b is empty.
- **pb**: Push the first element at the top of stack a onto stack b. Do nothing if stack a is empty.
- **ra**: Rotate all elements of stack a up by 1 position. The first element becomes the last.
- **rb**: Rotate all elements of stack b up by 1 position. The first element becomes the last.
- **rr**: Execute both ra and rb simultaneously.
- **rra**: Reverse rotate all elements of stack a down by 1 position. The last element becomes the first.
- **rrb**: Reverse rotate all elements of stack b down by 1 position. The last element becomes the first.
- **rrr**: Execute both rra and rrb simultaneously.

After studying the problem, I decided to use the Quicksort algorithm as the sorting algorithm. Quicksort is a recursive, in-place, and unstable sorting algorithm. I chose this algorithm because I found it straightforward to implement and suitable for the maximum number of moves allowed by the program to meet the requirements.
