/*
**
** QWASAR.IO -- my_string_index
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {int}
**
*/

#include <stdio.h>

int stridx(char* s, char c)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( s[i] == c )
		{
			return i;
		}
		i++;
	}
	return -1;
} // Mais putain, mais c'etait ma 1ere solution ! C'est quoi, ce delire ?
/*int my_string_index(char* param_1, char param_2)
{
//	char haystack = (char*) param_1;
//	char needle = (char*) param_2;
	int i = 0;
	int j = -1;

	while ( param_1[i] != 0 )
	{
		if ( param_1[i] == param_2 )
		{
			j = i; //return i;
			return j;
		}
		i++;
	}
	return j;
}*/

/*int main()
{
	char* s_0 = "hello";
	char c_0 = 'l';
	char* s_1 = "aaaaa";
	char c_1 = 'b';

	printf("%d\n", my_string_index(s_0, c_0));
	printf("%d\n", my_string_index(s_1, c_1));
}*/
