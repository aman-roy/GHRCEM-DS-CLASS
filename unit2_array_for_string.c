//taking 10 user input in an array
#include<stdio.h>
void main()
{

    char name[10][20];
    printf("enter value of array");
    //using for loop to take user input in array
    for(int i=0; i<=9; i++)
    {
        scanf("%s",name[i]);
    }
    //using for loop to display data stored in array
    for(int j=0; j<=9; j++)
    {
        printf("Name is::%s\n",name[j]);
    }
}
