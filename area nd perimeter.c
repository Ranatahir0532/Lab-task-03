/*Task 7: Area and Perimeter of a Rectangle?
1:Write a C program that asks the user for the length 
and width of a rectangle.
2:Calculate and display the area and perimeter.*/
#include<stdio.h>
 main(){
	float length,width;
	printf("enter length of rectangle\n");
	scanf("%f",&length);
	printf("enter width of rectangle\n");
	scanf("%f",&width);
	float area=length*width;
	float perimeter=(length+width)*2;
	printf("area of rectangle=%f\n",area);
	printf("perimeter of rectangle=%f\n",perimeter);
	return 0;
	
}
