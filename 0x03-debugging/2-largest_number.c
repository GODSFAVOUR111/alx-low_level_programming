#include "main.h"

/**
<<<<<<< HEAD
 *  * largest_number - returns the largest of 3 numbers
 *   * @a: first integer
 *    * @b: second integer
 *     * @c: third integer
 *      * Return: largest number
 *       */
=======
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
>>>>>>> 76d9b0f89683171e935a59bbfb166e9e15dc8059

int largest_number(int a, int b, int c)
{int largest;

<<<<<<< HEAD
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
=======
if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
>>>>>>> 76d9b0f89683171e935a59bbfb166e9e15dc8059
}
