//11. Write a C program that accepts two item’s weight (floating points' values ) and 
//number of purchase (floating points' values) and calculate the average value of the items.
#include<stdio.h>
#include<stdlib.h>
main()
{
	float item1,item2,no1,no2,average;
	printf("inter values of items:\n");
	printf("item1->");
	scanf("%f",&item1);
	printf("no.-of items:");
	scanf("%f",&no1);
    printf("item2->");
    scanf("%f",&item2);
    printf("no.-of item2:");
    scanf("%f",&no2);
    average=((item1*no1)+(item2*no2))/(no1+no2);
    printf("averageo of items-->%f",average);
    
	
	
}
