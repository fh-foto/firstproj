// schaltjahr01.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"
#include "math.h"
#include "stdlib.h"






int main()
{
	int jahr = 0;
	int erg;
	
	printf("Bitte geben Sie die Jahreszahl ein: ");
	scanf("%i", &jahr);
	erg = (jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0)) ?
		printf("Das Jahr %i ist ein Schaltjahr!\n", jahr) :
		printf("Das Jahr %i ist kein Schaltjahr!\n", jahr);










    return 0;
}

