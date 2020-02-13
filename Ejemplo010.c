#include<stdio.h>

int main(int argc, char *argv[])
{
	float x, cosx, fct;
	long int n, s, i;
	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	do{
		printf("Ingrese el numero de terminos: ");
		scanf("%ld", &n);
	}while(n<1);
	for(i=0, cosx=0, fct=1; i<n; i++)
	{
		s=-2*(i%2)+1;
		cosx += (s*fct);
		fct*=((x/(2*i+1))*(x/(2*i+2)));
	}
	printf("cos(%f)=%f\n", x, cosx);
	return 0;
}