#include<stdio.h>
int sumn(int n)
{
    if(n==1)
      return 1;
    return sumn(n-1)+n;  
}
int main()
{
    int s;
    s=sumn(20);
    printf("%d",s);
    return 0;
}