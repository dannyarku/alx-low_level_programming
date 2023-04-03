#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;
	int slen = 0;

	i = 0;
	j = 0;
	flag = 0;

	while (needle[slen] != '\0')
	{
		slen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < slen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				flag = i;
			}
			if (j == slen - 1)
			{
				return (haystack + flag);

			}
		}
	}
	return (0);
}
