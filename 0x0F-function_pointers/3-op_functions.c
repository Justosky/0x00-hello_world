#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - opp add
  * @a: a variable
  * @b: a variable
  * Return: An interger
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - performs substraction
  * @a: a variable
  * @b: a variable
  * Return: Returns an interger
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - A function that multiplies two intergers
  * @a: The first interger
  * @b: The second interger
  * Return: A an interger which is the result of a * b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - performs division operation
  * @a: an interger a
  * @b: interger b
  * Return: a / b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - computes the modulos of a mod b
  * @a: an interger
  * @b: ...an interger
  * Return: a mod b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
