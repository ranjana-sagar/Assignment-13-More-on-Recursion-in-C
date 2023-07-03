#include<stdio.h>
int HCF(int a,int b)
{
    if(a==b)
       return a;
    else if(a%b==0)
       return b;
    else if(b%a==0)
       return a;         
    return a>b?HCF(a%b,b):HCF(b%a,a);         
}
int main()
{
    int h;
    h=HCF(105,91);
    printf("HCF is %d",h);
    return 0;
}