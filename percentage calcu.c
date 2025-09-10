/*Task 8: Percentage Calculator?
Write a C program that asks the user for their marks in 3 subjects.
Calculate the Percentage.*/
#include<stdio.h>
int main(){
	float subject1,subject2,subject3;
	printf("enter marks of urdu\n");
	scanf("%f",&subject1);
	printf("enter marks of english\n");
	scanf("%f",&subject2);
	printf("enter marks of maths\n");
	scanf("%f",&subject3);
	float obtmarks=subject1+subject2+subject3;
	float percentage=(obtmarks/300)*100;
	printf("your percentage is=%f",percentage);
	return 0;
	
}
