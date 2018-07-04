#include <stdio.h>

//function prototype
int fact(int);

int main()
{
    int n,factorial;
    printf("Enter values: ");
    scanf("%d",&n);

    //function calling and passing argument through it
    factorial=fact(n);

    printf("factorial of %d = %d\n",n,factorial);

    return 0;
}

//function defination
int fact(int n)
{
    if(n==0)
        return(1);
    else
        return (n * fact(n-1));
}


/*

Output:

Enter values: 3
factorial of 3 = 6

*/
