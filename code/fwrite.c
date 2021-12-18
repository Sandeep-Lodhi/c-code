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
	//fptr=fopen("student.txt","w");
	
	fptr=fopen("student.omg","ab");
	
	//read data from console to memroy s(RAM)
	printf("Enter Rno:");
	scanf("%d",&s.rno);
	printf("Enter Name:");
	fflush(stdin);
	gets(s.name);
	printf("Enter marks:");
	scanf("%f",&s.fm);
	
	//write data from memory of s to file
	fwrite((char*)&s,1,sizeof(s),fptr);
	
	fclose(fptr);
}
