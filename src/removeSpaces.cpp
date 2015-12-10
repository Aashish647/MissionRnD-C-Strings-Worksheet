/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdlib.h>
char removeSpaces(char *str)
{
	int i, j;
	if ((str == NULL) || (str == ""))
	{
		return '\0';
	}
	for (i = 0; ; i++)
	{
		if ((str[i] == 32) && (str[i - 1] == '\0'))
		{
			break;
		}
		if (str[i] == 32)
		{
			j = i + 1;
			while (str[j] == 32)
			{
				j++;
			}
			str[i] = str[j];
			str[j] = 32;
		}
	}
}