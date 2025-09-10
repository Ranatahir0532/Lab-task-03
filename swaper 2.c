/*Repeat the program again without using a third variable.*/
#include<stdio.h>
main(){
	int a,b;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	printf("before swaping \nnumber1=%d \nnumber2=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=b-a;
	printf("after swaping \nnumber1=%d \nnumber2=%d",a,b);
	return 0;
}
