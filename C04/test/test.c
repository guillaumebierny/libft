#include <stdio.h>

int f(int i)
{
	int resultat = 1;
	while (i-- != 0)
	{
		resultat *= 10;
	}
	return (resultat);
}

int con_int(char *str)
{
	int res;
	int i;
	int t;

	res = 0;
	t = -1;
	while (str[++t] >= 48 && *str <= 57)
	{
		i = 0;
		while (str[t + i] >= 48 && *str <= 57)
		{
			i++;
		}
		if (i > 1)
		{
			res   += (str[t] - 48) * f(i - 1);
		}
		else if (i == 1)
			res += (str[t] - 48);
	}
	return (res);
}
int main()
{
	printf("%d", con_int("6"));
}
