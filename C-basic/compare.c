//13. Write a C program that accepts three integers and find the maximum of three.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int ino1,ino2,ino3,result,max;
	printf("first integer value:");
	scanf("%d",&ino1);
	printf("second integer value:");
	scanf("%d",&ino2);
	printf("third integer values:");
	scanf("%d",&ino3);
	result=(ino1+ino2+abs(ino2-ino2))/2;
    max=(result+ino3+abs(result-ino3))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;

}
