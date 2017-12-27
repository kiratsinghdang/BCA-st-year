#include<stdio.h>
void main()
{
	int *ptr;
	int a,b;
	a=10;
	ptr=&a;
	b=*ptr;
	printf ("memory address of a=%d \n", (void *)  &a);
	printf ("memory address of b=%d \n", (void *) &b);
	printf ("memory address of ptr=%d \n", (void *) &ptr);
	printf ("Values are :\n a=%d \n b=%d \n ptr=%d \n",a,b,ptr);
}
