/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdlib.h>
int findLen(char *);
char KthIndexFromEnd(char *str, int K) 
{
	int len;
	if ((str == NULL) || (K < 0))
	{
		return '\0';
	}
	len = findLen(str);
	if (K > len)
	{
		return '\0';
	}
	len = len - 1;
	for (; K != 0;K--,len--)
	{ 
	}
	return str[len];
}

int findLen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return i;
}