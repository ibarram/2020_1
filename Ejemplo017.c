#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main(int argc, char *argv[])
{
	int n, max, min, x[N], i, j, h[N], rango;
	srand(time(NULL));
	do{
		printf("Ingrese el numero elementos: ");
		scanf("%d", &n);
	}while(n<1||n>N);
	do{
		printf("Ingrese el maximo: ");
		scanf("%d", &max);
		printf("Ingrese el minimo: ");
		scanf("%d", &min);
		if(min>max)
		{
			max ^= min;
			min ^= max;
			max ^= min;
		}
		rango = max-min+1;
	}while(rango>N);
	printf("Vector aleatorio en el rango [%d, %d]\n", max, min);
	for(i=0; i<n; i++)
	{
		x[i]=(rand()%(max-min))+min;
		printf("x[%d] = %d\n", i+1, x[i]);
	}
	// Algoritmo de ordenamiento por conteo
	for(i=0; i<rango; i++)
		h[i]=0;
	for(i=0; i<n; i++)
		h[x[i]-min]++;
	i=0;
	j=0;
	while(i<n)
	{
		while(h[j])
		{
			x[i++]=min+j;
			h[j]--;
		}
		j++;
		if(j>rango)
			break;
	}
	printf("Vector ordenado en el rango [%d, %d]\n", max, min);
	for(i=0; i<n; i++)
		printf("x[%d] = %d\n", i+1, x[i]);
	return 0;
}