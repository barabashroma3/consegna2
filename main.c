#include <stdio.h>

/*

Scrivi un programma che legge due numeri reali e stampa un messaggio: "Il maggiore fra i due numeri è
 il 1°" oppure "Il maggiore fra i due numeri è il 2°",
a seconda che il maggiore fra i due numeri sia il primo o il secondo 
 * SENZA USARE ISTRUZIONI STRUTTURATE.
Suggerimenti: Il codice ASCII del carattere 'è' è 138, mentre il codice ASCII 
 * del carattere '°' è 167. 
 * Ricorda inoltre che il confronto fra due numeri restituisce 0 oppure 1. 
Nel codice metti un commento iniziale con la specifica del problema.

CONSEGNA QUESTO ESERCIZIO: Sulla home page del corso, fai click su Consegna Esercizio, 
 * subito sotto a Testo Esercitazione.
 Si apre una pagina che contiene un'area con una grossa freccia blu lampeggiante:
 è qui che devi trascinare il file main.c. 

 */
int main(int argc, char **argv)
{
	float a = 0;
    float b = 0;
    
    printf("Inserisci a:\n");
    scanf("%f", &a);
    
    
    printf("Inserisci b:\n");
    scanf("%f", &b);
    
    printf("Il maggiore tra i due numeri %c il %d%c", 138, (a > b) ? 1 : 2, 167);
	return 0;
}
