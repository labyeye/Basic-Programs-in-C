#include<stdio.h>  
int main(){    
	int n,r,sum=0,temp;
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("Enter the Number: ");    
	scanf("%d",&n);    
	temp=n;    
	while(n>0){    
		r=n%10;    
		sum=(sum*10)+r;    
		n=n/10;
	}   
	if(temp==sum){
		printf("%d is Palindrome number",temp);
	}
	else{
	printf("%d is not Palindrome",temp);
	return 0;
	}
}  