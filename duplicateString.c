#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)

int main4()
{
	char str[100];
	int numOfDupes, len;
	FILE* f = fopen("duplicateString.txt", "w");
	if (!f)
	{
		printf("file cannot open");
		exit(1);
	}
	printf("Please enter a string: ");
	gets(str);
	len = strlen(str);
	printf("Please enter a num: ");
	scanf("%d", &numOfDupes);
	for (int i = 0; i < numOfDupes; i++)
	{
		for (int j = 0; j < len; j++)
		{
			fputc(str[j],f);
		}
	}
	fclose(f);
}

