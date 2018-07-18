#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>

#define MAXSIZE 20

void fibonacci(int *f)    //Construction of the Fibonacci sequence
{
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <MAXSIZE; ++i)
        f[i] = f[i - 2] + f[i - 1];
}

int fibonacci_search(int *a,int key,int n)
{
    int low = 0,high = n - 1;
    int mid = 0;
    int k = 0;
    int F[MAXSIZE];

    fibonacci(F);

    while(n > F[k] - 1) //To calculate n in Fibonacci's position
        ++k;

    for(int i = n; i < F[k] - 1; ++i) //The array of completion, the use of a[n-1]
        a[i] = a[high];

    while(low <= high)
    {
        mid = low + F[k-1] - 1;  //Gold segmentation according to the Fibonacci sequence
        
        if(a[mid] > key)
        {
            high = mid - 1;
            k = k - 1;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
            k = k - 2;
        }
        else
        {
            if(mid <= high) //If true then find the corresponding position
                return mid;
            else
                return -1;
        }
    }
    return -1;
}

int main()
{
    
    int a[MAXSIZE] = {5,15,19,20,25,31,38,41,45,49,52,55,57};
    int k;
    printf("Please enter the search number: ");
    scanf("%d",&k);
    int pos = fibonacci_search(a,k,13);
    if(pos != -1)
        printf("Location: %d\n",pos + 1);
    else
        printf("Element was not found in the array:%d\n",k);
    return 0;
}

/*

Output:
Please enter the search number: 5
Location: 1

*/