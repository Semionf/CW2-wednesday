#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main1()
{
	FILE* f = fopen("asterisk.txt", "w");
	if (!f)
	{
		printf("file cannot open");
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		fputc('*',f);
		fputc('\n',f);
	}
	fclose(f);
}

