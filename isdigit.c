/*
**
** QWASAR.IO -- my_isdigit
**
** @param {char} param_1
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int isdigit(char c)
{
	return ( ( 48 <= c && c <= 57 ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = 'A';
	char c_1 = 'a';
	char c_2 = '0';

	printf("%d\n", isdigit(c_0));
	printf("%d\n", isdigit(c_1));
	printf("%d\n", isdigit(c_2));
	return 0;
}*/
//	debug code
