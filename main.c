#include "headers.h"

#define INPUT_BUF_SIZE 60 // Size of the buffer used to read records from input file
#define	SEARCH_BUF_SIZE 25 // Size of the buffer used to read records from search file

struct student createStudent(char record[]);
void processInputFile(struct student* hashTable[], char* filename);
void processSearchFile(struct student* hashTable[], char* filename);
bool testRecord(char record[]);

int main(int argc, char *argv[])
{
	
}

struct student createStudent(char record[])
{
	// Do not forget to use the following functions:
	// strtok() - splits a string into separate parts
	struct student temp;
	// char * name , * number, *email; 
	// int credits;
	// double gpa;
  // temp.name = strtok(record, ',');
	int x = 0;
	strcpy(temp.name, strtok(record, ','));
	strcpy(temp.number, strtok(NULL, ','));
	strcpy(temp.email, strtok(NULL, ','));
	// temp[x].number = (NULL,',');
	// temp[x].email= (NULL, ',');
	temp.credits= (NULL, ',');
	temp.gpa=atof((NULL, ','));
  return temp;



	// strcpy() - copies string data from one variable to another
	// strtol() - converts a string to its integer value
	// atof() 	- converts a string to its double value

	// char temp;

}

void processInputFile(struct student* hashTable[], char* filename)
{
	// Do not forget to use the following functions:

	
	// memset() - fill the buffer array with the specified character
	char buffer [1000];
	FILE *ptr;
	ptr= fopen(filename, 'r');
	int x = 0 ;

	if(!ptr){
		// (error.h)
	}
	else{

		while (fgets(buffer, sizeof(buffer), ptr)){

			testRecord( buffer);
			struct student temp = createStudent( buffer);
			// bool testStudentData(struct student temp)
			testStudentData(temp);
			// void insertStudent(struct student* hashTable[], struct student* temp)
			// struct student* hashTable[], struct student* temp
			insertStudent(hashTable,&temp );
      
			memset(buffer, 0, sizeof buffer);



		}
	}


}

void processSearchFile(struct student* hashTable[], char* filename)
{
	// Do not forget to use the following functions:
	// strtok() - splits a string into separate parts
	// memset() - fill the buffer array with the specified character
}

bool testRecord(char record[])
{

}