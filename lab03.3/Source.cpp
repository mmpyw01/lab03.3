#include<stdio.h>
int main()
{
	int num, i, j;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (2 * num) - 1; j++)
		{
			if (j > i && j < (2 * num - i - 2)) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	for (i = num - 2; i >= 0; i--)
	{
		for (j = 0; j < (2 * num) - 1; j++)
		{
			if (j > i && j <= (2 * num - i - 3)) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}