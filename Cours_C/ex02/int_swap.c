#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int	main()
{
	int a;
	int b;
	int s;

	printf("Initialisez a = ");
	scanf("%d", &a);
	printf("Initialisez b = ");
	scanf("%d", &b);
	printf("a = %d\nb = %d\n", a, b);
	
	s = a;
	a = b;
	b = s;
	printf("Maintenant\na = %d\nb = %d\n", a, b);
}
