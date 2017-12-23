#include<stdio.h>
int my_array[]={1,25,-17,4,45,10};
int *ptr;
int *ptrr;
int main(void)
{
int i,loop;
for(loop = 0; loop < 6; loop++)
	{
		printf("%d ", my_array[loop]);
	}
ptr=my_array;
printf("\n\n");
for(i=0;i<=5;i++)
	{
		printf("\n Using 1st method : my_array[%d] = %d",i,my_array[i]);
		printf("\n Using 2nd method : ptr + %d = %d",i,*ptr++);
	}
	return 0;
}
