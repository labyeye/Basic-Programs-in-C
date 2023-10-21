#include<stdio.h>
void main(){
	
	int a,b,c;
	char cho;
	
	printf("Stu Name: Labh Chandra Bothra\n");
	printf("Reg No. : 2260387\n\n");
	printf("----Area Of Different Shapes----\n\n");
	
	printf("Choose Your Shape to get the Area\n");
	printf("A:Circle\n");
	printf("B:Square\n");
	printf("C:Rectangle\n");
	printf("D:Triangle\n");
	scanf("%c",&cho);
	printf("\n");
	
	switch(cho)
	{
		case 'A':
			printf("Enter the value of a\n");
			scanf("%d",&a);
			c=(3.14*a*a);
			printf("Area of Circle is: %d",c);
			break;
		case 'B':
			printf("Enter the value of a\n");
			scanf("%d",&a);
			c=a*a;
			printf("Area of Square is: %d",c);
			break;
		case 'C':
			printf("Enter the value of a and b\n");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("Area of Rectangle is: %d",c);
			break;
		case 'D':
			printf("Enter the value of a and b\n");
			scanf("%d %d",&a,&b);
			c=0.5*a*b;
			printf("Area of Triangle is: %d",c);
			break;
		default:
			printf("Invalid Entry");
			break;		
	}
	
	
}