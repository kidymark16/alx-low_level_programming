#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from @n to 98
* @n: number to start from
* 
* Return: Always void
*/
void print_to_98(int n)
{
	int i;
	
	if (n < 98)
	{
		for (i = n ; i <= 97 ; i++)
		{
			printf("%d, ", i);
		}
	}
	
	else
	{
		for (i = n ; i >= 97 ; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
