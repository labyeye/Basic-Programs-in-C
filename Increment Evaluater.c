#include<stdio.h>
int main(){
	
	printf("Student Name: Labh Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("A  B  C  D\n\n");
	int a=6,b=17,c=12,d;
	d=a++ + b--;
	printf("%d %d %d %d\n",a,b,c,d);
	
	a=7,b=17,c=12;
	d=++c - --b;
	printf("%d %d %d %d\n",a,b,c,d);
	
	a=7,b=17,c=12;
	d=--a * --b;
	printf("%d %d %d %d\n",a,b,c,d);
	
	a=7,b=17,c=12;
	d=a+1 - b-1;
	printf("%d %d %d %d\n",a,b,c,d);
	
	a=7,b=17,c=12;
	d=c-- - b++;
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}