#include<stdio.h>
#define SIZE 10

int main()
{
    int array[SIZE];
    printf("enter %d values..\n", SIZE);

    //using for loop to take user input in array
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nPrinting all the values\n");
    //using for loop to display data stored in array
    for(int j = 0; j < SIZE; j++)
    {
        printf("value are %d\n",array[j]);
    }

    return 0;
}

/*

Output:

enter 10 values..
1 2 3 4 5 6 7 8 9 10

Printing all the values
value are 1
value are 2
value are 3
value are 4
value are 5
value are 6
value are 7
value are 8
value are 9
value are 10


*/
