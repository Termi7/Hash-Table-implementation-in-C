#pragma once // Prevents the header file from loading multiple times

// Constants for the Student Structure
#define EMAIL_SIZE 18
#define NAME_SIZE 24
#define NUMBER_SIZE 10

// Constants for the Hash Table
#define HASH_TABLE_SEGMENTS 7 // Used in the hashing algoritm
#define MOD_SIZE 5 // Used in the hashing algoritm
#define NEW_LINE 10 // Newline character code
#define TABLE_SIZE 35 // Number of available spaces

int computerHash(char* studentName);
void displayHashTable(struct student* hashTable[]);
void displayRecord(struct student* temp, int index);
void initializeTable(struct student* hashTable[]);
void insertStudent(struct student* hashTable[], struct student* temp);
bool testEmailFormat(struct student temp);
bool testStudentData(struct student temp);

struct student
{
	char name[NAME_SIZE];
	char number[NUMBER_SIZE];
	char email[EMAIL_SIZE];
	int credits;
	double gpa;
};

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

void displayHashTable(struct student* hashTable[])
{
	printf("Hash Table Log\n");
	printf("--------------\n");
	// printf("Added Student to Hash Table: %s        Target: %d, Actual: %d", hashTable[].name, target, actual)
	
}

void displayRecord(struct student* temp, int index)
{
	printf("Hash Table Contents\n");
	printf("-----------------\n");
	printf(' ');
	printf("Index  Name                  Number     Email Address      Credits  GPA");
	printf("-----  --------------------  ---------  -----------------  -------  ---");
  printf("%d  %s          %s  %s       %d  %d", index, temp->name, temp->number, temp->email, temp->credits, temp->gpa);
	
}

void initializeTable(struct student* hashTable[])
{
	
	 for(int i=0;i<TABLE_SIZE; i++){
        strcpy(hashTable[i]->name, NULL);
				strcpy(hashTable[i]->email, NULL);
				strcpy(hashTable[i]->credits, NULL);
				hashTable[i]->credits = 0;
				hashTable[i]->gpa = 0.0;
				// hashTable[i]->next = NULL;
    }
}

void insertStudent(struct student* hashTable[], struct student* temp)
{
	// Do not forget to use the malloc() function to reserve space for the student structure
	// Do not forget to use the strcpy() function to store the string data in the hash table
	
	//int * ptrMemomry ;

	 int key;
	 key =computerHash(temp->name);

	

	struct student *ptrMemory = (struct student*)malloc(TABLE_SIZE * sizeof(struct student));

		strcpy(ptrMemory->name, temp->name);
		strcpy(ptrMemory->name, temp->name);
		strcpy(ptrMemory->name, temp->name);
		ptrMemory->credits=temp->credits;
		ptrMemory->gpa=temp->gpa;

		int target=key;
		
		if(hashTable[key]!= NULL){
			while(strcmp (hashTable[key]->name, temp->name)==0){
				
				key = key +1;
				


			}
			int actual = key;
			hashTable[key] =ptrMemory;


		}



    // newNode->next = NULL;
	

}

bool testEmailFormat(struct student temp)
{



}

bool testStudentData(struct student temp)
{
	if(strlen(temp.name)>=5 || strlen(temp.name)<=20 ){

		return true;
	}else{
		return false;
	}

  if(strlen(temp.number)==9 &&temp.number[0]=='u'){
		return true;
	}else{

		return false;
	}

	if(strlen(temp.email)==17 && testEmailFormat(temp)){

		return true;
	}else{

		return false;
	}
	if(temp.credits>=0 ||temp.credits<=150 ){

		return true;
	}else{
		return false;
	}

	if(temp.gpa>=5 || temp.gpa<=20 ){

		return true;
	}else{
		return false;
	}

	
}