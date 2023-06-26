#include "main.h"
/**
 * printDigit - ..
 * @n: ...
 */
void printDigit(int n)
{
if (n == 0)
{
return;
}
printDigit(n / 10);
putchar('0' + (n % 10));
}
/**
 * printInteger - ...
 * @num: ...
 */

void printInteger(int num)
{
if (num < 0)
{
putchar('-');
num = -num;
}

if (num == 0)
{
putchar('0');
return;
}

printDigit(num);
}
