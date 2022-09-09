#include "headers.h"

#define INPUT_BUF_SIZE 60 // Size of the buffer used to read records from input file
#define	SEARCH_BUF_SIZE 25 // Size of the buffer used to read records from search file



// struct  student;
struct student createStudent(char* record);
void processInputFile(struct student* hashTable[], char* filename);
void processSearchFile(struct student* hashTable[], char* filename);
bool testRecord(char record[]);

int main(int argc, char *argv[])
{
	
	// if (argc <  2) /* argc should be 2 for correct execution */
  //   {
  //       /* we print argv[0] assuming it is the program name */
  //       /*printf("usage: %s filename", argv[0]);*/
  //       /*return 1;*/
  //       printf("no argument\n");    
  //       exit(1);
  //   }
    

  //   else{


		struct student* hashTable[TABLE_SIZE];
		initializeTable(hashTable);


		// processInputFile(hashTable, argv[1]);
		processInputFile(hashTable, "file_good.txt");


		displayHashTable(hashTable);
		// int type;
		// char*string;
		// performSearch( hashTable,type,  string);

	// }
}

struct student createStudent(char* record)
{
	// Do not forget to use the following functions:
	// strtok() - splits a string into separate parts
	struct student temp;
	int x = 0;
	char *s;
	// char * name , * number, *email; 
	// int credits;
	// double gpa;
  // temp.name = strtok(record, ',');

	// printf("%s",record);
	
		s=strtok(record,",");
	
		strcpy(temp.name, s);
		s= strtok(NULL, ",");
		strcpy(temp.number, s);
		s= strtok(NULL, ",");
		strcpy(temp.email, s);
		// temp[x].number = (NULL,',');
		// temp[x].email= (NULL, ',');
		s= strtok(NULL, ",");
		temp.credits=strtol(s,NULL, 10);
		s= strtok(NULL, ",");
		temp.gpa=atof(s);


	
	
	// strcpy(temp.name, s);


	
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
	char buffer [INPUT_BUF_SIZE];
	FILE *ptr;
	int index=0;
	ptr= fopen(filename,"r");
	int x = 0 ;

	if(!ptr){
		printf("Issues reading file");
	}
	else{

		while ( fgets(buffer, INPUT_BUF_SIZE, ptr)){

			//while(testRecord( buffer)){
			struct student temp = createStudent( buffer);
			// bool testStudentData(struct student temp)
			//testStudentData(temp);
			// void insertStudent(struct student* hashTable[], struct student* temp)
			// struct student* hashTable[], struct student* temp
			insertStudent(hashTable,&temp );
      
			memset(buffer, '\0', INPUT_BUF_SIZE);
			//}
			



		}
		fclose(ptr);
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
   return true;
}