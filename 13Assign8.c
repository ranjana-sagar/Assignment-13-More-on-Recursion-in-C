#include<stdio.h>
int fibo(int n)
{
   if(n==1 || n==2)
     return 1;
   return fibo(n-1)+fibo(n-2);
}        
int main()
{
   int i;
   for(i=1;i<=10;i++)
       printf("%d ",fibo(i));
   return 0;
}