#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, n;
	float x, ex, fct;
	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	do{
		printf("Ingrese el numero de iteraciones: ");
		scanf("%d", &n);
	}while(n<1);
	for(ex=0, i=0; i<n; i++)
	{
		for(j=0, fct=1; j<i; j++)
			fct*=(x/(j+1));
		ex+=fct;
	}
	printf("exp(%f) = %f\n", x, ex);
	return 0;
}