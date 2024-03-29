#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Returns the sum of two numbers.
* @a: The first number
* @b: the second number
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Returns substraction of two numbers
* @a: The first number
* @b: the second number
*
* Return: the difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Returns product of two numbers
* @a: THe first number
* @b: the second number
*
* Return: The product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Returns division of two numbers
* @a: the first number
* @b: the second number
* Return: The quotient of and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Returns the remainder of division of two numbers
* @a: the first number
* @b: the second number
*
* Return: Return the remainder of division of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
