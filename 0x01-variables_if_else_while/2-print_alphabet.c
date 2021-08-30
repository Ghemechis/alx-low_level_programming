#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
