#include "main.h"
/**
 * printDigit - ..
 * @n: ...
 */
 void printDigit(int n) {
        if (n == 0) {
            return;
        }
        printDigit(n / 10);
        putchar('0' + (n % 10));  // Convert the digit to character representation
    }
/**
 * printInteger - ...
 * @num: ...
 */

void printInteger(int num) {
    if (num < 0) {
        putchar('-');  // Print a minus sign for negative numbers
        num = -num;    // Convert the number to positive
    }

    if (num == 0) {
        putchar('0');  // Print '0' for zero
        return;
    }

    printDigit(num);
}
