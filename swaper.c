/*Write a program to swap two variables using a third variable.*/
#include<stdio.h>
main(){
	int a,b,swap;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	printf("before swaping \nnumber1=%d \nnumber2=%d\n",a,b);
    swap=a;
    a=b;
    b=swap;
    printf("after swaping \nnumber1=%d \nnumber2=%d",a,b);
    return 0;
    
}
