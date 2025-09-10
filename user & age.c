/*Write a C program that asks the user'Ss name and age and print them use 
escape sequences as well.*/
#include<stdio.h>
main(){
	char user[40];
	int age;
	printf("enter your name\n");
	scanf("%s",&user);
	printf("enter your age\n");
	scanf("%d",&age);
	printf("your name is %s\nyour age is %d",user,age);
	
}
