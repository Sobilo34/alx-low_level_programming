#include "lists.h"

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to the arguments.
 * Return: Always 0 (indicating successful execution).
 */

int main(int argc, char *argv[])
{
	char key[7], *chars;
	int len, a, temp;
	(void)argc;
	chars = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	len = strlen(argv[1]);
	temp = (len ^ 59) & 63;
	key[0] = chars[temp];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += argv[1][a];
	key[1] = chars[(temp ^ 79) & 63];

	temp = 1;
	for (a = 0; a < len; a++)
		temp *= argv[1][a];
	key[2] = chars[(temp ^ 85) & 63];

	temp = 0;
	for (a = 0; a < len; a++)
	{
		if (argv[1][a] > temp)
			temp = argv[1][a];
	}
	srand(temp ^ 14);
	key[3] = chars[rand() & 63];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += (argv[1][a] * argv[1][a]);
	key[4] = chars[(temp ^ 239) & 63];

	for (a = 0; a < argv[1][0]; a++)
		temp = rand();
	key[5] = chars[(temp ^ 229) & 63];

	key[6] = '\0';
	printf("%s", key);
	return (0);
}
