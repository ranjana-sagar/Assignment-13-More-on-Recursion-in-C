#include<stdio.h>
int power(int n, short int p)
{
    if(p==1)
      return n;
    return power(n,p-1)*n;  
}
int main()
{
    int c;
    c=power(5,7);
    printf("%d",c);
    return 0;
}