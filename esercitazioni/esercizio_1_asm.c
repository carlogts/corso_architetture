/*
*
*	Esercizio 1 ASM : Moltiplicare due numeri tramite somme ripetute
*
*/


#include <stdio.h>

void main()
	{
		unsigned int num_1 = 1, num_2 = 5, prodotto;

		__asm
			{
				MOV ECX, num_2

				XOR EAX, EAX
		Ciclo:  ADD EAX, num_1
				LOOP Ciclo

				XOR prodotto, prodotto

				MOV prodotto, EAX
			}

		printf("Il prodotto tra %d e %d è %d", num_1, num_2, prodotto);


	}