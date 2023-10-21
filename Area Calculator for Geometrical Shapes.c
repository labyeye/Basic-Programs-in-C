
#include<stdio.h>
#define pi 3.14
int main(){
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("---Geometric Shapes Area Calculator---\n\n");

	int a,b,r,calc; 
	float area;
	
	printf("1. Area of Cirlce\n");
	printf("2. Area of Triangle\n");
	printf("3. Area of Rectangle\n\n");
	printf("Enter the Option you want to Calculate");
	scanf("%d",&calc);
	printf("\n");
	
	switch(calc){
		case 1:
			printf("Enter the radius:");
			scanf("%d",&r);
			area = pi*r*r;
			printf("The Area of Circle: %f",area);
			break;
		case 2:
			printf("Enter the Base and Height:");
			scanf("%d %d",&a,&b);
			area = 0.5*a*b;
			printf("The Area of Triangle: %f",area);
			break;
		case 3:
			printf("Enter the Lenght and Breath:");
			scanf("%d %d",&a,&b);
			area = a*b;
			printf("The Area of Rectangle: %f",area);
			break;	
	}
}