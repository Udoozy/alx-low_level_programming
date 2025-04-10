#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_length = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_length++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				word_count++;
		}
	}
	if (word_count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_length = 0;
			while (str[i + word_length] && str[i + word_length] != ' ')
				word_length++;
			words[k] = malloc(sizeof(char) * (word_length + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < word_length; j++)
				words[k][j] = str[i + j];
			words[k][j] = '\0';
			k++;
			i += word_length - 1;
		}
	}
	words[k] = NULL;
	return (words);
}
