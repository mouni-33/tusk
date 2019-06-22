#include<stdio.h>
int main()
{
   long n,reverse=0,temp,remainder;
   printf("Enter a number\n");
   scanf("%ld",&n);
   temp=n;
   while(n>0)
   {
      remainder=n%10;
      reverse=reverse*10+remainder;
      n=n/10;
   }
   printf("Given number=%ld\n",temp);
   printf("Its reverse is=%ld\n",reverse);
return 0;
}R
