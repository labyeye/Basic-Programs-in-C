// assignment operators
#include<stdio.h>
void main(){
	
	//printing details of Student
	printf("Student Name: Labh Chandra Bothra \n");
	printf("Register No:  2260387 \n\n");
	
	//defining variables
	int a,b,c;
	printf("Enter the value of a and c:",a,c); //printing to ask for input
	scanf("%d %d",&a,&c);   //making program to ask input
	a+=c;  //a=a+c
	printf("The value of a is: %d \n",a); //printing the value of a
	a-=c;  //a=a-c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a%=c;  //a=a%c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a*=c;  //a=a*c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a/=c;  //a=a/c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a^=c;  //a=a^c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a|=c;  //a=a|c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a>>=c; //a=a>>c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a&=c;  //a=a&c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	a<<=c; //a=a<<c
	printf("The value of a is: %d \n",a); //printing the value of a after getting new value
	
}
