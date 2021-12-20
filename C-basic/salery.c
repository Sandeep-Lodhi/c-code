//12. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. 
//Print the employee's ID and salary (with two decimal places) of a particular month.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int hr;
	char id[10];
	double amount,salary;
	printf("Employee's ID:");
	scanf("%s",&id);
	printf("working hours:");
	scanf("%d",&hr);
	printf("Employee's salery/hr:");
	scanf("%lf",&amount);
	salary=amount*hr;
	printf("Employee id:%s",id);
	printf("\nsalary of the month:u$ %.2lf",salary);
	
	
}

