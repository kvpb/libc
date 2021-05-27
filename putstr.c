/*
**
** QWASAR.IO -- my_putstr
**
** @param {char*} param_1
**
** @return {void}
**
*/

#include <unistd.h>

int putchar(char c)
{
	return write(1, &c, 1);
}

void putstr(char* s)
{
	int i = 0;

	while (s[i] != 0)
	{
		putchar(s[i]);
		i++;
	}
}
