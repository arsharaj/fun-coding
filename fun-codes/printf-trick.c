//Program to print the number the number of characters in a string
#include<stdio.h>

void main() {
	int i;
	char name[100];
	printf("Enter your name without spaces : ");
	scanf("%s",name);
	printf("Name : ");
	i=(printf("%s",name));
	printf("\nNumber of Characters = %d \n",i);
}
