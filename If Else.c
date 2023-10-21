#include<stdio.h>
void main(){
	
	int a;
	
	printf("---If Else---\n\n");
	printf("Student Name: Labh Chandra Bothra\n");
	printf("Register Num: 2260387\n\n");
	
	
	printf("Enter the value of marks:\n");
	scanf("%d",&a);
	printf("\n");
	
	if(a<40){
		printf("Student is not Pass");
	}
	else if(a>40 & a<50){
		printf("Student is Pass");
	}
	else if(a>50 & a<60){
		printf("Student is Average");
	}
	else if(a>60 & a<70){
		printf("Student is Above Average");
	}
	else if(a>70 & a<80){
		printf("Student is Good");
	}
	else if(a>80 & a<90){
		printf("Student is Outstanding");
	}
	else{
		printf("Student is Excellent");
	}
}