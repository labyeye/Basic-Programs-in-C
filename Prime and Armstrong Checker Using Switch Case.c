#include<stdio.h>
void main(){
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	
	int p,num,count=0,prog,rem,res=0,orign;
	
	printf("What you want to check\n\n");
	printf("1: Prime Number Checker\n");
	printf("2: Armstrong Number Checken\n\n");
	printf("Enter Your Choice:");
	scanf("%d",&prog);
	printf("\n");
	
	switch(prog){
		case 1:
			printf("----Prime Number Checker----\n\n");
			printf("Enter the Number you want to Check:");
			scanf("%d",&num);
			for(p=1;p<=num;p++)
			{
				if(num%p==0){
					count++;
				}
			}
			if(count==2){
				printf("The Number is Prime Number\n\n");
			}
			else{
				printf("The Number is not Prime Number\n\n");
			}
			break;
			
		case 2:
			printf("----Armstrong Number Checker----\n\n");
			printf("Enter the Number you want to Check:");
			scanf("%d",&num);
			orign = num;
			while (orign!=0){
				rem = orign % 10;
				res += rem * rem * rem;
				orign /= 10;
			}
			if (res == num){
				printf("The Number is an Armstrong number\n\n",num);
			}
			else{
				printf("The Number not an Armstrong number\n\n", num);
			}
			break;
			
		default:
			printf("Invalid Choice");
			break;
	}
	printf("Thank You");
}