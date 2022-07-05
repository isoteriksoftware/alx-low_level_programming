#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int maxMinutes = 1440; /* Minutes in 24 hours */
	int hourFirstDigit = 0; /* The first digit of the current hour */
	int hourSecondDigit = 0; /* The second digit of the current hour */
	int minuteFirstDigit = 0; /* The first digit of the current minute */
	int minuteSecondDigit = 0; /* The second digit of the current minute */
	int currentMinute = 0; /* The current minute */

	while (currentMinute < maxMinutes)
	{
		_putchar(hourFirstDigit + '0');
		_putchar(hourSecondDigit + '0');
		_putchar(':'); /* Separator */
		_putchar(minuteFirstDigit + '0');
		_putchar(minuteSecondDigit + '0');
		_putchar('\n');

		minuteSecondDigit++;
		if (minuteSecondDigit > 9)
		{
			minuteSecondDigit = 0;
			minuteFirstDigit++;
		}
		if (minuteFirstDigit > 5)
		{
			minuteFirstDigit = 0;
			hourSecondDigit++;
		}
		if (hourSecondDigit > 9)
		{
			hourSecondDigit = 0;
			hourFirstDigit++;
		}
		currentMinute++;

	}
}
