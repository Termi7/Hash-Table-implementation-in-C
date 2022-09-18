#pragma once // Prevents the header file from loading multiple times

enum errors{
  FileMissing,
   FileCantR,
  Blank,
  Corrupt,
  ShortR,
  Duplicate, 
  Name ,
  Numberlenght,
  NumberFormat,
  EmailLength,
  EmailFormat,
  Credits ,
  Gpa
};
void displayError(int error, char* errorInfo);




void displayError(int error, char* errorInfo)
{
	switch (error)
  {
  case FileMissing:
    printf("Error: Missing Command-line Arguments");
    break;
  case FileCantR:
    printf("Error: File Not Found error message\n");
    break;
  case Blank:
    printf("Error: Blank Line Found\n");
    break;
  case Corrupt:
    printf("Error: Corrupt Record (%s)\n", errorInfo);
    break;
  case ShortR:
   printf("Error: Short Record (%s)\n", errorInfo);
    break;
  case Duplicate:
    printf("Error: Duplicate Name error message (%s)\n", errorInfo);
    break;
  case Name:
    printf("Error: Student Name Not Between 5 and 20 (%s)\n", errorInfo);
    break;
  case Numberlenght:
    printf("Error: Student Number Not 9 Characters (%s)\n", errorInfo);
    break;
  case NumberFormat:
    printf("Error: Student Number format Is Invalid (%s)\n", errorInfo);
    break;
  case EmailLength:
    printf("Error: Student Email Not 17 Characters (%s)\n", errorInfo);
    break;
  case EmailFormat:
    printf("Error: Student Email Format Is Invalid (%s)\n", errorInfo);
    break;
  case Credits:
    printf("Error: Student Credits Not Less Than 150 (%s)\n", errorInfo);
    break;
  case Gpa:
    printf("Error: Student Gpa Not Less Than 4.00(%s)\n", errorInfo);
    break;
  
  }
  
  }
  
  
