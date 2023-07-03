#include<stdio.h>
int facto(int n)
{
    if(n==0 ||n==1)
       return 1;
    return facto(n-1)*n;   
}
int main()
{
    printf("Factorial is %d",facto(6));
    return 0;
}