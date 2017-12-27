#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int *a[10];
	int i,x,y,z;
	printf("\n Enter the array elements");
	scanf("%d %d %d", &x,&y,&z);
	a[0]=&x;
	a[1]=&y;
	a[2]=&z;
	for(i=0;i<3;i++)
	{
		printf("\n The element %d is at location %u",*a[i],a[i]);
	}
}
