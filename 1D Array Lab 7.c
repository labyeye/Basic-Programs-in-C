//Arrays: 1D
//Implementation of linear search;
//Implementation of Sorting;


#include<stdio.h>
int main(){
	
	int a[4],b,i,flag=0;
	
	printf("Enter the Elements:");
	
	for(i=0;i<=4;i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the Number:");
	scanf("%d",&b);
	
	for(i=0;i<4;i++){
		if(a[i]==b){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		printf("Element Found",a[i]);
	}
	else{
		printf("Element not found");
	}
	return 0;

}