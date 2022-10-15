/*
 * student.c
 *
 *  Created on: Oct 10, 2022
 *      Author: 20109
 */
#include "student.h"
//pointer to the first student
struct SStudent* PFirstStudent=NULL;
//Linked List APIs
//Add a New Student Record
void Add_Student()
{
	struct SStudent* PNewStudent;
	struct SStudent* PLastStudent;
	char lastName[20];
	//check the list is empty ?
	if(PFirstStudent == NULL)
	{
		//create a new record
		PNewStudent =(struct SStudent*)malloc(sizeof(struct SStudent));
		//Assign the first student to it
		PFirstStudent=PNewStudent;
	}
	else
	{
		//navigate until reach to the last record
		PLastStudent=PFirstStudent;
		while(PLastStudent->PNextStudent)
		{
			PLastStudent=PLastStudent->PNextStudent;
		}
		//create a new record
		PNewStudent =(struct SStudent*)malloc(sizeof(struct SStudent));
		PLastStudent->PNextStudent=PNewStudent;
	}
	//fill the record
	PRINT("Enter the ID:");
	scanf("%d",&PNewStudent->student.ID);
	PRINT("Enter student First Name:");;
	scanf("%s",&PNewStudent->student.Full_name);
	PRINT("Enter student Last Name:");
	scanf("%s",&lastName);
	strcat(PNewStudent->student.Full_name," ");
	strcat(PNewStudent->student.Full_name,lastName);
	PRINT("Enter the Height of the student:");
	scanf("%f",&PNewStudent->student.height);
	//Assign the pointer of the next record to null
	PNewStudent->PNextStudent = NULL;
}
//Delete a selected student
int Delete_Student()
{
	int selected_id;
	//get the selected ID to be deleted
	PRINT("Enter Student ID to be selected: ");
	scanf("%d",&selected_id);
	//check the list has records
	if(PFirstStudent)
	{
		struct SStudent* PPreviousStudent=NULL;
		struct SStudent* PSelectedStudent=PFirstStudent;
		//loop until found the selected ID
		while(PSelectedStudent)
		{
			//compare the selected id with records
			if(PSelectedStudent->student.ID==selected_id)
			{
				if(PPreviousStudent)//selected id is not the first id
				{
					//check the next pointer of selected ID is NULL
					if(PSelectedStudent->PNextStudent==NULL)
					{
						PPreviousStudent->PNextStudent=NULL;
					}
					else
					{
						PPreviousStudent->PNextStudent=PSelectedStudent->PNextStudent;
					}
				}
				else //student id is the first id
				{
					PFirstStudent=PSelectedStudent->PNextStudent;
				}
				free(PSelectedStudent);
				return 1;//find it :)
			}
			//store previous record pointer
			PPreviousStudent = PSelectedStudent;
			PSelectedStudent=PSelectedStudent->PNextStudent;
		}
	}
	PRINT("\n can not find the ID ");
	return 0;//can not find it
}
//view all students in the list
void View_Student()
{
	struct SStudent* PCurrentStudent=PFirstStudent;
	int count=0;
	//check the list is empty
	if(PFirstStudent == NULL)
	{
		PRINT("\n The list is Empty!");
	}
	else
	{
		//loop until the end of list
		while(PCurrentStudent)
		{
			PRINT("\n Record number %d: ",count+1);
			PRINT("\n\t Student ID: %d",PCurrentStudent->student.ID);
			PRINT("\n\t Student Full Name: %s",PCurrentStudent->student.Full_name);
			PRINT("\n\t Student Height: %f",PCurrentStudent->student.height);
			PRINT("\n-------------------------------------------------\n");
			PCurrentStudent=PCurrentStudent->PNextStudent;
			count++;
		}
	}
}
//Delete All Student records
void Delete_All_Students()
{
	struct SStudent* PCurrentStudent=PFirstStudent;
	//check the list is empty
	if(PFirstStudent == NULL)
	{
		PRINT("\n The list is Empty!\n");
	}
	else
	{
		//loop until the list to be empty
		while(PCurrentStudent)
		{
			struct SStudent* PTempStudent=PCurrentStudent;
			PCurrentStudent=PCurrentStudent->PNextStudent;
			free(PTempStudent);
		}
		PFirstStudent = NULL;
	}
}
//get nth node in linked list
void Get_nth_node()
{
	int count=1,index,exit=0;
	PRINT("\nEnter the index of data in the list: ");
	scanf("%d",&index);
	struct SStudent* PCurrentStudent=PFirstStudent;
	//check the list is Empty
	if(PCurrentStudent)
	{
		//loop until find the index
		while(exit==0)
		{
			if(count == index)
			{//view the data
				PRINT("\n Record number %d: ",index);
				PRINT("\n\t Student ID: %d",PCurrentStudent->student.ID);
				PRINT("\n\t Student Full Name: %s",PCurrentStudent->student.Full_name);
				PRINT("\n\t Student Height: %f",PCurrentStudent->student.height);
				PRINT("\n-------------------------------------------------\n");
				exit=1;
			}
			else
			{
				PCurrentStudent=PCurrentStudent->PNextStudent;
				count++;
			}
		}
	}
	else
	{
		PRINT("The list is Empty!");
	}
}
//Get the number of records(iterative function)
int Get_Number_of_Records()
{
	int count=0;
	struct SStudent* PCurrentStudent=PFirstStudent;
	//check the list is Empty
	if(PCurrentStudent)
	{
		while(PCurrentStudent)
		{
			PCurrentStudent=PCurrentStudent->PNextStudent;
			count++;
		}
	}
	else
	{
		PRINT("The list is Empty!");
	}
	if(count == 1)
	{
		return 0;
	}
	else
	{
		return count;
	}
}
//Get the number of records(recursive function)
int Get_Number_of_Records_R(struct SStudent* PCheckStudent)
{
	if(PCheckStudent)
	{
		return 1 + (Get_Number_of_Records_R(PCheckStudent->PNextStudent));
	}
	else
	{
		return 0;
	}
}
//get nth node in linked list from the end
void Get_nth_node_from_end()
{
	int n,count=0;
	struct SStudent* PMainStudent=PFirstStudent;
	struct SStudent* PRefStudent=PFirstStudent;
	PRINT("Enter the index from the end of the list: ");
	scanf("%d",&n);
	if(PRefStudent)
	{
		//loop until reach to the end
		while(PRefStudent)
		{
			if(count == n)//the main pointer start to move
			{
				PRefStudent=PRefStudent->PNextStudent;
				PMainStudent=PMainStudent->PNextStudent;
			}
			else//ref pointer move until reach to the end
			{
				PRefStudent=PRefStudent->PNextStudent;
				count++;
			}
		}
		//view the data of this node
		PRINT("\n\t Student ID: %d",PMainStudent->student.ID);
		PRINT("\n\t Student Full Name: %s",PMainStudent->student.Full_name);
		PRINT("\n\t Student Height: %f",PMainStudent->student.height);
		PRINT("\n-------------------------------------------------\n");
	}
	else
	{
		PRINT("The list is Empty!");
	}
}
//get the middle node in the list
void Get_Middle_Node()
{
	struct SStudent* PSlowStudent=PFirstStudent;
	struct SStudent* PFastStudent=PFirstStudent;
	//check the list is empty
	if(PFastStudent)
	{
		//loop until reach to end of list
		while(PFastStudent)
		{
			//check that the next of fast pointer is null
			if(PFastStudent->PNextStudent != NULL)
			{
				PFastStudent=PFastStudent->PNextStudent->PNextStudent;
				PSlowStudent=PSlowStudent->PNextStudent;
			}
			else
			{
				PFastStudent=PFastStudent->PNextStudent;
			}
		}
		//view the data of this node
		PRINT("\n\t Student ID: %d",PSlowStudent->student.ID);
		PRINT("\n\t Student Full Name: %s",PSlowStudent->student.Full_name);
		PRINT("\n\t Student Height: %f",PSlowStudent->student.height);
		PRINT("\n-------------------------------------------------\n");
	}
	else
	{
		PRINT("The list is Empty!");
	}
}
//reverse the list
void Reverse_Records()
{
	struct SStudent* PCurrentStudent=PFirstStudent->PNextStudent;
	struct SStudent* PPrevStudent=PFirstStudent;
	struct SStudent* PNextStudent=NULL;
	//check the list is empty
	if(PFirstStudent)
	{
		while(PCurrentStudent)
		{
			PNextStudent=PCurrentStudent->PNextStudent;
			PCurrentStudent->PNextStudent = PPrevStudent;
			PPrevStudent = PCurrentStudent;
			PCurrentStudent =PNextStudent;
		}
		PFirstStudent->PNextStudent = NULL;
		PFirstStudent =PPrevStudent;
	}
	else
	{
		PRINT("The list is Empty!");
	}
}
//detect loop
int Detect_Loop()
{
	struct SStudent* PSlowStudent=PFirstStudent;
	struct SStudent* PFastStudent=PFirstStudent;
	while(PSlowStudent && PFastStudent && PFastStudent->PNextStudent)
	{
		PSlowStudent=PSlowStudent->PNextStudent;
		PFastStudent=PFastStudent->PNextStudent->PNextStudent;
		if(PSlowStudent==PFastStudent)
		{
			PRINT("\nThere is a loop");
			return 1;
		}
	}
	return 0;
}
