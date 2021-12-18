/************************************************   student project ***********************************************/

/************************************************   Header files inclusion ***********************************************/

#include<stdio.h> // for printf() scanf()
#include<conio.h> //for getch()
#include<stdlib.h> //for system()
#include<process.h>// exit()


/************************************************   Defining Struture Student ***********************************************/

struct Student
{
	int rno;
	char name[20];
	float fm;
}s; //s(structure vairable=global)

/************************************************  Declaration of fucntion ***********************************************/

void input();
void showall();
void search();
void modify();
void Delete(); //delete its keyword  D(captital)




/************************************************ input() function 
  to accept user input and store into file ---student.omg ***********************************************/

void input()
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


/************************************************ show() function 
  read all data from file(student.omg) and display  one by one***********************************************/

void showall(){
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


/************************************************ input() function 
  read data from file (student.omg) and search specific rno ***********************************************/

void search(){

    int sno,f=0;
	FILE *fptr;
	          //binary
	//fptr=fopen("student.txt","r");
	fptr=fopen("student.omg","rb");
	printf("Enter rno for search:");
	scanf("%d",&sno);
	
	//read data from file (student.txt) into memory of s 
	while(fread((char*)&s,1,sizeof(s),fptr))
	{
	
	   if(sno==s.rno)
	   {
	   
		printf("\nStudent Detail from file:");
		printf("\nRno=%d",s.rno);
		printf("\nName=%s",s.name);
		printf("\nMarks=%f",s.fm);
	    f=1;
	    break;
	  
	  }
	  
	}
	
	
	if(f==0)
		printf("Student rno not found");
	
	
	fclose(fptr);
	
}



void modify(){
	
	
}
void Delete(){

}

