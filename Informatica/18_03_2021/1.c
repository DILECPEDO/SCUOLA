// Stampare la tabellina pitagorica fino a 10 . Provare a farne una versione con i bordi
// delle varie caselle
#include <stdio.h>

int main()
{
    // 10 linne 10 colonne
    for (int colonna = 0; colonna < 10; colonna++)
    {
        printf("\t %d", colonna);
    }
    printf("\n");
    for (int riga = 0; riga < 10; riga++)
    {
        printf("%d\t", riga);
        for (int colonna = 0; colonna < 10; colonna++)
        {
            printf("|%d|\t", colonna * riga);
        }

        printf("\n");
    }
}
