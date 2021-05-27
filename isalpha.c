/*
**
** QWASAR.IO -- my_isalpha
**
** @param {char} param_1
**
** @return {int}
**
*/

int isalpha(char c)
{
	return ( ( 65 <= c && c <= 90 ) || ( 97 <= c && c <= 122 ) ) ? 1 : 0;
}
