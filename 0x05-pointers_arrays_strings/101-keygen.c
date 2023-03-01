#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password for program 101-crackme
 *
 * Return: always 0
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, diff_half;

	srand(time(0));
	while (sum < 2772)
		sum += (password[i++] = 33 + rand() % 94);
	password[i] = '\0';
	if (sum != 2772)
	{
		diff_half = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diff_half))
			{
				password[i] -= diff_half;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diff_half))
			{
				password[i] -= diff_half;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
