//Program to print the current time on the screen
#include<stdio.h> //Including the header files
#include<time.h>
#include<stdlib.h>
void main() //Main Function
{
  time_t current_time;  //Variable of time_t type and it holds the calendar value
   repeat:
    system("clear");
    printf("\t\t***********************\n");
    printf("\t\t*   DIGITAL CLOCK     *\n");  //Some UI
    printf("\t\t***********************\n\n");
    current_time=time(NULL);  //Taking the pointer to the null before evaluating
    printf("\t\t%s",ctime(&current_time));  //Taking the current time of the system by passing
    system("sleep 0.5s"); //the address of the time_t variable into the function and dereferencing it
    goto repeat;
}
