//10. Write a C program that accepts two integers from the user and calculate the product of the two integers.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int ino1,ino2,product;
	printf("Enter first ineger value:");
	scanf("%d",&ino1);
	printf("\nEnter second integer value :");
	scanf("%d",&ino2);
	product=ino1*ino2;
	printf("\nproduct of two integer values:%d",product);
	
	return (0);
}
