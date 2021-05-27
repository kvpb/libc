/*
**
** QWASAR.IO -- my_strlen
**
** @param {char*} param_1
**
** @return {int}
**
*/

//#include <stdio.h>

int strlen(char* s)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		i++;
	}
	return i;
}

/*int main() {
	char* s_1 = "abc";
	char* s_2 = "RaInB0w d4Sh!";
	char* s_3 = "ThE C4k3 Is a L|3";

	printf("%d\n", my_strlen(s_1));
	printf("%d\n", my_strlen(s_2));
	printf("%d\n", my_strlen(s_3));
	return 0;
}*/
