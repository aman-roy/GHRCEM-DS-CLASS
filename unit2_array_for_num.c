//taking 10 user input in an array
#include<stdio.h>
void main()
{
    int array[10];
    printf("enter value of array");
    //using for loop to take user input in array
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&array[i]);
    }
    //using for loop to display data stored in array
    for(int j=0; j<=9; j++)
    {
        printf("value are %d\n",array[j]);
    }
}
