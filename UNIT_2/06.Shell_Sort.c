#include<stdio.h>
#define MAXSIZE 10
//user defined function definition as we defining function here itself no need to write a prototype
void shellsort(int x[],int n,int inc[],int nofinc)
{
    int i,j,k,span,temp;
    static int nc=0;
    for(i=0; i<nofinc; i++)
    {
        span=inc[i];
        for(j=span; j<n; j++)
        {
            nc++;
            temp=x[j];
            for(k=j-span; k>=0&&temp<x[k]; k=k-span)
            {
                x[k+span]=x[k];
            }
            x[k+span]=temp;
        }
    }
    printf("No of Comparisons required %d\n",nc);

}


void main()
{
    int x[MAXSIZE],n,i,nofinc,inc[MAXSIZE/2];
    //taking no of elemenets from user
    printf("Enter no of elements : ");
    scanf("%d",&n);
    //taking values of elements from user
    printf("Enter elements for sorting : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    //taking user input for no of increment
    printf("Enter no of increments : ");
    scanf("%d",&nofinc);
    //taking user input for values of increment "example 8 4 1 "
    printf("Enter values of increment : ");
    for(i=0; i<nofinc; i++)
    {
        scanf("%d",&inc[i]);
    }
    //function calling
    shellsort(x,n,inc,nofinc);
    //displaying sorted array
    printf("Sorted array is as follows\t");
    for(i=0; i<n; i++)
        printf("%d\t",x[i]);

}
