#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main(int argc, char *argv[])
{
	int n, max, min, aux, x[N], i, j;
	srand(time(NULL));
	do{
		printf("Ingrese el numero elementos: ");
		scanf("%d", &n);
	}while(n<1||n>N);
	printf("Ingrese el maximo: ");
	scanf("%d", &max);
	printf("Ingrese el minimo: ");
	scanf("%d", &min);
	if(min>max)
	{
		aux = max;
		max = min;
		min = aux;
	}
	printf("Vector aleatorio en el rango [%d, %d]\n", max, min);
	for(i=0; i<n; i++)
	{
		x[i]=(rand()%(max-min))+min;
		printf("x[%d] = %d\n", i+1, x[i]);
	}
	// Algoritmo de ordenamiento por intercambio o insersion
	for(i=1; i<n; i++)
	{
		aux = x[i];
		j = i-1;
		while(x[j]>aux)
		{
			x[j+1]=x[j];
			j--;
			if(j<0)
				break;
		}
		x[j+1]=aux;
	}
	printf("Vector ordenado en el rango [%d, %d]\n", max, min);
	for(i=0; i<n; i++)
		printf("x[%d] = %d\n", i+1, x[i]);
	return 0;
}