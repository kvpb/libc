/*
**
** QWASAR.IO -- my_isalpha
**
** @param {char} param_1
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int isalpha(char c)
{
	return ( ( 65 <= c && c <= 90 ) || ( 97 <= c && c <= 122 ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = 'A';
	char c_1 = 'a';
	char c_2 = '0';

	printf("%d\n", isalpha(c_0));
	printf("%d\n", isalpha(c_1));
	printf("%d\n", isalpha(c_2));
	return 0;
}*/ //	debug code
