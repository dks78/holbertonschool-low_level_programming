#include <stdio.h>
#include <time.h>
#include <stdlib.h> 


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0 )
	{ 
		printf("%d est positif,\n", n);
	}else if ( n == 0 )
	{
		printf("%d est zéro,\n", n);
	} else
	{
		printf("%d est négatif,\n", n);
	}
	return (0);
}
