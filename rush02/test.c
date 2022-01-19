#include <stdio.h>

int FOR_THE_FIRST_WORD(char *tab[x])
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] && (str[i + 1] < '0' || str[i + 1] > '9'))
	{
		i++;
	}
	while (str[j] && j <=`)
	{
	}
}

int FOR_THE_LAST_WORD(char *str)
{
	int i;
	int count_space;

	i = 0;
	count_space = 0;
	while (str[i] && count_space < 2)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			count_space++;
		i++;
	}
	return (i);
}

