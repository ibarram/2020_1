#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, n;
	float x, ex, num, den;
	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	do{
		printf("Ingrese el numero de iteraciones: ");
		scanf("%d", &n);
	}while(n<1);
	for(ex=0, i=0; i<n; i++)
	{
		for(j=0, num=1, den=1; j<i; j++)
		{
			num*=x;
			den*=(j+1);
		}
		ex+=(num/den);
		//printf("%d\t%f\t%f\t%f\t%f\n", i, num, den, num/den, ex);
	}
	printf("exp(%f) = %f\n", x, ex);
	return 0;
}