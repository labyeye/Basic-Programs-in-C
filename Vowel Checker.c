
#include<stdio.h>
void main(){
	
	int op;
	char v;
	
	printf("Student Name: Labh Chandra Bothra\n");
	printf("Register Num: 2260387\n\n");
	printf("----Vowel or Consonant Checker----\n\n");
	printf("1. Vowel Checker\n");
	printf("2. Consonant Checker\n\n");
	
	printf("Enter Checker");
	scanf("%d",&op);
	printf("\n");
	
	switch(op){
		case 1:
			printf("Enter the Character:");
			scanf("%s",&v);
			if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){
				printf("%c is Vowel",v);
			}
			else{
				printf("%c is not Vowel",v);
			}
			break;
		case 2:
			printf("Enter the Character:");
			scanf("%s",&v);
			if(v!='a'||v!='e'||v!='i'||v!='o'||v!='u'){
				printf("%c is Consonant",v);
			}
			else{
				printf("%c is not Consonant",v);
			}
			break;
		}
	}