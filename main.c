
#include <stdio.h>

int is_ch(char ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

int main()
{
	char a[100];
	int res = 0, curr_len = 0, i = 0, space = 0;

	printf("\n Enter a string: ");
	while ((a[i] = getchar()) != '\n')
	{
		i++;

		if (i >= 100)
		{
			printf("\n WARNING: You entered a lot of characters, but that's alright, i can handle that :3\n");
			break;
		}
	}

	for (i = 0; a[i] != '\0'; i++)
	{
		if (is_ch(a[i]))
		{
			curr_len++;
		}
		else
		{
			if (curr_len > res)
			{
				res = curr_len;
				space = i;
			}
			curr_len = 0;
		}
	}

	i = space - res;

	printf("\n Word with max length: ");
	for (i; i != space; i++)
	{
		putchar(a[i]);
	}

	printf("\n");
	return 0;
}