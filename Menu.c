#include <stdio.h>
#include <stdlib.h>


int main()
{
 
 printf("choose a menu option from 1 to 4\n");
 printf("1. add a patient\n");
 printf("2. view a patient\n");
 printf("3. search a patient\n");
 printf("4. exit\n");

 int input;
 scanf("%d", &input);

 if (input == 1)
 {
     printf("adding a patient\n");
     
    
 }else if(input == 2)
 {
    printf("viewing a patient\n");

 }else if (input == 3)
 {
    printf("searching for a patient\n");

 }else 
 {

     printf("exiting...\n");
 }
 
 
 

    return 0;
}



