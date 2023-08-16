#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;

month = 2; /* Set the month to February */
day = 29;  /* Set the day to 29th */
year = 2000; /* Set the year to 2000, a leap year */

printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);

return (0);
}
