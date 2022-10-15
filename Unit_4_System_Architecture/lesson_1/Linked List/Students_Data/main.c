/*
 * main.c
 *
 *  Created on: Oct 10, 2022
 *      Author: 20109
 */
#include "student.h"
extern struct SStudent* PFirstStudent;
int main()
{
	char choice[40],another_choice[20];
	int exit=0;

	while(exit==0)
	{
		PRINT("Choose one of the following options:\n");
		PRINT("1-Add a student record\n");
		PRINT("2-Delete a student record\n");
		PRINT("3-View all student records\n");
		PRINT("4-Delete all student records\n");
		PRINT("5-Get record information\n");
		PRINT("6-Get number of records(iterative function)\n");
		PRINT("7-Get number of records(recursive function)\n");
		PRINT("8-Get record information from the end of list\n");
		PRINT("9-Get the information of the middle record\n");
		PRINT("10-Reverse the records\n");
		PRINT("11-Detect the loop\n");
		PRINT("Enter your choice: ");
		scanf("%s",choice);
		switch(atoi(choice))
		{
		case 1:
			Add_Student();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			View_Student();
			break;
		case 4:
			Delete_All_Students();
			break;
		case 5:
			Get_nth_node();
			break;
		case 6:
			PRINT("Number of records: %d\n",Get_Number_of_Records());
			break;
		case 7:
			PRINT("Number of records: %d\n",Get_Number_of_Records_R(PFirstStudent));
			break;
		case 8:
			Get_nth_node_from_end();
			break;
		case 9:
			Get_Middle_Node();
			break;
		case 10:
			Reverse_Records();
			break;
		case 11:
			if(!Detect_Loop())
			{
				PRINT("\nNo loop");
			}
			break;
		default:
			PRINT("wrong choice!");
			break;
		}
		PRINT("\n-------------------------------------------------\n");
		PRINT("Do you need to choose another option:\n");
		PRINT("1-Yes\n");
		PRINT("2-No\n");
		scanf("%s",another_choice);
		switch(atoi(another_choice))
		{
		case 1:
			exit=0;
			break;
		case 2:
			exit=1;
			break;
		default:
			PRINT("wrong choice!");
			break;
		}
	}
	return 0;
}

