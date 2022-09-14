#pragma once // Prevents the header file from loading multiple times
#include "headers.h"

enum types{
  CreditsEqual,
  CreditsLess,
  CreditsMore,
  EmailEqual,
  EmailContain,
  FullName, 
  FirstName ,
  LastName,
  GpaEqual,
  GpaLess,
  GpaMore,
  StudentNumberEqual,
  StudentNumberContain
};


void performSearch(struct student* array[], char* type, char* string);

void performSearch(struct student* array[], char* type, char* string)
{
  

	switch (*type)
  {
  case CreditsEqual:
   printf("Searching Records Where Credits Is %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->credits == atoi(string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case CreditsLess:
    printf("\n");
    printf("Searching Records Where Credits <  %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->credits < atoi(string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case CreditsMore:
     printf("\n");
    printf("Searching Records Where Credits >  %s:\n", string);
		
    for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->credits > atoi(string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case EmailEqual:
    printf("\n");
    printf("Searching Records Where Email Is %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
    if(array[i] != NULL){
		if(strcmp(array[i]->email, string)==0){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case EmailContain:
    printf("\n");
    printf("Searching Records Where Email Contains %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(strstr(array[i]->email, string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case FullName:
    printf("\n");
  printf("Searching Records Where Full Name Is %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(strcmp(array[i]->name, string)==0){
			displayRecord(array, i);
			
		}
    }

    }
    break;
  case FirstName:
   printf("\n");
    printf("Searching Records Where First Name Is  %s:\n", string);
		
    for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(strstr(array[i]->name, string)){
			displayRecord(array, i);
			
		}
    }

    }
    break;
  case LastName:
    printf("\n");
    printf("Searching Records Where Last Name Is %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(strstr(array[i]->name, string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case GpaEqual:
    printf("\n");
    printf("Searching Records Where GPA Is %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->gpa == atof(string)){
			displayRecord(array, i);
			
		}
    }
  }
    break;
  case GpaLess:
    printf("\n");
    printf("Searching Records Where GPA < %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->gpa < atof(string)){
			displayRecord(array, i);
			
		}
    }
  }
    break;
  case GpaMore:
    printf("\n");
    printf("Searching Records Where GPA > %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(array[i]->gpa > atof(string)){
			displayRecord(array, i);
			
		}
    }
    }
    break;
  case StudentNumberEqual:
    printf("\n");
    printf("Searching Records Where Student Number Is %s:\n", string);
		
    for(int i = 0; i<TABLE_SIZE; i++) {
      if(array[i] != NULL){
		if(strcmp(array[i]->number, string)==0){
			displayRecord(array, i);
			
		}
      }
    }
    break;
  case StudentNumberContain:
    printf("\n");
    printf("Searching Records Where Student Number Contains %s:\n", string);
		for(int i = 0; i<TABLE_SIZE; i++) {
		if(array[i] != NULL){
    if(strstr(array[i]->number, string)){
			displayRecord(array, i);
			
		}
    }
  }
    break;
  
  }



  // if( *type== 0){
      
      
    
    
    
  //   printf("Searching Records Where Credits Is %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->credits == atoi(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }
    


  // }else if(*type ==1){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Credits <  %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->credits < atoi(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }

  // }else if(*type==2){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Credits >  %s:\n", string);
		
  //   for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->credits > atoi(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }
  // }else if(*type==3){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Email Is %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
  //   if(array[i] != NULL){
	// 	if(strcmp(array[i]->email, string)==0){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }
  // }else if(*type==4){
    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Email Contains %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(strstr(array[i]->email, string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }
    
  // }
  
  // else if (*type== 5){

  // printf("\n");
  // printf("Searching Records Where Full Name Is %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(strcmp(array[i]->name, string)==0){
	// 		displayRecord(array, i);
			
	// 	}
  //   }

  //   }
  // }
  // else if(*type==6){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where First Name Is  %s:\n", string);
		
  //   for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(strstr(array[i]->name, string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }

  //   }

  // }
  // else if(*type==7){
    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Last Name Is %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(strstr(array[i]->name, string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  //   }
  // }

  // else if(*type==8){

  
    
    
  //   printf("\n");
  //   printf("Searching Records Where GPA Is %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->gpa == atof(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  // }
  // }

  // else if(*type==9){

  
    
    
  //   printf("\n");
  //   printf("Searching Records Where GPA < %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->gpa < atof(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  // }
  // }

  // else if(*type==10){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where GPA > %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(array[i]->gpa > atof(string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  // }
  // }

  // else if(*type==11){

    
    
    
  //   printf("\n");
  //   printf("Searching Records Where Student Number Is %s:\n", string);
		
  //   for(int i = 0; i<TABLE_SIZE; i++) {
  //     if(array[i] != NULL){
	// 	if(strcmp(array[i]->number, string)==0){
	// 		displayRecord(array, i);
			
	// 	}
  //     }
  //   }
  // }
  // else if(*type==12){

  
    
    
  //   printf("\n");
  //   printf("Searching Records Where Student Number Contains %s:\n", string);
	// 	for(int i = 0; i<TABLE_SIZE; i++) {
	// 	if(array[i] != NULL){
  //   if(strstr(array[i]->number, string)){
	// 		displayRecord(array, i);
			
	// 	}
  //   }
  // }
  // }
}
