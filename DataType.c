#include <stdio.h>
int main(){
	printf("\t------C Datatypes and Memory Allocation------\n\n");

	int a;
	short int b;
	unsigned int c;
	long int c1;
	unsigned long int d;
	float e;
	double f;
	long double g;
	char h[20];

	printf("Enter Value of a,b,c,c1,d,e,f,g,h:");
	scanf("%d %hd %u %ld %u %f %lf %Lf %s",&a,&b,&c,&c1,&d,&e,&f,&g,&h);
	printf("\n");
	
	printf("a=%d\t\t size of int=%d\n",a,sizeof(a));
	printf("b=%hd\t\t size of short int=%d\n",b,sizeof(b));
	printf("c=%u\t\t size of unsigned short int=%u\n",c,sizeof(c));
	printf("c1=%ld\t\t size of long int=%ld\n",c1,sizeof(c1));
	printf("d=%u\t\t size of unsigned long int=%u\n",d,sizeof(d));
	printf("e=%f\t size of float=%d\n",e,sizeof(e));
	printf("f=%lf\t size of double=%d\n",f,sizeof(f));
	printf("g=%Lf\t size of long double=%d\n",f+g,sizeof(g));
	printf("h=%s\t\t size of char=%d",h,sizeof(h));
	return 0;
}
