#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: param string
 * @needle: substring to locate
 * Return: string or null
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int sx;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (index = 0; haystack[index] != '\0'; index++)
	{
		if (haystack[index] == needle[0])
		{
			for (sx = 0; needle[sx] != '\0'; sx++)
			{
				if (haystack[index + sx] != needle[sx])
				{
					break;
				}
			}
			if (needle[sx] == '\0')
				return (haystack + index);
		}

	}
	return ('\0');
}
