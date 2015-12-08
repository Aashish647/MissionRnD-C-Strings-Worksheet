/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int numLength(int);
void number_to_str(float number, char *str,int afterdecimal)
{
	int i, x = 1, y, len;
	for (i = 0; i < afterdecimal; i++)
	{
		x = x * 10;
	}
	
	y = number*x;
	
	len = numLength(y);
	
	for (i = 0; i < len - afterdecimal - 1; i++)
	{
		x = x * 10;
	}
	if (y < 0)
	{
		str[0] = '-';
		len = len + 1;
		y = -y;
	}
	if ((afterdecimal == 0) && (y >= 0))
	{
		str[len] = '\0';
		len = len - 1;
	}
	for (i = len; y != 0; i--)
	{

		if ((i == len - afterdecimal) && (afterdecimal != 0))
		{
			str[i] = '.';
		}
		else
		{
			str[i] = y % 10 + '0';
			y = y / 10;
		}
	}
}

int numLength(int n)
{
	int i;
	for (i = 0; n != 0;i++)
	{
		n = n / 10;
	}
	return i;
}