#include<stdio.h>
void main(){

	int a,b,c,d,e,total;
	float res;
	
	printf("Student Name: Labh Chandra Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("----Exam Marks Calculator----\n\n");
	
	printf("Enter Subject Marks:\n");
	printf("Physics:");
	scanf("%d",&a);
	printf("Chemistry:");
	scanf("%d",&b);
	printf("Biology:");
	scanf("%d",&c);
	printf("Mathematics:");
	scanf("%d",&d);
	printf("Computer Programming:");
	scanf("%d",&e);
	printf("\n");
	
	total=a+b+c+d+e;
	res=total/5;
	
	if(res>=90){
		printf("Grade A");
	}
	else if(res>=80 & res<90){
		printf("Grade B");
	}
	else if(res>=70 & res<80){
		printf("Grade C");
	}
	else if(res>=60 & res<70){
		printf("Grade D");
	}
	else if(res>=40 & res<60){
		printf("Grade E");
	}
	else{
		printf("Grade F");
	}
	
}