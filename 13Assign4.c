#include<stdio.h>
int sumdigit(int n)
{
    if(n>0)
        return sumdigit(n/10)+n%10;
}
int main()
{
    int s;
    s=sumdigit(7653667);
    printf("%d is",s);
    return 0;
}