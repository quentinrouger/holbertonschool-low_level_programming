#include "3-calc.h"

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: argument vector
 *
* Return: error
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int)(int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		f = get_op_func(argv[2]);
		if (strlen(argv[2]) != 1 || f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", f(num1, num2));
		return (0);
	}
}
