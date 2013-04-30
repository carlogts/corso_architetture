/*		Esercizio 5 asm: Dato un numero dire se � una potenza di 2		*/

#include <stdio.h>

void main()
	{

		// Variabili
		unsigned int num = 65546, ris = 0; // ris = 1 se il numero � potenza di 2, 0 se non lo �


		__asm
			{

				MOV EAX, num
				

				CMP EAX, 0		// EAX � = 0? Se si salta a Fine, se no continua
				JE Fine		

	Logic_and: 		TEST EAX, 1		// AND logico tra EAX e 1
				JZ Shiftaggio
				
				CMP EAX, 1
				JNE Fine

				MOV ris, 1
				JMP Fine

	Shiftaggio:		ROR EAX, 1
				JMP Logic_and

		 Fine:  

			
			}

		if ( ris == 1 )
			printf("%d � una potenza di 2", num);
		else
			printf("%d non � una potenza di 2", num);

			system("PAUSE");
	}
