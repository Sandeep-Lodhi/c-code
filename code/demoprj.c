/************************************************   main function of program ***********************************************/
#include "project.h"
main()
{
  int ich;
  while(1) //infinite loop exit  using case choice(6)----exit(0)
  {
  	system("cls");
  	printf("\n1.input" );
  	printf("\n2.show all");
  	printf("\n3.search");
  	printf("\n4.update");
  	printf("\n5.delete");
  	printf("\n6.exit");
  	printf("\nEnter your choice:");
  	scanf("%d",&ich);
  	system("cls");
  	switch(ich) //switch to select
  	{
  		case 1:
  			//input
  			input();
  		break;
		case 2:
		   //showall
		   showall();
		break;
		case 3:
		   //search
		   search();
		break;
		case 4:
			//modify
			modify();
		break;
		case 5:
			//delete
			Delete();
		break;
		case 6:
			//exit //0====exit with sucess
			exit(0); //process.h
		default:
			printf("Wrong choice");
  			
	  }//switch closed here
	  printf("\n");
	  system("pause");
	  }//while closed here	
}//main closed here
//delete its keyword  D(captital)
