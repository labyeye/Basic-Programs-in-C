#include<stdio.h>
void main(){
   int i, num, n, count;
   printf("Student Name: Labh Bothra\n");
   printf("Regitser Num: 2260387\n\n");
   printf("Enter the range: ");
   scanf("%d", &n);
   printf("\n");
   printf("The prime numbers in between the range 1 to %d:\n",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}