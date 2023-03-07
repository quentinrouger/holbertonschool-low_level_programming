#include <stdlib.h>
#include <stdio.h>

/**
*main - program that multiplies two numbers.
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, j, res;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]);
j = atoi(argv[2]);
res = i *j;
printf("%d\n", res);
}
return (0);
}
