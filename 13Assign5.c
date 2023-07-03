#include<stdio.h>
int countd(int);
int main()
{
    printf("Total number of digit in this number is %d",countd(5667646));
    return 0;
}
int countd(int n)
{
    if(n>0)
       return countd(n/10)+1;  
}