#include<stdio.h>
void main ()
{
	int a[10],i,n,*ptr,min;
	printf("\n How many elements are there in an array ?  ");
	scanf("%d",&n);
	printf("\n Enter the elements in an array : ");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	ptr=&a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(*ptr<min)
			min=*ptr;
		ptr++;
	}
	printf("\n The element is %d \n",min);
}
