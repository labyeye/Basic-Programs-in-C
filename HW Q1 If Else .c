#include<stdio.h>
void main(){
	
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	
	float a,b,c,d;
	float r1,r2,i;
	
	printf("Enter the Value of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	d=(b*b)*4*(a*c);
	
	if(d>0){
		r1 = (-b+sqrt(d)) / (2*a);
        r2 = (-b-sqrt(d)) / (2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
	}
	else if(d==0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
    }
    else
	{
        r1 = r2 = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
 
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                r1, i, r2);
    }
 
	
	
}