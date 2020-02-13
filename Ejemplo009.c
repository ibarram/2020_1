#include<stdio.h>

int main(int argc, char *argv[])
{
	float x, cosx, fct;
	long int n, s, i, j;
	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	do{
		printf("Ingrese el numero de terminos: ");
		scanf("%ld", &n);
	}while(n<1);
	for(i=0, cosx=0; i<n; i++)
	{
		s=-2*(i%2)+1;
		for(j=0,fct=1;j<2*i;j++)
		{
			fct*=(x/(j+1));
		}
		fct*=s;
		cosx += fct;
	}
	printf("cos(%f)=%f\n", x, cosx);
	return 0;
}