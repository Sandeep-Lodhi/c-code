//7. Write a C program to display multiple variables.
//a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
/*
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a= 125,b= 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c= 'w';
	unsigned long ux = 2541567890;
	printf("\na+c=%d",a+c);
	printf("\nx+c=%f",x+c);
	printf("\ndx+x=%lf",dx+x);
	printf("\n((int)dx)+ax=%ld",((int)dx)+ax);
	printf("\na+x=%f",a+x);
	printf("\ns+b=%d",s+b);
	printf("\nax+b=%ld",ax+b);
	printf("\ns+c=%hd",s+c);
	printf("\nax+c=%ld",ax+c);
	printf("\nax+ux=%lu",ax+ux);
}
