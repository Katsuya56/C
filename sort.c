#include <stdio.h>
int main(void)
{
	int size = 9;
	int array[9] = {3, 7, 2, 1, 4, 5, 9, 6, 8};
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i]>array[j]){
				int wark;
				wark = array[i];
				array[i] = array[j];
				array[j] = wark;
			}
		}
	}

	printf("\n");
		for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
}