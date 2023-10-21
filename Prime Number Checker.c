#include<stdio.h>
void main(){
	int num,count=0,i;
	
	printf("Enter Number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Number Is Prime Number");
	}
	else{
		printf("Number is Not Prime");
	}
}