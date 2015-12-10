/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *, int, int);
void str_words_in_rev(char *input, int len)
{
	int flag = 0, i, temp1;
	reverse(input, 0, len);
	for (i = 0; i < len; i++)
	{
		if ((flag == 0) && (input[i] != 32))
		{
			temp1 = i;
			flag = 1;
		}
		if (((input[i] == 32) || (input[i + 1] == '\0')) && (flag==1))
		{
			if (i + 1 == len)
			{
				i = i + 1;
			}
			reverse(input, temp1, i);
			flag = 0;
		}
	}
	
}

void reverse(char *str, int lower_bound,int upper_bound)
{
	int i, j;
	char ch;
	for (i = lower_bound, j = upper_bound - 1; i < j; i++, j--)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}