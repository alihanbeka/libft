#include <stddef.h>

static size_t	ft_word_count(char const* s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char* ft_get_word(char const* s, size_t start, size_t len)
{
	char* word;
	size_t	i;

	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_split(char** split, size_t word)
{
	while (word > 0)
	{
		word--;
		free(split[word]);
	}
	free(split);
}

char** ft_split(char const* s, char c)
{
	char** split;
	size_t	i;
	size_t	start;
	size_t	word;

	split = malloc(sizeof(char*) * (ft_word_count(s, c) + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			split[word] = ft_get_word(s, start, i - start);
			if (split[word] == NULL)
				return (ft_free_split(split, word), NULL);
			word++;
		}
	}
	split[word] = NULL;
	return (split);
}