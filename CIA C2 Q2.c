#include<stdio.h>
void main(){
	
	int a;
	float a1,a2,a3,a4;
	printf("Student Name: Labh Chandra Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("----Electricity Bill Calculator----\n\n");
	
	printf("Enter your Electricity Unit Charges:");
	scanf("%d",&a);
	
	if(a<=50){
		a1=a*0.50;
		printf("Your Electricity Bill:%f",a1);
	}
	else if(a>=51 & a<=100){
		a2=a*0.75;
		printf("Your Electricity Bill:%f",a2);
	}
	else if(a>=101 & a<=249){
		a3=a*1.20;
		printf("Your Electricity Bill:%f",a3);
	}
	else{
		a4=a*1.5;
		printf("Your Electricity Bill:%f",a4);
	}
}
	
	
	