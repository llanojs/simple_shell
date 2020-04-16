#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed to dest
 * @dest: char dest
 * @src: char src
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char a;

	for (i = 0; src[i] != '\0'; i++)
	{
		a = src[i];
		dest[i] = a;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcat - concatenates two strings.
 * @dest: string to destiny
 * @src: string to source
 * Return: Return a concatenate string
 */
char *_strcat(char *dest, char *src)
{
	int l_dest, i;

	l_dest = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, l_dest++)
		dest[l_dest] = src[i];

	dest[l_dest] = '\0';

	return (dest);
}

/**
 * _strdup - this functions copy a string.
 * @str: the string to copy
 * Description: this function copy a string)?
 * section header: the header of this function is hsh.
 * Return: this is a void function no return
 **/
char *_strdup(char *str)
{
	int j, l;
	char *s;

	if (!str)
		return (NULL);

	l = _strlen(str) + 1;
	s = _calloc(l, sizeof(char));

	if (!s)
		return (NULL);

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
