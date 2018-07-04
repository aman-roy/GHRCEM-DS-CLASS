#include <stdio.h>

int main()
{
	int a;
	int *p;

	a = 10;
	p = &a;

	printf("a = %d\n", a);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&a = %p\n", &a);
	printf("*(&a) = %d\n", *(&a));
	printf("&p = %p\n", &p);
	printf("*(*(&p)) = %d\n", *(*(&p)));

	return 0;
}

/*

Output:

a = 10
p = 0x7ffc192f7f5c
*p = 10
&a = 0x7ffc192f7f5c
*(&a) = 10
&p = 0x7ffc192f7f60


*/