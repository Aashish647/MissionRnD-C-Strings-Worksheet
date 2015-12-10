/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>
int m=0;
#define SIZE 31
void store(char *, int, int, char*);
int chkWords(char *, char*, int, int);
char ** commonWords(char *str1, char *str2) 
{
	int i, str[10], temp1, temp2, flg1 = 0, flg2;
	char str3[SIZE][SIZE];
	if ((str1 == NULL) || (str2 == NULL) || (str1 == "") || (str2 == ""))
	{
		return NULL;
	}
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (flg1 == 0)
		{
			temp1 = 1;
			flg1 = 1;
		}
		if (str1[i] == 32)
		{
			temp2 = i - 1;
			flg2=chkWords(str1, str2, temp1, temp2);
			flg1 = 0;
			if (flg2 == 1)
			{
				store(str1, temp1, temp2,*str3);
			}
		}
	}
	return (char **)str3;//(*str3)[10];
	//return NULL;
}

int chkWords(char *s1, char *s2, int lower_limit, int upper_limit)
{
	int i, flg1 = 0, j, flg2 = 0, k;
	for (i = lower_limit, j = 0; s2[j] != '\0'; i++, j++)
	{
		if (s2[j] == 32)
		{
			i = lower_limit;
			if (flg1 == 1)
			{
				break;
			}
		}
		if (s1[i] == s2[j])
		{
			flg1 = 1;
		}
	}
	return flg1;
}

void store(char *s1, int lower_limit, int upper_limit,char *str)
{
	int j;
	for (j = lower_limit; j < upper_limit; j++)
	{
		str[m++] = s1[j];
	}
}