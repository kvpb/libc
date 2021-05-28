/*
**
** QWASAR.IO -- my_islower
**
** @param {char} param_1
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int islower(char c)
{
	return ( ( 97 <= c && c <= 122 ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = 'A';
	char c_1 = 'a';
	char c_2 = '0';

	printf("%d\n", islower(c_0));
	printf("%d\n", islower(c_1));
	printf("%d\n", islower(c_2));
	return 0;
}*/
//	debug code
