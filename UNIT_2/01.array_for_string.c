#include<stdio.h>
#define SIZE 10


int main()
{
    char name[SIZE][20];

    printf("enter %d values..\n", SIZE);

    //using for loop to take user input in array
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%s",name[i]);
    }

    printf("\nPrinting all the values\n");
    //using for loop to display data stored in array
    for(int j = 0; j < SIZE; j++)
    {
        printf("Name is::%s\n",name[j]);
    }

    return 0;
}


/*

Output:

enter 10 values..
dfdg fbsg nfjfs dbzk dvni abdkj davnk avdk afe uiaef

Printing all the values
Name is::dfdg
Name is::fbsg
Name is::nfjfs
Name is::dbzk
Name is::dvni
Name is::abdkj
Name is::davnk
Name is::avdk
Name is::afe
Name is::uiaef


*/
