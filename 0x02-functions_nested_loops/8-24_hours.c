#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack Bauer
 *
 * return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hr_remaind;
	int min_remaind;

	while (hrs <= 23)
	{
		while (mins <= 59)
	{
	min_remaind = mins % 10;
	hr_remaind = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hr_remaind + '0');
	_putchar(':');
	_putchar(mins / 10 + '0');
	_putchar(min_remaind + '0');
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;
}
}
