#include <stdio.h>

int main()
{
	int a[20], n, large, j, k, i, p;

	int digcnt, divsr, buktcnt[10], bukt[10][10], r;

	printf("How many elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	i = 0;
	large = a[i];

	/*Find the largest in array*/
	while(i < n)
	{
		if (a[i] > large)
		{
			large = a[i];
		}
		i++;
	}

	/*number of dig in largest number*/
	digcnt=0;
	while(large>0)
	{
		digcnt = digcnt + 1;
		large = large/10;
	}

	i = 1;
	divsr=1;
	while(i <= digcnt)
	{
		j = 0;
		while(j < 10)
		{
			buktcnt[j] = 0;
			j++;
		}
		j = 0;
		while(j<n)
		{
			r=(a[j]/divsr)%10;
			bukt[r][buktcnt[r]] = a[j];
			buktcnt[r]++;
			j++;
		}
		j = 0;
		p=0;
		while(j < 10)
		{
			k = 0;
			while(k < buktcnt[j])
			{
				a[p] = bukt[j][k];
				p++;
				k++;
			}
			j++;
		}
		i++;
		divsr=divsr*10;
	}

	printf("sorted array\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	return 0;

}

/*

Output:
How many elements: 5
Enter the elements: 4 2 43 24 1
sorted array
1	2	4	24	43	

*/