/* 3- Que rellene de forma aleatoria un array de 10 elementos,
*  con los numeros primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int main()
{
	int x,cont,x2,cont2,numero[MAX];
	cont2=0;
	
	for(x=1; x<=MAX; x++)
		{
			cont=0;
			for (x2=1; x2<=x; x2++)
				{
					if (x%x2 == 0)
						{
			   				cont++;
		    			}
		    	}
			if (cont==2 || x2==1 || x2==0)
				{
					numero[cont2] = x;
					cont2++;
				}
		}
	for(x=1; x<cont2; x++)
		{
			printf("%d\n", numero[x]);
		}
	return 0;
}
