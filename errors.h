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
    printf("Missing Command-line Arguments");
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
  
//   if(error==1){
//     printf("Error: File Not Found error message\n");
//   }
//   else if(error==2){
//     // printf("Error: %d Record (%s)\n",corruptRecord, errorInfo);
//     printf("Error: Corrupt Record (%s)\n", errorInfo);
//   }
//   else if(error==3){
//     // printf("Error: %d Record (%s)\n",corruptRecord, errorInfo);
//     printf("Missing Command-line Arguments");
//   }
//   else if(error ==4){
//     // printf("Error: Student %d Not Between 5 and 20 (%s)\n",nameLength, errorInfo);
//     printf("Error: Student Name Not Between 5 and 20 (%s)\n", errorInfo);
//   }
//   else if(error==5){
//     // printf("Error: Student %d Not 9 Characters (%s)\n",numberLength, errorInfo);
//     printf("Error: Student Number Not 9 Characters (%s)\n", errorInfo);
//   }
//   else if(error ==6){
//     // printf("Error: Student %d Is Invalid (%s)\n",numberFormat, errorInfo);
//     printf("Error: Student Number format Is Invalid (%s)\n", errorInfo);
//   }
//   else if(error==7){

//     // printf("Error: Student %d Not 17 Characters (%s)\n",emailLength, errorInfo);
//      printf("Error: Student Email Not 17 Characters (%s)\n", errorInfo);
//   }
//   else if(error==8){
//     // printf("Error: Student %d Format Is Invalid (%s)\n",emailFormat, errorInfo);
//     printf("Error: Student Email Format Is Invalid (%s)\n", errorInfo);
//   }
//   else if(error ==9){
//     // printf("Error: Student %d Not Less Than 150 (%s)\n",creditsValue, errorInfo);
//     printf("Error: Student Credits Not Less Than 150 (%s)\n", errorInfo);
//   }
//  else if(error==10){
//   // printf("Error: Student %d Not Less Than 4.00(%s)\n",GPAValue, errorInfo);
//   printf("Error: Student Gpa Not Less Than 4.00(%s)\n", errorInfo);
//  }
//   else if(error==11){
//   // printf("Error: %d Name error message (%s)\n",duplicateName, errorInfo);
//   printf("Error: Duplicate Name error message (%s)\n", errorInfo);
//  }else if(error==12){
  

//   // printf("%d Line Found",blankRecord);
//   printf("Error: Blank Line Found\n");
//  }else if(error ==13){
//       // printf("Error: %d Record (%s)\n",shortRecord, errorInfo);
    
//     printf("Error: Short Record (%s)\n", errorInfo);
    
//  }
  

 

  
  

  }
  
  
