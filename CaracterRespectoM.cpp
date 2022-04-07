#include <stdio.h>
#include "Encontrar.h"

int main()
{
	char variable, objetivo='m';
        
	printf("Dime una letra: ");
	scanf(" %c", &variable);

	Encontrar x;

	x.comprobar(variable, objetivo);
	return 0;
	
}
