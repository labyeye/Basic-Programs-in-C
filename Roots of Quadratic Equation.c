#include<stdio.h>
#include<math.h>
int main(){
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	
	printf("---Roots of Quadratic Equations---\n\n");
	
	float a,b,c;
	float imag,root1,root2,d;
	
	printf("Enter the value of A,B,C:");
	scanf("%f %f %f",&a,&b,&c);
	printf("\n");
	d=(b* b)-(4*a*c);
	if(d>0){
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("roots are different");
		printf("   the values of root1 is %.2f , root 2 is %.2f",root1,root2);
	}
	else if(d==0){
		root1=root2=-b/(2*a);
		printf("Roots are real and equal");
		printf("   the values of root1 is %.2f , root 2 is %.2f",root1,root2);
	}
	else if(d<0){
		root1=root2=-b/(2*a);
		imag=sqrt(-d)/(2*a);
		printf("roots are imaginary");
		printf("   the real root1 is %.2f+%.2f , root2 is %.2f-%.2f",root1,imag,root2,imag);
	}
	return 0;                                                      
}
	

