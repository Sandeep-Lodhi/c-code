#include<stdio.h>

struct Student
{
	int rno;
	char name[20];
	float fm;
}s;

main()
{
	FILE *fptr;
	          //binary
	//fptr=fopen("student.txt","r");
	fptr=fopen("student.omg","rb");
	
	//read data from file (student.txt) into memory of s 
	while(fread((char*)&s,1,sizeof(s),fptr))
	{
	
	
		printf("\nStudent Detail from file:");
		printf("\nRno=%d",s.rno);
		printf("\nName=%s",s.name);
		printf("\nMarks=%f",s.fm);
	}
	
	fclose(fptr);
}
