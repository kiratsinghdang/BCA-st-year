#include<stdio.h>
#include<stdlib.h>
#define size 10
void main (void)
{
	char name[size];
	char *i;
	printf("\n What is your name ?");
	gets(name);
	i=name;
	printf("\n Now pritning your name as ");
	while(*i!='\0')
	{
		printf("%c",*i);
		i++;
	}
}
