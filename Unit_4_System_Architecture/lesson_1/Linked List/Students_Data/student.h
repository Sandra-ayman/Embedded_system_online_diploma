/*
 * student.h
 *
 *  Created on: Oct 10, 2022
 *      Author: 20109
 */

#ifndef STUDENT_H_
#define STUDENT_H_
//libraries
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

#define PRINT(...) printf(__VA_ARGS__);\
	               fflush(stdin);\
	               fflush(stdout);


//effective data
struct SStudent_Data
{
	int ID;
	char Full_name[40];
	float height;
};

//linked list for students
struct SStudent
{
	struct SStudent_Data student;
	struct SStudent* PNextStudent;
};

//Linked List APIs
//Add a New Student Record
void Add_Student();
//Delete a selected student
int Delete_Student();
//view all students in the list
void View_Student();
//Delete All Student records
void Delete_All_Students();
//get nth node in linked list
void Get_nth_node();
//Get the number of records(iterative function)
int Get_Number_of_Records();
//Get the number of records(recursive function)
int Get_Number_of_Records_R(struct SStudent* PCheckStudent);
//get nth node in linked list from the end
void Get_nth_node_from_end();
//get the middle node in the list
void Get_Middle_Node();
//reverse the list
void Reverse_Records();
//detect loop
int Detect_Loop();

#endif /* STUDENT_H_ */
