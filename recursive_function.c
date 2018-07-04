#include<stdio.h>
//function prototype
int fact(int);

void main()
{
    int n,factorial;
    printf("enter values");
    scanf("%d",&n);
    //function calling and passing argument through it
    factorial=fact(n);
    printf("factorial of %d=%d",n,factorial);
}
//function defination
int fact(int n)
{
    if(n==0)
        return(1);
    else
        return(n*fact(n-1));
}
