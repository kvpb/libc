/*
**
** QWASAR.IO -- my_isspace
**
** @param {char} param_1
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int isspace(char c)
{
	return ( ( 9 <= c && c <= 13 || c == 32 ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = 'A';
	char c_1 = 'a';
	char c_2 = '0';
	char c_3 = '\t';
	char c_4 = '\n';
	char c_5 = '\v';
	char c_6 = '\f';
	char c_7 = '\r';
	char c_8 = ' ';

	printf("%d\n", isspace(c_0));
	printf("%d\n", isspace(c_1));
	printf("%d\n", isspace(c_2));
	printf("%d\n", isspace(c_3));
	printf("%d\n", isspace(c_4));
	printf("%d\n", isspace(c_5));
	printf("%d\n", isspace(c_6));
	printf("%d\n", isspace(c_7));
	printf("%d\n", isspace(c_8));
	return 0;
}*/
//	debug code
