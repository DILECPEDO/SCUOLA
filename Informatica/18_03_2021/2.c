// Scrivere un programma che, usando una funzione, dato un numero in input
// dica tra quali interi e' compresa la sua radice
// quadrata procedendo per tentativi (senza usare la funzione sqrt).
// esempio dato in input 70 deve restituire "la radice quadrata di 70 e'
// compresa tra 8 e 9, poiche' 8*8=64 < 70 < 81=9*9

#include <stdio.h>

int funzione(int n)
{
    int prodotto, x = 0;
    do
    {
        x = x + 1;
        prodotto = x * x;
    } while (prodotto < n);
    return x;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int x = funzione(n);
    printf("La radice di %d è compresa in [%d,%d]", n, x - 1, x);
}