#include<stdio.h>

int main(int argc, char *argv[])
{
	float x, cosx, num, fct;
	long int n, s, den, i, j;
	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	do{
		printf("Ingrese el numero de terminos: ");
		scanf("%ld", &n);
	}while(n<1);
	for(i=0, cosx=0; i<n; i++)
	{
		s=-2*(i%2)+1;
		for(j=0,num=1,den=1;j<2*i;j++)
		{
			num*=x;
			den*=(j+1);
		}
		fct=s*num/den;
		cosx += fct;
	}
	printf("cos(%f)=%f\n", x, cosx);
	return 0;
}