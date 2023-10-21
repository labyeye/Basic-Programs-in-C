#include<stdio.h>
int main (){
	//print info of student
	printf("Student Name:    Labh Chandra Bothra\n");
	printf("Register Number: 2260387\n\n");
	
	//declare the variables
	int a,b,add,sub,mul,div;
	
	//print and make function to run the program
	printf("----Calculator----\n");
	printf("Enter the values of A: \n");
	scanf("%d",&a);
	printf("Enter the values of B: \n");
	scanf("%d",&b);
	add=a+b;
	printf("The Sum of a and b is: %d \n",add);
	sub=a-b;
	printf("The difference of a and b is: %d \n",sub);
	mul=a*b;
	printf("The Product of a and b is: %d \n",mul);
	div=a%b;
	printf("The Quotient of a and b is: %d \n",div);
	
}