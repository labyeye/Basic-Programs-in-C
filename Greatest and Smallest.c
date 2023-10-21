#include<stdio.h>
void main(){
	
	printf("Student Name: Labh Bothra\n"); 
	printf("Register Num: 2260387\n\n");
	
	printf("---Smallest and Greatest---\n\n");
	
	int a,b,c;
	
	printf("Enter the Values of A,B,C:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n");
	
	
	//finding the smallest number among the three numbers
	if(a<b & a<c){
		printf("The Smallest Valu is : %d",a);
	}
	else if(b<a & b<c){
		printf("The Smallest Number is: %d",b);
	}
	else{
		printf("The Smallest Number is  %d",c);
	}
	
	//finding the greatest number among the three numbers
	if(a>b & a>c){
		printf("\tThe Greatest Numer is: %d",a);
	}
	else if(b>a & b>c){
		printf("\tThe Greatest number is: %d",b);
	}
	else{
		printf("\tThe Greatest Number is: %d",c);
	} 
	
}
	
