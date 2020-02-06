#include<stdio.h>

int main(int argc, char *argv[])
{
	long int N, M, X, Y, A;
	scanf("%d %d %d %d", &N, &M, &X, &Y);
	A = (M+N*Y)/(X+Y);
	A = (A>=N?N:A);
	printf("%d", A);
	return 0;
}