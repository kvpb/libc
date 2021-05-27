/*
**
** QWASAR.IO -- my_isspace
**
** @param {char} param_1
**
** @return {int}
**
*/

int isspace(char c)
{
	return ( 9 <= c && c <= 13 || c == 32 ) ? 1 : 0; //return ( c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ' );
}
