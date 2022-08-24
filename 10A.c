#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main2()
{
	FILE* f = fopen("fileA.txt", "w");
	if (!f)
	{
		printf("file cannot open");
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			fputc('A', f);
		}
		fputc('\n', f);
	}
	fclose(f);
}

