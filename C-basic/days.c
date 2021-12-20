//8. Write a C program to convert specified days into years, weeks and days.
#include<stdio.h>
#include<stdlib.h>
main()
{
	int year,weeks,days;
	days=1329;
	//convert dayes to years,weeks and days
	year = days/365;
	weeks = (days%365)/7;
	days= days-((year*365)+(weeks*7));
	
	printf("\nyear:%d",year);
	printf("\nweeks:%d",weeks);
	printf("\ndays:%d",days);
}
