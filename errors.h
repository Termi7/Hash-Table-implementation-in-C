#pragma once // Prevents the header file from loading multiple times

void displayError(int error, char* errorInfo);

enum{
  MissingInput ='File Not Found error message',
  fileNotFound = 'File Not Found error message',
  blankRecord = 'Blank Line Found',
  corruptRecord ='Corrupt Record',
  shortRecord='Corrupt Record',
  duplicateName='Duplicate Name error message', //fix here
  nameLength='Student Name Not Between 5 and 20' ,
  numberLength='Student Number Not 9 Characters',
  numberFormat='Student Number Is Invalid',
  emailLength ='Student Email Not 17 Characters',
  emailFormat='Student Email Format Is Invalid',
  creditsValue='Student Credit Not Less Than 150' ,
  GPAValue='Student GPA Not Less Than'
};

void displayError(int error, char* errorInfo)
{
	if(error==1){
    printf("Error: File Not Found error message\n");
  }
  else if(error==2){
    printf("Error: %s (%s)\n",corruptRecord, errorInfo);
  }
  else if(error ==4){
    printf("Error: %s (%s)\n",nameLength, errorInfo);
  }
  else if(error==5){
    printf("Error: %s (%s)\n",numberLength, errorInfo);
  }
  else if(error =6){
    printf("Error: %s (%s)\n",numberFormat, errorInfo);
  }
  else if(error==7){

    printf("Error: %s (%s)\n",emailLength, errorInfo);
  }
  else if(error==8){
    printf("Error: %s (%s)\n",emailFormat, errorInfo);
  }
  else if(error ==9){
    printf("Error: %s (%s)\n",creditsValue, errorInfo);
  }
 else if(error==10){
  printf("Error: %s (%s)\n",GPAValue, errorInfo);
 }
  else if(error==11){
  printf("Error: %s)\n",duplicateName, errorInfo);
 }
  

 

  
  

  }
  
  
