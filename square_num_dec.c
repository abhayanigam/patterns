#include <stdio.h>
int main()
{
	int size;
	printf("Enter the number :");
	scanf("%d",&size);

	for (int i = size; i >= 1; i--)
	{
		for (int j = size; j > i; j--)
		{
			printf("%d ",j);
		}
		for (int j = 1; j <= 2*i+1; j++)
		{
			printf("%d ",i);
		}
		for (int j = i+1; j <= size; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	for (int i = 1; i < size; i++)
	{
		for (int j = size; j > i; j--)
		{
			printf("%d ",j);
		}
		for (int j = 1; j <= 2*i+1; j++)
		{
			printf("%d ",i);
		}
		for (int j = i+1; j <= size; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}