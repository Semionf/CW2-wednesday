#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)
void copyFromOriginal(char[]);
int main()
{
	char str[100] = "duplicateString";
	copyFromOriginal(str);
}

void copyFromOriginal(char fileName[])
{
	char str[100];
	char str1[100];
	strcpy(str, fileName);
	strcpy(str1, fileName);
	char copy[5] = " copy";
	char ch = 0;
	strcat(str1, ".txt");
	strcat(str, "copy.txt");
	FILE* f = fopen(str1, "r");
	FILE* f1 = fopen(str, "w");
	while (ch != EOF)
	{
		ch = fgetc(f);
		if (ch != EOF)
		{
			fputc(ch, f1);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		fputc(copy[i], f1);
	}
	fclose(f1);
	fclose(f);
}

