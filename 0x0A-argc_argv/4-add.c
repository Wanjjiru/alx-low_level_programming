#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check for digits in astring
 * @str: array of string
 * Return: Always 0
 */
int check_num(char *str)
{
	/*variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*strlen counts string*/

	{
		if (!isdigit(str[count])) /*check for digits in a str*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print program name
 * @argc:checks  arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{

	/*variables used*/
	int count;
	int x;
	int sum = 0;

	count = 1;
	while (count < argc) /*checks the entire array*/
	{
		if (check_num(argv[count]))

		{
			x = atoi(argv[count]); /*atoi- changes string to int*/
			sum += x;
		}

		/*Do this if no. contains symbols*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
