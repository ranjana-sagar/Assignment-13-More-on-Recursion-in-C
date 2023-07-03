#include<stdio.h>
int square(int n)
{
    if(n==1)
      return 1;
    return square(n-1)+n*n;  
}
int main()
{
    printf("Sum is %d",square(10));
    return 0;
}
