#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main3()
{
	FILE* f = fopen("xLines.txt", "w");
	int x;
	if (!f)
	{
		printf("file cannot open");
		exit(1);
	}
	printf("Please enter a number: ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			fputc('*', f);
		}
		fputc('\n', f);
	}
	fclose(f);
}

