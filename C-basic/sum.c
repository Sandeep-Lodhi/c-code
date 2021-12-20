//9. Write a C program that accepts two integers from the user and calculate the sum of the two integers.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,sum;
	printf("Entr the first integer value:\n");
	scanf("%d",&a);
	printf("Enter the second integer value:\n");
	scanf(" %d",&b);
	sum=a+b;
	printf("\nsum=%d", sum);
}
