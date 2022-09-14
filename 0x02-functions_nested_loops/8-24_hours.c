#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void) 
{
  int i =0;
int j;
int i_rem;
int j_rem;
  while (i <= 23)	  
    {
      j = 0;
      while (j <= 59)
	      {
	      j_rem = j % 10;
	      i_rem = i % 10;
	  _putchar(i / 10 + '0');
	   _putchar(i_rem + '0');
	  _putchar(':');
	  _putchar(j / 10 + '0');
	  _putchar((j_rem + '0');
		   j++;
	  _putchar('\n');
 }
      i++; 
      j = 0; 
} 
}
