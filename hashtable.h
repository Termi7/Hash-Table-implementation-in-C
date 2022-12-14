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
void displayRecord(struct student* temp[], int index);
void initializeTable(struct student* hashTable[]);
void insertStudent(struct student* hashTable[], struct student* temp);
bool testEmailFormat(struct student temp);
// bool testStudentData(struct student temp);



int computerHash(char* input)
{
	int hashValue=0;
	int i = 0;
	while(input[i]!='\0'){
	 hashValue = input[i]+ hashValue;
   i++;
	}
	return (int)(hashValue%MOD_SIZE*HASH_TABLE_SEGMENTS);

 }


void displayHashTable(struct student* hashTable[])
{
	printf("Hash Table Contents\n");
	printf("-----------------\n");
	printf("%s", " ");
	printf("Index  	Name                  	     Number     Email Address         Credits  GPA\n");
	printf("-----  	--------------------  	    	     ---------  -----------------  	-------  ---\n");
   for(int index = 0; index<TABLE_SIZE; index++) {
		if(hashTable[index] != NULL){

				 
				  printf("%4d  		%-20s         %-10s  %-5s       %3d    %.2f\n", index, hashTable[index]->name, hashTable[index]->number, hashTable[index]->email, hashTable[index]->credits, hashTable[index]->gpa);
	
      
   }
	 }
	
}

// void displayHashTable(struct student* hashTable[])
// {
// 	int i = 0;
// 	// printf("Hash Table Log\n");
// 	// 			 printf("--------------\n");
//    for(i = 0; i<TABLE_SIZE; i++) {
// 		if(hashTable[i] != NULL){
     
//         //  printf(" (%d,%d)",hashArray[i]->key,hashArray[i]->data);
				 
// 				 printf("Added Student to Hash Table: %-20s        Target: %-2d, Actual: %-2d\n", hashTable[i]->name, computerHash(hashTable[i]->name), i);
	
//       // else
//       //    printf(" ~~ ");
//    }
// 	 }
	
// }

void displayRecord(struct student* temp[], int index)
{
	
	// printf("Hash Table Contents\n");
	// printf("-----------------\n");
	// printf("%s", " ");
	// printf("Index  Name                  Number     Email Address      Credits  GPA");
	// printf("-----  --------------------  ---------  -----------------  -------  ---");
  printf("       %-20s         %-10s  %-5s       %3d    %.1f\n", temp[index]->name, temp[index]->number, temp[index]->email, temp[index]->credits, temp[index]->gpa);
	
}


// void displayRecord(struct student* temp[], int index)
// {
	
// 	// printf("Hash Table Contents\n");
// 	// printf("-----------------\n");
// 	// printf("%s", " ");
// 	// printf("Index  Name                  Number     Email Address      Credits  GPA");
// 	// printf("-----  --------------------  ---------  -----------------  -------  ---");
  
	
// 	printf("Added Student to Hash Table: %-20s        Target: %-2d, Actual: %-2d\n", temp[index]->name, computerHash(temp[index]->name), index);
	
// }



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
		strcpy(ptrMemory->number, temp->number);
		strcpy(ptrMemory->email, temp->email);
		ptrMemory->credits=temp->credits;
		ptrMemory->gpa=temp->gpa;

		int target=key;
		
		
		while(hashTable[key]!= NULL){
					if(strcmp (hashTable[key]->name, ptrMemory->name)==0){
				   displayError(5,hashTable[key]->name);
				   break;
					}
				
				key = key +1;
				

         key %=TABLE_SIZE;
			
		}
			int actual = key;
			
			
			
			hashTable[key]= ptrMemory;
			printf("Added Student to Hash Table: %-20s        Target: %-2d, Actual: %-2d\n", hashTable[key]->name, computerHash(hashTable[key]->name), key);
			
			// displayRecord(hashTable,key);
			// displayHashTable(hashTable);
			
		}

bool testEmailFormat(struct student temp)
{
  char string[4];
	char string1[4];
	char *ptr= strstr(temp.email,"ufb");
	char *ptr1 = strstr(temp.email,"edu");
	int length = strlen(temp.email);

  if(temp.email[0]=='u'&&temp.email[9]=='@'&& temp.email[13]=='.'){
		
			if(ptr!=NULL && ptr1!=NULL){
			if(((int) (ptr-temp.email))==10 && ((int)(ptr1-temp.email))==14){
         return true;
		}
			}
	}
 
	return false;



}

bool testStudentData(struct student temp)
{
	if(strlen(temp.name)<5 || strlen(temp.name)>20 ){
			displayError(6,temp.name);
			return false;
		
	}else if(strlen(temp.number)!=9){
		displayError(7,temp.number);
    return false;

	}else if(temp.number[0]!='u'){
		displayError(8,temp.number);
    return false;


	}else if(strlen(temp.email)!=17){
			displayError(9,temp.email);
      return false;
	
	}else if(!testEmailFormat(temp)){
			displayError(10,temp.email);
      return false;
	
	}else if(temp.credits<0 ||temp.credits>150 ){
			char intString [10];
			displayError(11,gcvt(temp.credits, 6, intString));
			return false;


	}else if(temp.gpa<0 || temp.gpa>4.0 ){
			char buf[20];
			displayError(12,gcvt(temp.gpa, 6, buf));
			return false;

	}

			return true;


	
	
	}