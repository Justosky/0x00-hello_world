#include "main.h"

/**
*jack_bauer - prints all hours and minutes on jack bauer favorite day.
*Return: Always 0 (SUCCESS)
*/

void jack_bauer(void)

{
	int jack_bauer_hours;

	int jack_bauer_minutes;

	for (jack_bauer_hours = 0; jack_bauer_hours < 24;
		 jack_bauer_hours++)
		{
		for (jack_bauer_minutes = 0; jack_bauer_minutes < 60;
			 jack_bauer_minutes++)
			{
			_putchar((jack_bauer_hours / 10) + '0');
			_putchar((jack_bauer_hours % 10) + '0');
			_putchar(':');
			_putchar((jack_bauer_minutes / 10) + '0');
			_putchar((jack_bauer_minutes % 10) + '0');
			_putchar('\n');
			}
		}
}
