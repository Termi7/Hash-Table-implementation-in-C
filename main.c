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
	
	if (argc <  3) /* argc should be 3 for correct execution */
    {
					displayError(0, argv[0]);    
        exit(1);
    }
    

    else{


		struct student* hashTable[TABLE_SIZE];
		initializeTable(hashTable);


		processInputFile(hashTable, argv[1]);
		// processInputFile(hashTable, "file_good.txt");
		// processInputFile(hashTable, "file_errors.txt");
		

		printf("\n");
		displayHashTable(hashTable);

	// printf("\n");
	// printf("Hash Table Contents\n");
	// printf("-----------------\n");
	// printf("%s", " ");
	// printf("Index  	Name                  	     Number     Email Address         Credits  GPA\n");
	// printf("-----  	--------------------  	    	     ---------  -----------------  	-------  ---\n");
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(hashTable[i] != NULL){
	// 		displayRecord(hashTable, i);
			
	// 	}
	// 	}

		
		printf("\n");
		printf("Search Results\n");
		printf("--------------\n");
		processSearchFile(hashTable, argv[2]);
		// processSearchFile(hashTable, "file_search.txt");
		
	}
 }

struct student createStudent(char* record)
{
	// Do not forget to use the following functions:
	// strtok() - splits a string into separate parts
	struct student temp;
	int x = 0;
	char *s;
	s=strtok(record,",");
	
		strcpy(temp.name, s);
		s= strtok(NULL, ",");
		strcpy(temp.number, s);
		s= strtok(NULL, ",");
		strcpy(temp.email, s);
		s= strtok(NULL, ",");
		temp.credits=strtol(s,NULL, 10);
		s= strtok(NULL, ",");
		temp.gpa=atof(s);
  return temp;



	// strcpy() - copies string data from one variable to another
	// strtol() - converts a string to its integer value
	// atof() 	- converts a string to its double value



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
		// printf("File Not found");
		displayError(1, filename);
	}
	else{
   
	 	int i = 0;
		printf("Hash Table Log\n");
		printf("--------------\n");
		while ( fgets(buffer, INPUT_BUF_SIZE, ptr)){
			// printf("%s", buffer);
			char *p = strstr(buffer,"\r");
			 if(p!=NULL){
			buffer[(int)(p-buffer)]='\0';
			}

			if(testRecord( buffer)){
			 
			struct student temp = createStudent( buffer);
			if(testStudentData(temp)){
				insertStudent(hashTable,&temp );
			}
			
      
			memset(buffer, '\0', INPUT_BUF_SIZE);
			}
			



		}
		fclose(ptr);
	}


}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
void processSearchFile(struct student* hashTable[], char* filename)
{

	char buffer [SEARCH_BUF_SIZE];
	FILE *ptr;
	int index=0;
	
	ptr= fopen(filename,"r");
	int x = 0 ;

	if(!ptr){
		displayError(1, filename);
	}
	else{
   
		while ( fgets(buffer, SEARCH_BUF_SIZE, ptr)){

			char searchType;
			char searchString[20];
	
			char *s;
	
		s=strtok(buffer,",");
		searchType =strtol(s,NULL, 10);
		s= strtok(NULL, ",");
		
		strcpy(searchString, s);
		performSearch(hashTable, &searchType, searchString);

		memset(buffer, '\0', SEARCH_BUF_SIZE);
			}
			}
		fclose(ptr);
	}


bool testRecord(char record[])
{
//displayError(int error, char* errorInfo)
int count = 0;
for (int i=0; i<=strlen(record); i++){ 
    if(record[i] == ',')
         count = count + 1; 
} 


	if(record[0]== '\0'){
	// printf("Blank record");
	displayError(2,record);
	
	return false;

}else if(strlen(record)<37  || strlen(record)>60) {
	// printf("short record");
	displayError(4,record);
	return false;
}else if(count!=4){
	// printf("corrupt Record");
	displayError(3,record);
	return false;
}


   return true;

}

