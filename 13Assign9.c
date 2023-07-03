#include<stdio.h>
int countd(int n)
{
    if(n>0)
       return countd(n/10)+1;
}
int main()
{
    printf("Total digit of this numbers is %d",countd(656743290));
    return 0;
}