//2.Write a C program to get the C version you are using.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	#if__STDC_VERSION__ >=201710L
	  printf("We are using C18!\n");
	#elif__STDC_VERSION__ >=201112L
	  printf("we are using C11!\n");
	#elif__STDC_VERSION__ >= 199901L
	  printf("we are using C99!\n");
	#else
	  printf("We are using C89/C90!\n");
	#endif
	  return 0;
	 
	
}
