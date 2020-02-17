#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, n, den;
	float x, lnx, fct, num;
	do{
		printf("Ingrese el valor de x: ");
		scanf("%f", &x);
	}while(x<=0);
	do{
		printf("Ingrese el numero de terminos: ");
		scanf("%d", &n);
	}while(n<1);
	fct = (x-1)/(x+1);
	for(i=0,lnx=0;i<n;i++)
	{
		den=2*i+1;
		for(j=0,num=1;j<2*i+1;j++)
			num*=fct;
		lnx+=(num/den);
	}
	lnx*=2;
	printf("ln(%f)=%.10f\n",x,lnx);
	return 0;
}