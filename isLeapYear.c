// 15/05/2013
// Sam Clarke
// UNSW Computing 1
// IsLeapYear

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define START_OF_GREGORIAN_CALENDAR 1582

int isLeapYear(int year){
   
   if((year % 4) == 0){
            
      if((year % 100) == 0 && (year % 400) != 0){
         
         return 0;
         
      } else {
         
         return 1;
         
      }
      
   } else {
      
      return 0;
      
   }
   
}

int main(int argc, const char* argv[]){
   
   int input;
   
   printf("please enter the year you are interested in\n");
   
   scanf("%d", &input);
   
   assert(input >= START_OF_GREGORIAN_CALENDAR);
   
   if(isLeapYear(input) == 1){
      
      printf("is a leap year!\n");
      
   } 
   else if(isLeapYear(input) == 0) {
      
      printf("is not a leap year!\n");
      
   }
   
   return EXIT_SUCCESS;
   
}