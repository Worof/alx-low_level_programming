#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times, followed by newlines
*/
void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            _putchar(c);
        }
        _putchar('\n');
    }
}
