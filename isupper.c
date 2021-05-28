/*
**
** QWASAR.IO -- my_isupper
**
** @param {char} param_1
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int isupper(char c)
{
	return ( ( 65 <= c && c <= 90 ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = 'A';
	char c_1 = 'a';

	printf("%d\n", isupper(c_0));
	printf("%d\n", isupper(c_1));
	return 0;
}*/
//	debug code
