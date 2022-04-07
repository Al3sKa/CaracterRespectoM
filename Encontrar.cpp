#include "Encontrar.h"
#include <stdio.h>

int Encontrar::comprobar(char var1, char ob1)
{
	char* letra;
	letra = &var1;	 
	
	printf("La letra que escribiste es la %c, ", *letra);
    
    if (*letra == ob1)
    	printf("es lo mismo.");
    else if (*letra > ob1)
    	printf("esta despues de la m.");
    else if (*letra < ob1)
    	printf("esta antes de la m.");
    	
    return 0;
}
