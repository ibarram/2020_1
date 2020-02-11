#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, den, s;
	float pi;
	do{
		printf("Ingrese el numero de iteraciones: ");
		scanf("%d", &n);
	}while(n<1);
	for(pi=0, i=0; i<n; i++)
	{
		s = 2*((i+1)%2)-1;
		den = 2*i+1;
		pi+=((1.0*s)/den);
	}
	pi*=4;
	printf("PI = %f", pi);
	return 0;
}