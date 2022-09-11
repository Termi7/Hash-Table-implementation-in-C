#pragma once // Prevents the header file from loading multiple times
#include "headers.h"

// Constants for the Student Structure
#define EMAIL_SIZE 18
#define NAME_SIZE 24
#define NUMBER_SIZE 10

// Constants for the Hash Table
#define HASH_TABLE_SEGMENTS 7 // Used in the hashing algoritm
#define MOD_SIZE 5 // Used in the hashing algoritm
#define NEW_LINE 10 // Newline character code
#define TABLE_SIZE 35 // Number of available spaces


struct student
{
	char name[NAME_SIZE];
	char number[NUMBER_SIZE];
	char email[EMAIL_SIZE];
	int credits;
	double gpa;
};
int computerHash(char* studentName);
void displayHashTable(struct student* hashTable[]);
void displayRecord(struct student* temp, int index);
void initializeTable(struct student* hashTable[]);
void insertStudent(struct student* hashTable[], struct student* temp);
bool testEmailFormat(struct student temp);
// bool testStudentData(struct student temp);



int computerHash(char* input)
{
	int hashValue=0;
	int i = 0;
	while(input[i]!='\0'){
  //  printf("\nASCII Value of %c = %d", str[i], str[i]);
	 hashValue = input[i]+ hashValue;
   i++;
	}
	return (int)(hashValue%MOD_SIZE*HASH_TABLE_SEGMENTS);

 }

// // computerHash(char* input)
// int computerHash(char input[])
// {
//    int (hashValue = 0;
//    for (int i = 0; i < input.length(); i++)
//       hashValue = (3*hashValue + input[i]);
//    return (int)(hashValue%MOD_SIZE*HASH_TABLE_SEGMENTS);
// }


void displayHashTable(struct student* hashTable[])
{
	int i = 0;
	printf("Hash Table Log\n");
				 printf("--------------\n");
   for(i = 0; i<TABLE_SIZE; i++) {
		if(hashTable[i] != NULL){
     
        //  printf(" (%d,%d)",hashArray[i]->key,hashArray[i]->data);
				 
				 printf("Added Student to Hash Table: %-20s        Target: %-2d, Actual: %-2d\n", hashTable[i]->name, computerHash(hashTable[i]->name), i);
	
      // else
      //    printf(" ~~ ");
   }
	 }
	
}

void displayRecord(struct student* temp, int index)
{
	printf("Hash Table Contents\n");
	printf("-----------------\n");
	printf("%s", " ");
	printf("Index  Name                  Number     Email Address      Credits  GPA");
	printf("-----  --------------------  ---------  -----------------  -------  ---");
  printf("%d  %-20s          %s  %-16s       %d  %f", index, temp->name, temp->number, temp->email, temp->credits, temp->gpa);
	
}

void initializeTable(struct student* hashTable[])
{
	
	 for(int i=0;i<TABLE_SIZE; i++){
        hashTable[i] =NULL;
				
    }
}

void insertStudent(struct student* hashTable[], struct student* temp)
{
	// Do not forget to use the malloc() function to reserve space for the student structure
	// Do not forget to use the strcpy() function to store the string data in the hash table
	
	//int * ptrMemomry ;

	 int key;
	 key =computerHash(temp->name);

	

	struct student *ptrMemory = malloc (sizeof(struct student));

		strcpy(ptrMemory->name, temp->name);
		strcpy(ptrMemory->name, temp->name);
		strcpy(ptrMemory->name, temp->name);
		ptrMemory->credits=temp->credits;
		ptrMemory->gpa=temp->gpa;

		int target=key;
		
		// while(hashTable[key]!= NULL && strcmp (hashTable[key]->name, ptrMemory->name)==0){
		// 	// while(strcmp (hashTable[key].name, temp->name)==0){
				
		// 		key = key +1;
				

    //      key %=TABLE_SIZE;
		// 	}
		while(hashTable[key]!= NULL){
					if(strcmp (hashTable[key]->name, ptrMemory->name)==0){
			// while(strcmp (hashTable[key].name, temp->name)==0){
				   displayError(11,hashTable[key]->name);
				   break;
					}
				
				key = key +1;
				

         key %=TABLE_SIZE;
			
		}
			int actual = key;
			hashTable[key]= ptrMemory;

			


		}



    // newNode->next = NULL;
	



bool testEmailFormat(struct student temp)
{
  char string[4];
	char string1[4];
  if(temp.email[0]=='u'&&temp.email[9]=='@'&& temp.email[13]=='.'){
		if((strcmp(strncpy(temp.email, string+10, 3 ),"ufb")) && (strcmp(strncpy(temp.email, string1+14, 3 ),"edu"))){
         return false;
		}
   
	}
  displayError(8,temp.email);
	return false;



}

bool testStudentData(struct student temp)
{
	if(strlen(temp.name)<5 || strlen(temp.name)>20 ){
			displayError(4,temp.name);
			return false;
		
	}else if(strlen(temp.number)!=9 || temp.number[0]!='u'){
		displayError(5,temp.number);
    return false;


	}else if(strlen(temp.email)!=17 && (!testEmailFormat(temp))){
			displayError(7,temp.email);
      return false;

	}else if(temp.credits<0 ||temp.credits>150 ){
			// displayError(9,temp.credits);
			printf("Error: Student Credits Not Less Than 150 (%d)\n", temp.credits);
			return false;


	}else if(temp.gpa<0 || temp.gpa>4.0 ){
			// displayError(10,(int)temp.gpa);
			printf("Error: Student Gpa Not Less Than 4.00(%f)\n", temp.gpa);
			return false;

	}

			return true;


	
	
	}