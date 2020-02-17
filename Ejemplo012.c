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
	i=0;
	num=fct;
	den=1;
	lnx=0;
	while(i<n)
	{
		lnx+=(num/den);
		num*=(fct*fct);
		den+=2;
		i++;
	}
	lnx*=2;
	printf("ln(%f)=%.10f\n",x,lnx);
	return 0;
}