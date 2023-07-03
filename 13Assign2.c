#include<stdio.h>
int oddn(int n)
{
    int s;
    if(n==1)
      return 1;
    return oddn(n-1)+(n*2-1); 
}
int main()
{
    int s;
    s=oddn(15);
    printf("Sum is %d",s);
    return 0;
}