#include<stdio.h>
void main(){
	int a[5],b[5],c[5],i;
	printf("Enter the Elements");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]%2==0){
			b[i]=a[i];
			
		}
		else{
			c[i]=a[i];
		
		}
	}
	printf("The Even array are:");
	for(i=0;i<5;i++){
		printf("%d",b[i]);
	}
	printf("The Odd array are:");
	for(i=0;i<5;i++){
		printf("%d",c[i]);
	}
}