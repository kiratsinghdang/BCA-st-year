#include<stdio.h>
int main ()
{
	int a[10],i,n,*ptr,sum;
	printf("\n How many elements in this array ?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the elements: ");
		scanf("%d",&a[i]);
	}
	ptr=&a[0];
	for(i=0;i<n;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("The sum of all the elements in this array is %d",sum);
	}
