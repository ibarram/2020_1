#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main(int argc, char *argv[])
{
	int n, max, min, x[N], i;
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
		max=max+min;
		min=max-min;
		max=max-min;
	}
	for(i=0; i<n; i++)
	{
		x[i]=(rand()%(max-min))+min;
		printf("x[%d] = %d\n", i+1, x[i]);
	}
	return 0;
}